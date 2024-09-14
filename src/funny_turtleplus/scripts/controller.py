#!/usr/bin/python3

from funny_turtleplus.dummy_module import dummy_function, dummy_var
import rclpy
from rclpy.node import Node
from teleop_interfaces.srv import GivePosition

class ControllerNode(Node):
    def __init__(self):
        super().__init__('controller_node')

        self.create_subscription(GivePosition, 'target', self.target_callback, 10)
        self.target = [0.0, 0.0]

    def timer_callback(self):
        pass

    def target_callback(self, msg):
        self.target[0] = msg.x
        self.target[1] = msg.y
        self.get_logger().info(f'x : {self.target[0]} y : {self.target[1]}')

def main(args=None):
    rclpy.init(args=args)
    node = ControllerNode()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()

if __name__=='__main__':
    main()