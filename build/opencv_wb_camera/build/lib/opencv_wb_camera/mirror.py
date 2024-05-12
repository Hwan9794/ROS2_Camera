import cv2
import numpy

import rclpy
from rclpy.node import Node
from sensor_msgs.msg import Image
from cv_bridge import CvBridge

class ImgEdge(Node):
    def __init__(self):
        super().__init__('mirror')

        self.declare_parameter('camera_topic', '/camera')
        self.camera_topic = self.get_parameter('camera_topic').value
        # self.declare_parameter('camera_topic2', '/CameraServer')
        # self.camera_topic2 = self.get_parameter('camera_topic2').value
          
        self.img_subscriber = self.create_subscription(
            Image,
            self.camera_topic,
            self.image_callback,
            10
        )
        # self.img_subscriber2 = self.create_subscription(
        #     Image,
        #     self.camera_topic2,
        #     self.image_callback,
        #     10
        # )
        self.img_control = self.create_publisher(Image, '/mirror_topic_hwan', 10)

        self.cv_bridge = CvBridge()

    def image_callback(self, msg):
        img = self.cv_bridge.imgmsg_to_cv2(msg, desired_encoding='bgr8')

        filter_img = self.filter(img)

        pub_img = self.cv_bridge.cv2_to_imgmsg(filter_img, "bgr8")
        self.img_control.publish(pub_img)

    def filter(self, img):
        color = cv2.cvtColor(img, cv2.COLOR_BGR2RGB)
        color1 = cv2.cvtColor(color, cv2.COLOR_BGR2RGB)
        flipped_img = cv2.flip(color1, 1)  # 여기서 1은 좌우 반전을 의미합니다.
        return flipped_img

def main():
    rclpy.init()

    node = ImgEdge()

    rclpy.spin(node)

    node.destroy_node()
    
    rclpy.shutdown()
