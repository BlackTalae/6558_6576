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

        self.create_subscription(Pose, "/target1", self.target_callback1, 10)
        self.notify1_client = self.create_client(Notify, '/target1_done')
        self.create_subscription(Pose, '/turtle1/pose', self.pose_callback1, 10)
        self.cmd_vel_pub1 = self.create_publisher(Twist, '/turtle1/cmd_vel', 10)

        self.create_subscription(Pose, "/target2", self.target_callback2, 10)
        self.notify2_client = self.create_client(Notify, '/target2_done')
        self.create_subscription(Pose, '/turtle2/pose', self.pose_callback2, 10)
        self.cmd_vel_pub2 = self.create_publisher(Twist, '/turtle2/cmd_vel', 10)

        self.create_subscription(Pose, "/target3", self.target_callback3, 10)
        self.notify3_client = self.create_client(Notify, '/target3_done')
        self.create_subscription(Pose, '/turtle3/pose', self.pose_callback3, 10)
        self.cmd_vel_pub3 = self.create_publisher(Twist, '/turtle3/cmd_vel', 10)

        self.create_subscription(Pose, "/target4", self.target_callback4, 10)
        self.notify4_client = self.create_client(Notify, '/target4_done')
        self.create_subscription(Pose, '/turtle4/pose', self.pose_callback4, 10)
        self.cmd_vel_pub4 = self.create_publisher(Twist, '/turtle4/cmd_vel', 10)

        self.spawn_pizza_client = self.create_client(GivePosition, '/spawn_pizza')

        self.timer = self.create_timer(0.1, self.copy_pizza)

        self.target = [[0.0, 0.0], [0.0, 0.0], [0.0, 0.0], [0.0, 0.0]]
        self.robot_pose = [[0.0, 0.0, 0.0], [0.0, 0.0, 0.0], [0.0, 0.0, 0.0], [0.0, 0.0, 0.0]]

    def target_callback1(self, msg):
        self.target[0][0] = msg.x
        self.target[0][1] = msg.y
        # self.get_logger().info(f'x : {self.target[0][0]} y : {self.target[0][1]}')

    def pose_callback1(self, msg):
        self.robot_pose[0][0] = msg.x
        self.robot_pose[0][1] = msg.y
        self.robot_pose[0][2] = msg.theta

    def cmdvel1(self, v, w): # topic
        msg = Twist() # create topic message
        msg.linear.x = v 
        msg.angular.z = w 
        self.cmd_vel_pub1.publish(msg) # publish topic   

    def target_callback2(self, msg):
        self.target[1][0] = msg.x
        self.target[1][1] = msg.y
        # self.get_logger().info(f'x : {self.target[1][0]} y : {self.target[1][1]}')

    def pose_callback2(self, msg):
        self.robot_pose[1][0] = msg.x
        self.robot_pose[1][1] = msg.y
        self.robot_pose[1][2] = msg.theta

    def cmdvel2(self, v, w): # topic
        msg = Twist() # create topic message
        msg.linear.x = v 
        msg.angular.z = w 
        self.cmd_vel_pub2.publish(msg) # publish topic   

    def target_callback3(self, msg):
        self.target[2][0] = msg.x
        self.target[2][1] = msg.y
        # self.get_logger().info(f'x : {self.target[2][0]} y : {self.target[2][1]}')

    def pose_callback3(self, msg):
        self.robot_pose[2][0] = msg.x
        self.robot_pose[2][1] = msg.y
        self.robot_pose[2][2] = msg.theta

    def cmdvel3(self, v, w): # topic
        msg = Twist() # create topic message
        msg.linear.x = v 
        msg.angular.z = w 
        self.cmd_vel_pub3.publish(msg) # publish topic   

    def target_callback4(self, msg):
        self.target[3][0] = msg.x
        self.target[3][1] = msg.y
        # self.get_logger().info(f'x : {self.target[3][0]} y : {self.target[3][1]}')

    def pose_callback4(self, msg):
        self.robot_pose[3][0] = msg.x
        self.robot_pose[3][1] = msg.y
        self.robot_pose[3][2] = msg.theta

    def cmdvel4(self, v, w): # topic
        msg = Twist() # create topic message
        msg.linear.x = v 
        msg.angular.z = w 
        self.cmd_vel_pub4.publish(msg) # publish topic   

    def copy_pizza(self):
        K_d = 3.2
        K_theta = 5.6
        delta_x1 = self.target[0][0] - self.robot_pose[0][0]
        delta_y1 = self.target[0][1] - self.robot_pose[0][1]
        d1 = np.sqrt(delta_x1**2 + delta_y1**2)
        theta1 = math.atan2(delta_y1, delta_x1)
        e_angle1 = theta1 - self.robot_pose[0][2]
        e_angle_new1 = math.atan2(math.sin(e_angle1), math.cos(e_angle1))
        vx1 = K_d * d1
        wz1 = K_theta * e_angle_new1
        self.cmdvel1(vx1, wz1) # use function cmdvel
        if (d1 < 0.05):
            target_request1 = GivePosition.Request() # client -> request

            target_request1.x = self.target[0][0]
            target_request1.y = self.target[0][1]
            if target_request1.x != 0 and target_request1.y != 0:
                self.spawn_pizza_client.call_async(target_request1) # call when click on GUI

            position1_request = Notify.Request() 
            position1_request.trig = True
            self.notify1_client.call_async(position1_request)      

        delta_x2 = self.target[1][0] - self.robot_pose[1][0]
        delta_y2 = self.target[1][1] - self.robot_pose[1][1]
        d2 = np.sqrt(delta_x2**2 + delta_y2**2)
        theta2 = math.atan2(delta_y2, delta_x2)
        e_angle2 = theta2 - self.robot_pose[1][2]
        e_angle_new2 = math.atan2(math.sin(e_angle2), math.cos(e_angle2))
        vx2 = K_d * d2
        wz2 = K_theta * e_angle_new2
        self.cmdvel2(vx2, wz2) # use function cmdvel
        if (d2 < 0.05):
            target_request2 = GivePosition.Request() # client -> request

            target_request2.x = self.target[1][0]
            target_request2.y = self.target[1][1]
            if target_request2.x != 0 and target_request2.y != 0:
                self.spawn_pizza_client.call_async(target_request2) # call when click on GUI

            position2_request = Notify.Request() 
            position2_request.trig = True
            self.notify2_client.call_async(position2_request)   

        delta_x3 = self.target[2][0] - self.robot_pose[2][0]
        delta_y3 = self.target[2][1] - self.robot_pose[2][1]
        d3 = np.sqrt(delta_x3**2 + delta_y3**2)
        theta3 = math.atan2(delta_y3, delta_x3)
        e_angle3 = theta3 - self.robot_pose[2][2]
        e_angle_new3 = math.atan2(math.sin(e_angle3), math.cos(e_angle3))
        vx3 = K_d * d3
        wz3 = K_theta * e_angle_new3
        self.cmdvel3(vx3, wz3) # use function cmdvel
        if (d3 < 0.05):
            target_request3 = GivePosition.Request() # client -> request

            target_request3.x = self.target[2][0]
            target_request3.y = self.target[2][1]
            if target_request3.x != 0 and target_request3.y != 0:
                self.spawn_pizza_client.call_async(target_request3) # call when click on GUI

            position3_request = Notify.Request() 
            position3_request.trig = True
            self.notify3_client.call_async(position3_request)   

        delta_x4 = self.target[3][0] - self.robot_pose[3][0]
        delta_y4 = self.target[3][1] - self.robot_pose[3][1]
        d4 = np.sqrt(delta_x4**2 + delta_y4**2)
        theta4 = math.atan2(delta_y4, delta_x4)
        e_angle4 = theta4 - self.robot_pose[3][2]
        e_angle_new4 = math.atan2(math.sin(e_angle4), math.cos(e_angle4))
        vx4 = K_d * d4
        wz4 = K_theta * e_angle_new4
        self.cmdvel4(vx4, wz4) # use function cmdvel
        if (d4 < 0.05):
            target_request4 = GivePosition.Request() # client -> request

            target_request4.x = self.target[3][0]
            target_request4.y = self.target[3][1]
            if target_request4.x != 0 and target_request4.y != 0:
                self.spawn_pizza_client.call_async(target_request4) # call when click on GUI

            position4_request = Notify.Request() 
            position4_request.trig = True
            self.notify4_client.call_async(position4_request)             

def main(args=None):
    rclpy.init(args=args)
    node = ControllerNode()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()

if __name__=='__main__':
    main()