#!/usr/bin/python3

from funny_turtleplus.dummy_module import dummy_function, dummy_var
import rclpy
from rclpy.node import Node
import yaml
import os
from teleop_interfaces.srv import MakePath
from teleop_interfaces.srv import Notify
from turtlesim.msg import Pose

class CopyScheduleNode(Node):
    def __init__(self):
        super().__init__('copy_schedule_node')

        self.done_service = self.create_service(MakePath, '/done', self.done_service_callback)

        self.target_done_service1 = self.create_service(Notify, '/target1_done', self.target_done_service_callback1)
        self.notify_client1 = self.create_client(Notify, '/target1_done')
        self.target_position1 = self.create_publisher(Pose, "/target1", 10)

        self.target_done_service2 = self.create_service(Notify, '/target2_done', self.target_done_service_callback2)
        self.notify_client2 = self.create_client(Notify, '/target2_done')
        self.target_position2 = self.create_publisher(Pose, "/target2", 10)

        self.target_done_service3 = self.create_service(Notify, '/target3_done', self.target_done_service_callback3)
        self.notify_client3 = self.create_client(Notify, '/target3_done')
        self.target_position3 = self.create_publisher(Pose, "/target3", 10)

        self.target_done_service4 = self.create_service(Notify, '/target4_done', self.target_done_service_callback4)
        self.notify_client4 = self.create_client(Notify, '/target4_done')
        self.target_position4 = self.create_publisher(Pose, "/target4", 10)

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

        # self.position_pub = self.create_publisher(GivePosition, 'target', 10)

        # Load the parameters initially from the YAML file
        self.load_parameters_from_yaml()  

        self.rate = 10.0
        self.timer = self.create_timer(1/self.rate, self.timer_callback)

        self.state1 = False
        self.i1 = 0

        self.state2 = False
        self.i2 = 0

        self.state3 = False
        self.i3 = 0

        self.state4 = False
        self.i4 = 0        

        self.chk_done = [0,0,0,0]

    def load_parameters_from_yaml(self):
        """ Load parameters from YAML file and update node parameters. """
        try:
            # Check if the YAML file exists
            if os.path.exists(self.yaml_file_path):
                with open(self.yaml_file_path, 'r') as file:
                    params = yaml.safe_load(file)

                # Update parameters dynamically
                if 'copy_schedule_node' in params and 'ros__parameters' in params['copy_schedule_node']:
                    turtle_target_x1 = params['copy_schedule_node']['ros__parameters'].get('turtle1_target_x', 0.0)
                    turtle_target_y1 = params['copy_schedule_node']['ros__parameters'].get('turtle1_target_y', 0.0)

                    turtle_target_x2 = params['copy_schedule_node']['ros__parameters'].get('turtle2_target_x', 0.0)
                    turtle_target_y2 = params['copy_schedule_node']['ros__parameters'].get('turtle2_target_y', 0.0)

                    turtle_target_x3 = params['copy_schedule_node']['ros__parameters'].get('turtle3_target_x', 0.0)
                    turtle_target_y3 = params['copy_schedule_node']['ros__parameters'].get('turtle3_target_y', 0.0)

                    turtle_target_x4 = params['copy_schedule_node']['ros__parameters'].get('turtle4_target_x', 0.0)
                    turtle_target_y4 = params['copy_schedule_node']['ros__parameters'].get('turtle4_target_y', 0.0)                    

                    self.set_parameters([
                        rclpy.parameter.Parameter('turtle1_target_x', rclpy.Parameter.Type.DOUBLE_ARRAY, turtle_target_x1),
                    ])
                    self.set_parameters([
                        rclpy.parameter.Parameter('turtle1_target_y', rclpy.Parameter.Type.DOUBLE_ARRAY, turtle_target_y1),
                    ])

                    self.set_parameters([
                        rclpy.parameter.Parameter('turtle2_target_x', rclpy.Parameter.Type.DOUBLE_ARRAY, turtle_target_x2),
                    ])
                    self.set_parameters([
                        rclpy.parameter.Parameter('turtle2_target_y', rclpy.Parameter.Type.DOUBLE_ARRAY, turtle_target_y2),
                    ])

                    self.set_parameters([
                        rclpy.parameter.Parameter('turtle3_target_x', rclpy.Parameter.Type.DOUBLE_ARRAY, turtle_target_x3),
                    ])
                    self.set_parameters([
                        rclpy.parameter.Parameter('turtle3_target_y', rclpy.Parameter.Type.DOUBLE_ARRAY, turtle_target_y3),
                    ])

                    self.set_parameters([
                        rclpy.parameter.Parameter('turtle4_target_x', rclpy.Parameter.Type.DOUBLE_ARRAY, turtle_target_x4),
                    ])
                    self.set_parameters([
                        rclpy.parameter.Parameter('turtle4_target_y', rclpy.Parameter.Type.DOUBLE_ARRAY, turtle_target_y4),
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
        # self.get_logger().info("I still here!!")
        self.load_parameters_from_yaml()
        self.turtle1_target_x = self.get_parameter('turtle1_target_x').value
        self.turtle1_target_y = self.get_parameter('turtle1_target_y').value

        self.turtle2_target_x = self.get_parameter('turtle2_target_x').value
        self.turtle2_target_y = self.get_parameter('turtle2_target_y').value

        self.turtle3_target_x = self.get_parameter('turtle3_target_x').value
        self.turtle3_target_y = self.get_parameter('turtle3_target_y').value

        self.turtle4_target_x = self.get_parameter('turtle4_target_x').value
        self.turtle4_target_y = self.get_parameter('turtle4_target_y').value
        # self.get_logger().info(f'Turtle1 target: {self.turtle1_target_x} {self.turtle1_target_y}')
        # print(self.state)

        if self.state1 == True:
            if self.i1 < len(self.turtle1_target_x):
                msg = Pose()
                msg.x = self.turtle1_target_x[self.i1]
                msg.y = self.turtle1_target_y[self.i1]
                # self.get_logger().info(f'Send target: {msg.x} {msg.y}')

                self.target_position1.publish(msg)

                self.i1 = self.i1 + 1

            else:
                self.chk_done[0] = 1
                

            position_request = Notify.Request() 
            position_request.trig = False
            self.notify_client1.call_async(position_request)   

        if self.state2 == True:
            if self.i2 < len(self.turtle2_target_x):
                msg = Pose()
                msg.x = self.turtle2_target_x[self.i2]
                msg.y = self.turtle2_target_y[self.i2]
                # self.get_logger().info(f'Send target: {msg.x} {msg.y}')

                self.target_position2.publish(msg)

                self.i2 = self.i2 + 1

            else:
                self.chk_done[1] = 1

            position_request = Notify.Request() 
            position_request.trig = False
            self.notify_client2.call_async(position_request) 

        if self.state3 == True:
            if self.i3 < len(self.turtle3_target_x):
                msg = Pose()
                msg.x = self.turtle3_target_x[self.i3]
                msg.y = self.turtle3_target_y[self.i3]
                # self.get_logger().info(f'Send target: {msg.x} {msg.y}')

                self.target_position3.publish(msg)

                self.i3 = self.i3 + 1

            else:
                self.chk_done[2] = 1

            position_request = Notify.Request() 
            position_request.trig = False
            self.notify_client3.call_async(position_request)   

        if self.state4 == True:
            if self.i4 < len(self.turtle4_target_x):
                msg = Pose()
                msg.x = self.turtle4_target_x[self.i4]
                msg.y = self.turtle4_target_y[self.i4]
                # self.get_logger().info(f'Send target: {msg.x} {msg.y}')

                self.target_position4.publish(msg)

                self.i4 = self.i4 + 1

            else:
                self.chk_done[3] = 1

            position_request = Notify.Request() 
            position_request.trig = False
            self.notify_client4.call_async(position_request) 

        if sum(self.chk_done) == 4:
            msg = Pose()
            msg.x = 10.5
            msg.y = 10.5
            # self.get_logger().info(f'Send target: {msg.x} {msg.y}')
            self.target_position1.publish(msg)   
            self.target_position2.publish(msg) 
            self.target_position3.publish(msg) 
            self.target_position4.publish(msg) 



    def done_service_callback(self, request:MakePath.Request, response:MakePath.Response):
        print("Done!!!!")
        return response
    
    def target_done_service_callback1(self, request:Notify.Request, response:Notify.Response):
        self.state1 = request.trig         
        return response
    
    def target_done_service_callback2(self, request:Notify.Request, response:Notify.Response):
        self.state2 = request.trig         
        return response
    
    def target_done_service_callback3(self, request:Notify.Request, response:Notify.Response):
        self.state3 = request.trig         
        return response
    
    def target_done_service_callback4(self, request:Notify.Request, response:Notify.Response):
        self.state4 = request.trig         
        return response

        

def main(args=None):
    rclpy.init(args=args)
    node = CopyScheduleNode()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()

if __name__=='__main__':
    main()