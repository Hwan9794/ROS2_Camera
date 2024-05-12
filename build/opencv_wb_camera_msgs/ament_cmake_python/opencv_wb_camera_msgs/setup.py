from setuptools import find_packages
from setuptools import setup

setup(
    name='opencv_wb_camera_msgs',
    version='0.0.0',
    packages=find_packages(
        include=('opencv_wb_camera_msgs', 'opencv_wb_camera_msgs.*')),
)
