// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from opencv_wb_camera_msgs:srv/MultiSpawn.idl
// generated code does not contain a copyright notice

#ifndef OPENCV_WB_CAMERA_MSGS__SRV__DETAIL__MULTI_SPAWN__STRUCT_H_
#define OPENCV_WB_CAMERA_MSGS__SRV__DETAIL__MULTI_SPAWN__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/MultiSpawn in the package opencv_wb_camera_msgs.
typedef struct opencv_wb_camera_msgs__srv__MultiSpawn_Request
{
  int64_t num;
} opencv_wb_camera_msgs__srv__MultiSpawn_Request;

// Struct for a sequence of opencv_wb_camera_msgs__srv__MultiSpawn_Request.
typedef struct opencv_wb_camera_msgs__srv__MultiSpawn_Request__Sequence
{
  opencv_wb_camera_msgs__srv__MultiSpawn_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} opencv_wb_camera_msgs__srv__MultiSpawn_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'x'
// Member 'y'
// Member 'theta'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in srv/MultiSpawn in the package opencv_wb_camera_msgs.
typedef struct opencv_wb_camera_msgs__srv__MultiSpawn_Response
{
  rosidl_runtime_c__double__Sequence x;
  rosidl_runtime_c__double__Sequence y;
  rosidl_runtime_c__double__Sequence theta;
} opencv_wb_camera_msgs__srv__MultiSpawn_Response;

// Struct for a sequence of opencv_wb_camera_msgs__srv__MultiSpawn_Response.
typedef struct opencv_wb_camera_msgs__srv__MultiSpawn_Response__Sequence
{
  opencv_wb_camera_msgs__srv__MultiSpawn_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} opencv_wb_camera_msgs__srv__MultiSpawn_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // OPENCV_WB_CAMERA_MSGS__SRV__DETAIL__MULTI_SPAWN__STRUCT_H_
