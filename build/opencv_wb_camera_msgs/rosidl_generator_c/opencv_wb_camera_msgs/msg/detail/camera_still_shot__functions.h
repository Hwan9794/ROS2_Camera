// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from opencv_wb_camera_msgs:msg/CameraStillShot.idl
// generated code does not contain a copyright notice

#ifndef OPENCV_WB_CAMERA_MSGS__MSG__DETAIL__CAMERA_STILL_SHOT__FUNCTIONS_H_
#define OPENCV_WB_CAMERA_MSGS__MSG__DETAIL__CAMERA_STILL_SHOT__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "opencv_wb_camera_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "opencv_wb_camera_msgs/msg/detail/camera_still_shot__struct.h"

/// Initialize msg/CameraStillShot message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * opencv_wb_camera_msgs__msg__CameraStillShot
 * )) before or use
 * opencv_wb_camera_msgs__msg__CameraStillShot__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_opencv_wb_camera_msgs
bool
opencv_wb_camera_msgs__msg__CameraStillShot__init(opencv_wb_camera_msgs__msg__CameraStillShot * msg);

/// Finalize msg/CameraStillShot message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_opencv_wb_camera_msgs
void
opencv_wb_camera_msgs__msg__CameraStillShot__fini(opencv_wb_camera_msgs__msg__CameraStillShot * msg);

/// Create msg/CameraStillShot message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * opencv_wb_camera_msgs__msg__CameraStillShot__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_opencv_wb_camera_msgs
opencv_wb_camera_msgs__msg__CameraStillShot *
opencv_wb_camera_msgs__msg__CameraStillShot__create();

/// Destroy msg/CameraStillShot message.
/**
 * It calls
 * opencv_wb_camera_msgs__msg__CameraStillShot__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_opencv_wb_camera_msgs
void
opencv_wb_camera_msgs__msg__CameraStillShot__destroy(opencv_wb_camera_msgs__msg__CameraStillShot * msg);

/// Check for msg/CameraStillShot message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_opencv_wb_camera_msgs
bool
opencv_wb_camera_msgs__msg__CameraStillShot__are_equal(const opencv_wb_camera_msgs__msg__CameraStillShot * lhs, const opencv_wb_camera_msgs__msg__CameraStillShot * rhs);

/// Copy a msg/CameraStillShot message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_opencv_wb_camera_msgs
bool
opencv_wb_camera_msgs__msg__CameraStillShot__copy(
  const opencv_wb_camera_msgs__msg__CameraStillShot * input,
  opencv_wb_camera_msgs__msg__CameraStillShot * output);

/// Initialize array of msg/CameraStillShot messages.
/**
 * It allocates the memory for the number of elements and calls
 * opencv_wb_camera_msgs__msg__CameraStillShot__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_opencv_wb_camera_msgs
bool
opencv_wb_camera_msgs__msg__CameraStillShot__Sequence__init(opencv_wb_camera_msgs__msg__CameraStillShot__Sequence * array, size_t size);

/// Finalize array of msg/CameraStillShot messages.
/**
 * It calls
 * opencv_wb_camera_msgs__msg__CameraStillShot__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_opencv_wb_camera_msgs
void
opencv_wb_camera_msgs__msg__CameraStillShot__Sequence__fini(opencv_wb_camera_msgs__msg__CameraStillShot__Sequence * array);

/// Create array of msg/CameraStillShot messages.
/**
 * It allocates the memory for the array and calls
 * opencv_wb_camera_msgs__msg__CameraStillShot__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_opencv_wb_camera_msgs
opencv_wb_camera_msgs__msg__CameraStillShot__Sequence *
opencv_wb_camera_msgs__msg__CameraStillShot__Sequence__create(size_t size);

/// Destroy array of msg/CameraStillShot messages.
/**
 * It calls
 * opencv_wb_camera_msgs__msg__CameraStillShot__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_opencv_wb_camera_msgs
void
opencv_wb_camera_msgs__msg__CameraStillShot__Sequence__destroy(opencv_wb_camera_msgs__msg__CameraStillShot__Sequence * array);

/// Check for msg/CameraStillShot message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_opencv_wb_camera_msgs
bool
opencv_wb_camera_msgs__msg__CameraStillShot__Sequence__are_equal(const opencv_wb_camera_msgs__msg__CameraStillShot__Sequence * lhs, const opencv_wb_camera_msgs__msg__CameraStillShot__Sequence * rhs);

/// Copy an array of msg/CameraStillShot messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_opencv_wb_camera_msgs
bool
opencv_wb_camera_msgs__msg__CameraStillShot__Sequence__copy(
  const opencv_wb_camera_msgs__msg__CameraStillShot__Sequence * input,
  opencv_wb_camera_msgs__msg__CameraStillShot__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // OPENCV_WB_CAMERA_MSGS__MSG__DETAIL__CAMERA_STILL_SHOT__FUNCTIONS_H_
