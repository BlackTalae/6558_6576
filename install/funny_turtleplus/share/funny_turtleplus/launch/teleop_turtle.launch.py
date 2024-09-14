import os
from launch import LaunchDescription
from launch_ros.actions import Node
from ament_index_python.packages import get_package_share_directory
from launch.actions import ExecuteProcess, DeclareLaunchArgument

def generate_launch_description():
    launch_description = LaunchDescription()

    ns = "turtle_teleop"

    teleop_schedule_launch = Node(
        package='funny_turtleplus',
        namespace=ns,
        executable='teleop_schedule.py',
        name='teleop_schedule_node'
    )
    
    launch_description.add_action(teleop_schedule_launch)  

    kill_turtle1 = ExecuteProcess(
        cmd=['ros2', 'service', 'call', '/remove_turtle', 'turtlesim/srv/Kill', '{name: turtle1}']
    )

    launch_description.add_action(kill_turtle1)

    spawn_turtle = ExecuteProcess(
        cmd=[
            'ros2', 'service', 'call',
            '/spawn_turtle',
            'turtlesim/srv/Spawn',
            f'{{x: 5.0, y: 5.0, theta: 0.0, name: "{ns}"}}'
        ]

    )

    launch_description.add_action(spawn_turtle)

    return launch_description