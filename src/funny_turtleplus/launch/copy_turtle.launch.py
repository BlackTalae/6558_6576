import os
from launch import LaunchDescription
from launch_ros.actions import Node
from ament_index_python.packages import get_package_share_directory
from launch.actions import ExecuteProcess, DeclareLaunchArgument

def generate_launch_description():
    launch_description = LaunchDescription()

    spawn_turtle2 = ExecuteProcess(
        cmd=[
            'ros2', 'service', 'call',
            '/spawn_turtle',
            'turtlesim/srv/Spawn',
            f'{{x: 1.0, y: 1.0, theta: 0.0, name: ""}}'
        ]

    )

    launch_description.add_action(spawn_turtle2)

    spawn_turtle3 = ExecuteProcess(
        cmd=[
            'ros2', 'service', 'call',
            '/spawn_turtle',
            'turtlesim/srv/Spawn',
            f'{{x: 1.0, y: 1.0, theta: 0.0, name: ""}}'
        ]

    )

    launch_description.add_action(spawn_turtle3)

    spawn_turtle4 = ExecuteProcess(
        cmd=[
            'ros2', 'service', 'call',
            '/spawn_turtle',
            'turtlesim/srv/Spawn',
            f'{{x: 1.0, y: 1.0, theta: 0.0, name: ""}}'
        ]

    )

    launch_description.add_action(spawn_turtle4)

    # copy_schedule_launch = Node(
    #     package='funny_turtleplus',
    #     namespace='',
    #     executable='copy_schedule.py',
    #     name='copy_schedule_node'
    # )
    
    # launch_description.add_action(copy_schedule_launch)  

    # controller_launch = Node(
    #     package='funny_turtleplus',
    #     namespace='',
    #     executable='controller.py',
    #     name='controller_node'
    # )
    
    # launch_description.add_action(controller_launch)     

    return launch_description