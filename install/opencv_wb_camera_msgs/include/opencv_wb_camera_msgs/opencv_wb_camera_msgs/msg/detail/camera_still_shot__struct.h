// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from opencv_wb_camera_msgs:msg/CameraStillShot.idl
// generated code does not contain a copyright notice

#ifndef OPENCV_WB_CAMERA_MSGS__MSG__DETAIL__CAMERA_STILL_SHOT__STRUCT_H_
#define OPENCV_WB_CAMERA_MSGS__MSG__DETAIL__CAMERA_STILL_SHOT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/CameraStillShot in the package opencv_wb_camera_msgs.
typedef struct opencv_wb_camera_msgs__msg__CameraStillShot
{
  float cmd_vel_linear;
  float cmd_vel_angular;
  float pose_x;
  float pose_y;
  float linear_vel;
  float angular_vel;
} opencv_wb_camera_msgs__msg__CameraStillShot;

// Struct for a sequence of opencv_wb_camera_msgs__msg__CameraStillShot.
typedef struct opencv_wb_camera_msgs__msg__CameraStillShot__Sequence
{
  opencv_wb_camera_msgs__msg__CameraStillShot * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} opencv_wb_camera_msgs__msg__CameraStillShot__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // OPENCV_WB_CAMERA_MSGS__MSG__DETAIL__CAMERA_STILL_SHOT__STRUCT_H_
