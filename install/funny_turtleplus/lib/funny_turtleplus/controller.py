#!/usr/bin/python3

from funny_turtleplus.dummy_module import dummy_function, dummy_var
import rclpy
from rclpy.node import Node
import numpy as np
import math
from turtlesim.msg import Pose
from geometry_msgs.msg import Twist
from teleop_interfaces.srv import Notify
from turtlesim_plus_interfaces.srv import GivePosition

class ControllerNode(Node):
    def __init__(self):
        super().__init__('controller_node')

        self.create_subscription(Pose, "target", self.target_callback, 10)
        self.notify_client = self.create_client(Notify, '/target_done')

        self.create_subscription(Pose, '/turtle1/pose', self.pose_callback, 10)
        self.cmd_vel_pub = self.create_publisher(Twist, '/turtle1/cmd_vel', 10)
        self.spawn_pizza_client = self.create_client(GivePosition, '/spawn_pizza')

        self.timer = self.create_timer(0.01, self.copy_pizza)

        self.target = [0.0, 0.0]
        self.robot_pose = [0.0, 0.0, 0.0]
        self.chk = 0

    def target_callback(self, msg):
        self.target[0] = msg.x
        self.target[1] = msg.y
        self.get_logger().info(f'x : {self.target[0]} y : {self.target[1]}')

    def pose_callback(self, msg):
        self.robot_pose[0] = msg.x
        self.robot_pose[1] = msg.y
        self.robot_pose[2] = msg.theta

    # def timer_callback(self):
    #     pass

    def copy_pizza(self):
        K_d = 3.2
        K_theta = 5.6
        delta_x = self.target[0] - self.robot_pose[0]
        delta_y = self.target[1] - self.robot_pose[1]
        d = np.sqrt(delta_x**2 + delta_y**2)
        theta = math.atan2(delta_y, delta_x)
        e_angle = theta - self.robot_pose[2]
        e_angle_new = math.atan2(math.sin(e_angle), math.cos(e_angle))
        vx = K_d * d
        wz = K_theta * e_angle_new
        self.cmdvel(vx, wz) # use function cmdvel
        if (d < 0.2 and self.chk == 0):
            position_request = GivePosition.Request() # client -> request

            position_request.x = self.target[0]
            position_request.y = self.target[1]

            self.spawn_pizza_client.call_async(position_request) # call when click on GUI

            position_request = Notify.Request() 
            position_request.trig = True
            self.notify_client.call_async(position_request)
            self.chk = 1

        elif (d >= 0.5):
            self.chk = 0
            position_request = Notify.Request() 
            position_request.trig = False
            self.notify_client.call_async(position_request)
        else:
            position_request = Notify.Request() 
            position_request.trig = False
            self.notify_client.call_async(position_request)           

    def cmdvel(self, v, w): # topic
        msg = Twist() # create topic message
        msg.linear.x = v 
        msg.angular.z = w 
        self.cmd_vel_pub.publish(msg) # publish topic            

def main(args=None):
    rclpy.init(args=args)
    node = ControllerNode()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()

if __name__=='__main__':
    main()