// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from opencv_wb_camera_msgs:srv/TakeSnapshot.idl
// generated code does not contain a copyright notice

#ifndef OPENCV_WB_CAMERA_MSGS__SRV__DETAIL__TAKE_SNAPSHOT__STRUCT_H_
#define OPENCV_WB_CAMERA_MSGS__SRV__DETAIL__TAKE_SNAPSHOT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/TakeSnapshot in the package opencv_wb_camera_msgs.
typedef struct opencv_wb_camera_msgs__srv__TakeSnapshot_Request
{
  uint8_t structure_needs_at_least_one_member;
} opencv_wb_camera_msgs__srv__TakeSnapshot_Request;

// Struct for a sequence of opencv_wb_camera_msgs__srv__TakeSnapshot_Request.
typedef struct opencv_wb_camera_msgs__srv__TakeSnapshot_Request__Sequence
{
  opencv_wb_camera_msgs__srv__TakeSnapshot_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} opencv_wb_camera_msgs__srv__TakeSnapshot_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'filepath'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/TakeSnapshot in the package opencv_wb_camera_msgs.
typedef struct opencv_wb_camera_msgs__srv__TakeSnapshot_Response
{
  /// 촬영 성공 여부
  bool success;
  /// 저장된 스틸샷의 파일 경로
  rosidl_runtime_c__String filepath;
} opencv_wb_camera_msgs__srv__TakeSnapshot_Response;

// Struct for a sequence of opencv_wb_camera_msgs__srv__TakeSnapshot_Response.
typedef struct opencv_wb_camera_msgs__srv__TakeSnapshot_Response__Sequence
{
  opencv_wb_camera_msgs__srv__TakeSnapshot_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} opencv_wb_camera_msgs__srv__TakeSnapshot_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // OPENCV_WB_CAMERA_MSGS__SRV__DETAIL__TAKE_SNAPSHOT__STRUCT_H_
