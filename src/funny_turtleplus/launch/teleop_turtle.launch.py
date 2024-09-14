import os
from launch import LaunchDescription
from launch_ros.actions import Node
from ament_index_python.packages import get_package_share_directory
from launch.actions import ExecuteProcess, DeclareLaunchArgument

def generate_launch_description():
    launch_description = LaunchDescription()

    teleop_key_launch = Node(
        package='funny_turtleplus',
        namespace='',
        executable='teleop_key.py',
        name='teleop_keyboard'
    )
    
    launch_description.add_action(teleop_key_launch)

    teleop_schedule_launch = Node(
        package='funny_turtleplus',
        namespace='',
        executable='teleop_schedule.py',
        name='teleop_schedule_node'
    )
    
    launch_description.add_action(teleop_schedule_launch)  


    return launch_description