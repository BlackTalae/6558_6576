#!/usr/bin/python3

import os
import sys
import select
import tty
import termios
import rclpy
from rclpy.node import Node

from geometry_msgs.msg import Twist
from rclpy.qos import QoSProfile
from turtlesim.msg import Pose
from std_msgs.msg import Int64, ColorRGBA
from teleop_interfaces.srv import SavePath, ClearPath, MakePath

# ros2 run turtle_teleop teleop_key.py --ros-args --remap __ns:=/turtle1

TURTLE_BASE_LIN_VEL = 1.5
TURTLE_BASE_ANG_VEL = 1.5

TURTLE_MAX_LIN_GAIN = 4
TURTLE_MAX_ANG_GAIN = 4

TURTLE_MIN_LIN_GAIN = 0.1
TURTLE_MIN_ANG_GAIN = 0.1

LIN_VEL_STEP_SIZE = 0.1
ANG_VEL_STEP_SIZE = 0.1

msg = """
Control Your TurtleSim
---------------------------
Moving around:
        w
   a    s    d
        x

space key : force stop
h/n : increase/decrease linear speed
j/m : increase/decrease angular speed
i : spawn pizza
o : save path
p : clear
CTRL-C to quit
"""

e = """
Communications Failed
"""

class TeleopNode(Node):
    def __init__(self):
        super().__init__('teleop_keyboard')
        qos = QoSProfile(depth=10)
        self.pub = self.create_publisher(Twist, '/custom_key/cmd_vel', qos)

        self.create_subscription(Pose, "pose", self.pose_callback , 10)

        self.make_client = self.create_client(MakePath, '/make_path')
        self.save_client = self.create_client(SavePath, '/save_path')
        self.clear_client = self.create_client(ClearPath, '/clear_path')

        # Initialize variables
        self.settings = None
        if os.name != 'nt':
            self.settings = termios.tcgetattr(sys.stdin)

        self.status = 0
        self.target_linear_velocity = 0.0
        self.target_angular_velocity = 0.0
        self.lin_gain = 1.0
        self.ang_gain = 1.0

        self.current_pose = [0.0, 0.0, 0.0]

        timer_period = 0.005
        self.timer = self.create_timer(timer_period, self.timer_callback)

        print(msg)

    def timer_callback(self):
        key = self.get_key(self.settings)

        if key == 'w':
            self.target_linear_velocity = TURTLE_BASE_LIN_VEL * self.lin_gain
            self.target_angular_velocity = 0.0
        elif key == 'x':
            self.target_linear_velocity = -TURTLE_BASE_LIN_VEL * self.lin_gain
            self.target_angular_velocity = 0.0
        elif key == 'a':
            self.target_angular_velocity = TURTLE_BASE_ANG_VEL * self.ang_gain
            self.target_linear_velocity = 0.0
        elif key == 'd':
            self.target_angular_velocity = -TURTLE_BASE_ANG_VEL * self.ang_gain
            self.target_linear_velocity = 0.0
        elif key == ' ' or key == 's':
            self.target_linear_velocity = 0.0
            self.target_angular_velocity = 0.0

        elif key == 'h':
            self.lin_gain = self.constrain(
                self.lin_gain + LIN_VEL_STEP_SIZE, TURTLE_MIN_LIN_GAIN, TURTLE_MAX_LIN_GAIN)
            self.status += 1
            self.print_vels(self.lin_gain, self.ang_gain)
        elif key == 'n':
            self.lin_gain = self.constrain(
                self.lin_gain - LIN_VEL_STEP_SIZE, TURTLE_MIN_LIN_GAIN, TURTLE_MAX_LIN_GAIN)
            self.status += 1
            self.print_vels(self.lin_gain, self.ang_gain)
        elif key == 'j':
            self.ang_gain = self.constrain(
                self.ang_gain + ANG_VEL_STEP_SIZE, TURTLE_MIN_ANG_GAIN, TURTLE_MAX_ANG_GAIN)
            self.status += 1
            self.print_vels(self.lin_gain, self.ang_gain)
        elif key == 'm':
            self.ang_gain = self.constrain(
                self.ang_gain - ANG_VEL_STEP_SIZE, TURTLE_MIN_ANG_GAIN, TURTLE_MAX_ANG_GAIN)
            self.status += 1
            self.print_vels(self.lin_gain, self.ang_gain)

        elif key == 'i':
            make_request = MakePath.Request()
            self.make_client.call_async(make_request)
        elif key == 'o':
            save_request = SavePath.Request()
            self.save_client.call_async(save_request)
        elif key == 'p':
            clear_request = ClearPath.Request()
            self.clear_client.call_async(clear_request)

        else:
           if key == '\x03':  # Ctrl-C
                stop_twist = Twist()
                stop_twist.linear.x = 0.0
                stop_twist.angular.z = 0.0
                self.pub.publish(stop_twist)
                self.destroy_node()
                rclpy.shutdown()
                return

        if self.status == 5:
            print(msg)
            self.status = 0

        twist = Twist()
        twist.linear.x = self.target_linear_velocity
        twist.linear.y = 0.0
        twist.linear.z = 0.0

        twist.angular.x = 0.0
        twist.angular.y = 0.0
        twist.angular.z = self.target_angular_velocity
        self.pub.publish(twist)

    def get_key(self, settings):
        tty.setraw(sys.stdin.fileno())
        rlist, _, _ = select.select([sys.stdin], [], [], 0.1)
        if rlist:
            key = sys.stdin.read(1)
        else:
            key = ''

        termios.tcsetattr(sys.stdin, termios.TCSADRAIN, settings)
        return key

    def print_vels(self, lin_gain, ang_gain):
        print('currently:\tlinear gain {0}\t angular gain {1}'.format(
            lin_gain,
            ang_gain))

    def constrain(self, input_vel, low_bound, high_bound):
        return max(low_bound, min(input_vel, high_bound))


    def pose_callback(self, msg):
        self.current_pose[0] = msg.x
        self.current_pose[1] = msg.y
        self.current_pose[2] = msg.theta

def main(args=None):
    rclpy.init(args=args)
    node = TeleopNode()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()