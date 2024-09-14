#!/usr/bin/python3

from funny_turtleplus.dummy_module import dummy_function, dummy_var
import rclpy
from rclpy.node import Node
import yaml
import os
from turtlesim_plus_interfaces.srv import GivePosition

class CopyScheduleNode(Node):
    def __init__(self):
        super().__init__('copy_schedule_node')

        # Load YAML file
        self.yaml_file_path = '/home/talae-ubantu/6558_6576/src/funny_turtleplus/config/funny_yaml.yaml'
        self.last_modified_time = None  # Store the last modified time of the file

        self.declare_parameters(
            namespace='',
            parameters=[
                ('turtle1_target_x', [0.000000000000000]),
                ('turtle1_target_y', [0.000000000000000]),
                ('turtle2_target_x', [0.000000000000000]),
                ('turtle2_target_y', [0.000000000000000]),
                ('turtle3_target_x', [0.000000000000000]),
                ('turtle3_target_y', [0.000000000000000]),
                ('turtle4_target_x', [0.000000000000000]),
                ('turtle4_target_y', [0.000000000000000])
            ]
        )

        self.position_pub = self.create_publisher(GivePosition, 'target', 10)

        # Load the parameters initially from the YAML file
        self.load_parameters_from_yaml()  

        self.rate = 100.0
        self.timer = self.create_timer(1/self.rate, self.timer_callback)

    def load_parameters_from_yaml(self):
        """ Load parameters from YAML file and update node parameters. """
        try:
            # Check if the YAML file exists
            if os.path.exists(self.yaml_file_path):
                with open(self.yaml_file_path, 'r') as file:
                    params = yaml.safe_load(file)

                # Update parameters dynamically
                if 'copy_schedule_node' in params and 'ros__parameters' in params['copy_schedule_node']:
                    turtle_target_x = params['copy_schedule_node']['ros__parameters'].get('turtle1_target_x', 0.0)
                    turtle_target_y = params['copy_schedule_node']['ros__parameters'].get('turtle1_target_y', 0.0)

                    self.set_parameters([
                        rclpy.parameter.Parameter('turtle1_target_x', rclpy.Parameter.Type.DOUBLE_ARRAY, turtle_target_x),
                    ])
                    self.set_parameters([
                        rclpy.parameter.Parameter('turtle1_target_y', rclpy.Parameter.Type.DOUBLE_ARRAY, turtle_target_y),
                    ])

                    # self.get_logger().info(f"Parameters updated: motor_target = {motor_target}")

        except Exception as e:
            self.get_logger().error(f"Failed to load YAML file: {str(e)}")

    def check_and_reload_parameters(self):
        """ Check if the YAML file has changed, and reload parameters if necessary. """
        try:
            current_modified_time = os.path.getmtime(self.yaml_file_path)

            # If the file has changed, reload parameters
            if self.last_modified_time is None or current_modified_time != self.last_modified_time:
                self.get_logger().info("YAML file has changed, reloading parameters...")
                self.last_modified_time = current_modified_time
                self.load_parameters_from_yaml()

        except FileNotFoundError:
            self.get_logger().error(f"YAML file not found: {self.yaml_file_path}")

    def timer_callback(self):
        self.load_parameters_from_yaml()
        self.turtle1_target_x = self.get_parameter('turtle1_target_x').value
        self.turtle1_target_y = self.get_parameter('turtle1_target_y').value
        self.get_logger().info(f'Turtle1 target: {self.turtle1_target_x} {self.turtle1_target_y}')

        msg = GivePosition() # create topic message
        msg.x = self.turtle1_target_x[0]
        msg.y = self.turtle1_target_y[0]
        self.position_pub.publish(msg) # publish topic

        

def main(args=None):
    rclpy.init(args=args)
    node = CopyScheduleNode()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()

if __name__=='__main__':
    main()