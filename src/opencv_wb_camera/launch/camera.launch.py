import os
from ament_index_python import get_package_share_directory
from launch import LaunchDescription
from launch.actions import DeclareLaunchArgument
from launch.substitutions import LaunchConfiguration
from launch_ros.actions import Node
from launch.actions import ExecuteProcess

def generate_launch_description():
    param_dir = LaunchConfiguration(
        'param_dir',
        default=os.path.join(
        get_package_share_directory('opencv_wb_camera'),
        'param',
        'size.yaml')
        )
    
    return LaunchDescription(
        [
            DeclareLaunchArgument(
                'param_dir',
                default_value=param_dir
            ),

            Node(
                package='opencv_wb_camera',
                executable='img_publisher',
                name='img_publisher',
                parameters=[param_dir],
                output='screen'),

            Node(
                package='opencv_wb_camera',
                executable='edge',
                name='edge',
                parameters=[param_dir],
                output='screen'),
            
            Node(
                package='opencv_wb_camera',
                executable='mirror',
                name='mirror',
                parameters=[param_dir],
                output='screen'),

            Node(
                package='opencv_wb_camera',
                executable='CameraServer',
                name='CameraServer',
                parameters=[param_dir],
                output='screen'),

            ExecuteProcess(
                cmd=['rqt'],
                output='screen'
            ),

            ExecuteProcess(
                cmd=['rqt_graph'],
                output='screen'
            )

]
)