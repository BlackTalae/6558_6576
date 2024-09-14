#!/usr/bin/python3

from funny_turtleplus.dummy_module import dummy_function, dummy_var
import rclpy
import math
import numpy as np
from rclpy.node import Node
from geometry_msgs.msg import Twist, Point, TransformStamped, PoseStamped
from turtlesim.msg import Pose
from turtlesim_plus_interfaces.srv import GivePosition
from std_srvs.srv import Empty
from nav_msgs.msg import Odometry
from tf2_ros import TransformBroadcaster
from tf_transformations import quaternion_from_euler
from std_msgs.msg import Float64
from teleop_interfaces.srv import ClearPath, MakePath,SavePath
from rcl_interfaces.msg import SetParametersResult

class DummyNode(Node):
    def __init__(self):
        super().__init__('First_Turtle')
        self.create_subscription(Pose, '/turtle1/pose', self.pose_callback, 10) 
        self.robot_param = np.array([0.0, 0.0, 0.0]) #xytheta
        self.count = 0

        #for Spawn pizza
        self.sp_pizza_client = self.create_client(GivePosition, '/spawn_pizza')
        self.declare_parameter('pizza_number',3 )
        self.pizza = self.get_parameter('pizza_number').value
        self.add_on_set_parameters_callback(self.parameter_update_callback)
        print('You have',self.pizza,'Pizza')

        self.make_service = self.create_service(MakePath, '/make_path', self.make_service_callback)
        self.save_service = self.create_service(SavePath, '/save_path', self.save_service_callback)
        self.clear_service = self.create_service(ClearPath, '/clear_path', self.clear_service_callback)
 
        #for Clear pizza
        self.pizzaX = []
        self.pizzaY = []

    def parameter_update_callback(self, params):
        for param in params:
            if param.name == 'pizza_number':
                self.pizza = param.value
                print('Number of pizza have change to',self.pizza)
        return SetParametersResult(successful=True)
    
    def pose_callback(self, msg):
        self.robot_param[0] = msg.x
        self.robot_param[1] = msg.y
        self.robot_param[2] = msg.theta

    def spawn_pizza(self, x, y):
        position_req = GivePosition.Request()
        position_req.x = x
        position_req.y = y
        self.sp_pizza_client.call_async(position_req)

    def make_service_callback(self, request: MakePath.Request, response: MakePath.Response):
        if self.count < self.pizza:
            self.spawn_pizza(self.robot_param[0], self.robot_param[1])
            self.pizzaX.append(self.robot_param[0])
            self.pizzaY.append(self.robot_param[1])
            self.count += 1
            print(f'Pizza: {self.count} / {int(self.pizza)}')
        else:
            print('No more pizza!')
        print('Pizza X positions:', self.pizzaX)
        print('Pizza Y positions:', self.pizzaY)
        return response


    def save_service_callback(self, request:SavePath.Request, response:SavePath.Response):
        return response

    def clear_service_callback(self, request:ClearPath.Request, response:ClearPath.Response):
        return response 

def main(args=None):
    rclpy.init(args=args)
    node = DummyNode()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()

if __name__=='__main__':
    main()