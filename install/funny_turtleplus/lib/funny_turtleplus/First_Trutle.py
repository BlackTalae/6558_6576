#!/usr/bin/python3

from funny_turtleplus.dummy_module import dummy_function, dummy_var
import rclpy
from rclpy.node import Node
from teleop_interfaces.srv import SavePath, ClearPath, MakePath
from turtlesim_plus_interfaces.srv import GivePosition
from turtlesim.msg import Pose
from std_srvs.srv import Empty
import numpy as np
import math
from geometry_msgs.msg import Twist
import yaml

class TeleopScheduleNode(Node):
    def __init__(self):
        super().__init__('teleop_schedule_node')

        self.make_service = self.create_service(MakePath, '/make_path', self.make_service_callback)
        self.save_service = self.create_service(SavePath, '/save_path', self.save_service_callback)
        self.clear_service = self.create_service(ClearPath, '/clear_path', self.clear_service_callback)

        self.spawn_pizza_client = self.create_client(GivePosition, '/spawn_pizza')
        self.eat_pizza_client = self.create_client(Empty, 'eat')
        self.done_client = self.create_client(MakePath, '/done')
        #a
        self.create_subscription(Pose, '/turtle1/pose', self.pose_callback, 10)
        #a
        self.cmd_vel_pub = self.create_publisher(Twist, '/turtle1/cmd_vel', 10)

        self.robot_pose = np.array([0.0, 0.0, 0.0]) 

        self.path_x = []
        self.path_y = []

        self.trig = 1
        self.count = 0

        self.timer_turtle = self.create_timer(1.0/100.0, self.turtle_run)
 

    def make_service_callback(self, request:MakePath.Request, response:MakePath.Response):
        print("Press i button")
        position_request = GivePosition.Request() # client -> request

        position_request.x = self.robot_pose[0]
        position_request.y = self.robot_pose[1]

        self.path_x.append(float(position_request.x))
        self.path_y.append(float(position_request.y))

        print(f"x : {self.path_x} / y : {self.path_y}")

        self.spawn_pizza_client.call_async(position_request) # call when click on GUI
        return response

    def pose_callback(self, msg):
        self.robot_pose[0] = msg.x
        self.robot_pose[1] = msg.y
        self.robot_pose[2] = msg.theta

    def eat_pizza(self):
        eat_request = Empty.Request()
        self.eat_pizza_client.call_async(eat_request)

    def clear_pizza(self):
        K_d = 3.2
        K_theta = 5.6
        if len(self.path_x) != 0:
            delta_x = self.path_x[0] - self.robot_pose[0]
            delta_y = self.path_y[0] - self.robot_pose[1]
            d = np.sqrt(delta_x**2 + delta_y**2)
            theta = math.atan2(delta_y, delta_x)
            e_angle = theta - self.robot_pose[2]
            e_angle_new = math.atan2(math.sin(e_angle), math.cos(e_angle))
            vx = K_d * d
            wz = K_theta * e_angle_new
            self.cmdvel(vx, wz) # use function cmdvel
            if (d < 0.8):
                self.eat_pizza()
                self.path_x.pop(0)
                self.path_y.pop(0)
        else:
            self.trig = 1

    def save_service_callback(self, request:SavePath.Request, response:SavePath.Response):
        response.count += 1
        self.count += 1

        # Path to the YAML file
        yaml_file_path = '/home/talae-ubantu/6558_6576/src/funny_turtleplus/config/funny_yaml.yaml'
        
        # Read the YAML file
        with open(yaml_file_path, 'r') as file:
            params = yaml.safe_load(file)

        # Modify the parameter in the YAML structure
        if 'copy_schedule_node' in params and 'ros__parameters' in params['copy_schedule_node']:
            # self.get_logger().info(f"Current motor_target: {params['copy_schedule_node']['ros__parameters']['motor_target']}")
            print(f"x: {self.path_x} / y: {self.path_y}")
            # Update the motor_target parameter
            params['copy_schedule_node']['ros__parameters'][f'turtle{self.count}_target_x'] = self.path_x # new value
            params['copy_schedule_node']['ros__parameters'][f'turtle{self.count}_target_y'] = self.path_y # new value
            
            # self.get_logger().info(f"Updated motor_target to: {params['copy_schedule_node']['ros__parameters']['motor_target']}")
        
        # Write the updated parameters back to the YAML file
        with open(yaml_file_path, 'w') as file:
            yaml.safe_dump(params, file)
        
        self.get_logger().info("YAML file updated successfully.")

        self.path_x = []
        self.path_y = []

        if self.count >= 4:
            make_request = MakePath.Request()
            self.done_client.call_async(make_request)
            
        return response

    def clear_service_callback(self, request:ClearPath.Request, response:ClearPath.Response):
        self.trig = 0
        print("clear!!!!")
        return response
    
    def turtle_run(self):
        if self.trig == 0:
            self.clear_pizza()

    def cmdvel(self, v, w): # topic
        msg = Twist() # create topic message
        msg.linear.x = v 
        msg.angular.z = w 
        self.cmd_vel_pub.publish(msg) # publish topic

def main(args=None):
    rclpy.init(args=args)
    node = TeleopScheduleNode()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()

if __name__=='__main__':
    main()
