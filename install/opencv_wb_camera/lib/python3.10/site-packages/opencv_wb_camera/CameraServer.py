from opencv_wb_camera_msgs.srv import TakeSnapshot  # 서비스 타입 임포트
import cv2  # OpenCV 라이브러리 임포트
import time
import rclpy as rp
import numpy as np
from rclpy.node import Node
from sensor_msgs.msg import Image
from cv_bridge import CvBridge, CvBridgeError

class CameraServer(Node):

    def __init__(self):
        super().__init__("camera_shooting_hwan")
        # 기존 서비스 및 클라이언트 초기화 코드
        self.snapshot_server = self.create_service(TakeSnapshot, "take_snapshot", self.take_snapshot_callback)

        # 이미지 토픽의 파라미터 선언
        self.declare_parameter('camera_topic', '/camera',)
        camera_topic = self.get_parameter('camera_topic').get_parameter_value().string_value

        # 이미지 구독
        self.subscription = self.create_subscription(
            Image,
            camera_topic,
            self.image_callback,
            10
        )
        self.bridge = CvBridge()
        self.last_frame = None

    def image_callback(self, msg):
        # 이미지 데이터를 OpenCV 형식으로 변환
        try:
            self.last_frame = self.bridge.imgmsg_to_cv2(msg, "bgr8")
        except CvBridgeError as e:
            self.get_logger().error(f"Failed to convert image: {e}")


    def take_snapshot_callback(self, request, response):
        # 예를 들어, 파일로 저장하고 성공 여부를 반환 
        self.get_logger().info("Received snapshot request")
        if self.last_frame is not None:
            try:
                filepath = "/home/dh/amr_ws/ros2_wb_camera/src/opencv_wb_camera/picture/snapshot.jpg"
                cv2.imwrite(filepath, self.last_frame)
                # 실제 스틸샷을 찍고 파일로 저장하는 로직
                response.success = True
                response.filepath = filepath
                self.get_logger().info(f"Snapshot saved at {filepath}")
            except Exception as e:
                response.success = False
                response.filepath = ""
                self.get_logger().error(f"Error capturing snapshot: {e}")
        else:
            response.success = False
            response.filepath = ""
            self.get_logger().error("No frame available to capture")
        return response

def main(args=None):
    rp.init(args=args)
    camera_server = CameraServer()
    rp.spin(camera_server)
    rp.shutdown()

if __name__ == "__main__":
    main()