#!/usr/bin/python3

from funny_turtleplus.dummy_module import dummy_function, dummy_var
import rclpy
from rclpy.node import Node
from geometry_msgs.msg import Twist, Point, TransformStamped, PoseStamped


class DummyNode(Node):
    def __init__(self):
        super().__init__('First_Turtle')
        self.cmd_vel_pub = self.create_publisher(Twist,'cmd_vel', 10)



def main(args=None):
    rclpy.init(args=args)
    node = DummyNode()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()

if __name__=='__main__':
    main()




# #!/usr/bin/python3

# import rclpy
# from rclpy.node import Node
# from geometry_msgs.msg import Twist
# import sys
# import select
# import termios
# import tty

# # Define custom key bindings
# custom_bindings = {
#     'i': (1, 0, 0, 0),   # Move forward
#     'k': (-1, 0, 0, 0),  # Move backward
#     'j': (0, 0, 0, 1),   # Turn left
#     'l': (0, 0, 0, -1),  # Turn right
#     'u': (1, 0, 0, 1),   # Forward left
#     'o': (1, 0, 0, -1),  # Forward right
# }

# class CustomTeleop(Node):
#     def __init__(self):
#         super().__init__('custom_teleop')
#         self.publisher = self.create_publisher(Twist, '/turtle1/cmd_vel', 10)
#         self.settings = termios.tcgetattr(sys.stdin)
#         print("Use 'i' to move forward, 'k' to move backward, 'j' to turn left, 'l' to turn right.")
#         print("Use 'Ctrl+C' to quit.")

#     def get_key(self):
#         tty.setraw(sys.stdin.fileno())
#         select.select([sys.stdin], [], [], 0)
#         key = sys.stdin.read(1)
#         termios.tcsetattr(sys.stdin, termios.TCSADRAIN, self.settings)
#         return key

#     def run(self):
#         try:
#             while rclpy.ok():
#                 key = self.get_key()
#                 twist = Twist()
#                 if key in custom_bindings.keys():
#                     x, y, z, th = custom_bindings[key]
#                     twist.linear.x = x
#                     twist.linear.y = y
#                     twist.linear.z = z
#                     twist.angular.z = th
#                 elif key == '\x03':  # Ctrl+C
#                     break

#                 self.publisher.publish(twist)
#         except Exception as e:
#             print(e)
#         finally:
#             termios.tcsetattr(sys.stdin, termios.TCSADRAIN, self.settings)

# def main(args=None):
#     rclpy.init(args=args)
#     node = CustomTeleop()
#     rclpy.spin(node)
#     node.destroy_node()
#     rclpy.shutdown()

# if __name__ == '__main__':
#     main()
