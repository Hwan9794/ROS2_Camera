// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from opencv_wb_camera_msgs:srv/TakeSnapshot.idl
// generated code does not contain a copyright notice

#ifndef OPENCV_WB_CAMERA_MSGS__SRV__DETAIL__TAKE_SNAPSHOT__FUNCTIONS_H_
#define OPENCV_WB_CAMERA_MSGS__SRV__DETAIL__TAKE_SNAPSHOT__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "opencv_wb_camera_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "opencv_wb_camera_msgs/srv/detail/take_snapshot__struct.h"

/// Initialize srv/TakeSnapshot message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * opencv_wb_camera_msgs__srv__TakeSnapshot_Request
 * )) before or use
 * opencv_wb_camera_msgs__srv__TakeSnapshot_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_opencv_wb_camera_msgs
bool
opencv_wb_camera_msgs__srv__TakeSnapshot_Request__init(opencv_wb_camera_msgs__srv__TakeSnapshot_Request * msg);

/// Finalize srv/TakeSnapshot message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_opencv_wb_camera_msgs
void
opencv_wb_camera_msgs__srv__TakeSnapshot_Request__fini(opencv_wb_camera_msgs__srv__TakeSnapshot_Request * msg);

/// Create srv/TakeSnapshot message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * opencv_wb_camera_msgs__srv__TakeSnapshot_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_opencv_wb_camera_msgs
opencv_wb_camera_msgs__srv__TakeSnapshot_Request *
opencv_wb_camera_msgs__srv__TakeSnapshot_Request__create();

/// Destroy srv/TakeSnapshot message.
/**
 * It calls
 * opencv_wb_camera_msgs__srv__TakeSnapshot_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_opencv_wb_camera_msgs
void
opencv_wb_camera_msgs__srv__TakeSnapshot_Request__destroy(opencv_wb_camera_msgs__srv__TakeSnapshot_Request * msg);

/// Check for srv/TakeSnapshot message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_opencv_wb_camera_msgs
bool
opencv_wb_camera_msgs__srv__TakeSnapshot_Request__are_equal(const opencv_wb_camera_msgs__srv__TakeSnapshot_Request * lhs, const opencv_wb_camera_msgs__srv__TakeSnapshot_Request * rhs);

/// Copy a srv/TakeSnapshot message.
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
opencv_wb_camera_msgs__srv__TakeSnapshot_Request__copy(
  const opencv_wb_camera_msgs__srv__TakeSnapshot_Request * input,
  opencv_wb_camera_msgs__srv__TakeSnapshot_Request * output);

/// Initialize array of srv/TakeSnapshot messages.
/**
 * It allocates the memory for the number of elements and calls
 * opencv_wb_camera_msgs__srv__TakeSnapshot_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_opencv_wb_camera_msgs
bool
opencv_wb_camera_msgs__srv__TakeSnapshot_Request__Sequence__init(opencv_wb_camera_msgs__srv__TakeSnapshot_Request__Sequence * array, size_t size);

/// Finalize array of srv/TakeSnapshot messages.
/**
 * It calls
 * opencv_wb_camera_msgs__srv__TakeSnapshot_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_opencv_wb_camera_msgs
void
opencv_wb_camera_msgs__srv__TakeSnapshot_Request__Sequence__fini(opencv_wb_camera_msgs__srv__TakeSnapshot_Request__Sequence * array);

/// Create array of srv/TakeSnapshot messages.
/**
 * It allocates the memory for the array and calls
 * opencv_wb_camera_msgs__srv__TakeSnapshot_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_opencv_wb_camera_msgs
opencv_wb_camera_msgs__srv__TakeSnapshot_Request__Sequence *
opencv_wb_camera_msgs__srv__TakeSnapshot_Request__Sequence__create(size_t size);

/// Destroy array of srv/TakeSnapshot messages.
/**
 * It calls
 * opencv_wb_camera_msgs__srv__TakeSnapshot_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_opencv_wb_camera_msgs
void
opencv_wb_camera_msgs__srv__TakeSnapshot_Request__Sequence__destroy(opencv_wb_camera_msgs__srv__TakeSnapshot_Request__Sequence * array);

/// Check for srv/TakeSnapshot message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_opencv_wb_camera_msgs
bool
opencv_wb_camera_msgs__srv__TakeSnapshot_Request__Sequence__are_equal(const opencv_wb_camera_msgs__srv__TakeSnapshot_Request__Sequence * lhs, const opencv_wb_camera_msgs__srv__TakeSnapshot_Request__Sequence * rhs);

/// Copy an array of srv/TakeSnapshot messages.
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
opencv_wb_camera_msgs__srv__TakeSnapshot_Request__Sequence__copy(
  const opencv_wb_camera_msgs__srv__TakeSnapshot_Request__Sequence * input,
  opencv_wb_camera_msgs__srv__TakeSnapshot_Request__Sequence * output);

/// Initialize srv/TakeSnapshot message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * opencv_wb_camera_msgs__srv__TakeSnapshot_Response
 * )) before or use
 * opencv_wb_camera_msgs__srv__TakeSnapshot_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_opencv_wb_camera_msgs
bool
opencv_wb_camera_msgs__srv__TakeSnapshot_Response__init(opencv_wb_camera_msgs__srv__TakeSnapshot_Response * msg);

/// Finalize srv/TakeSnapshot message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_opencv_wb_camera_msgs
void
opencv_wb_camera_msgs__srv__TakeSnapshot_Response__fini(opencv_wb_camera_msgs__srv__TakeSnapshot_Response * msg);

/// Create srv/TakeSnapshot message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * opencv_wb_camera_msgs__srv__TakeSnapshot_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_opencv_wb_camera_msgs
opencv_wb_camera_msgs__srv__TakeSnapshot_Response *
opencv_wb_camera_msgs__srv__TakeSnapshot_Response__create();

/// Destroy srv/TakeSnapshot message.
/**
 * It calls
 * opencv_wb_camera_msgs__srv__TakeSnapshot_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_opencv_wb_camera_msgs
void
opencv_wb_camera_msgs__srv__TakeSnapshot_Response__destroy(opencv_wb_camera_msgs__srv__TakeSnapshot_Response * msg);

/// Check for srv/TakeSnapshot message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_opencv_wb_camera_msgs
bool
opencv_wb_camera_msgs__srv__TakeSnapshot_Response__are_equal(const opencv_wb_camera_msgs__srv__TakeSnapshot_Response * lhs, const opencv_wb_camera_msgs__srv__TakeSnapshot_Response * rhs);

/// Copy a srv/TakeSnapshot message.
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
opencv_wb_camera_msgs__srv__TakeSnapshot_Response__copy(
  const opencv_wb_camera_msgs__srv__TakeSnapshot_Response * input,
  opencv_wb_camera_msgs__srv__TakeSnapshot_Response * output);

/// Initialize array of srv/TakeSnapshot messages.
/**
 * It allocates the memory for the number of elements and calls
 * opencv_wb_camera_msgs__srv__TakeSnapshot_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_opencv_wb_camera_msgs
bool
opencv_wb_camera_msgs__srv__TakeSnapshot_Response__Sequence__init(opencv_wb_camera_msgs__srv__TakeSnapshot_Response__Sequence * array, size_t size);

/// Finalize array of srv/TakeSnapshot messages.
/**
 * It calls
 * opencv_wb_camera_msgs__srv__TakeSnapshot_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_opencv_wb_camera_msgs
void
opencv_wb_camera_msgs__srv__TakeSnapshot_Response__Sequence__fini(opencv_wb_camera_msgs__srv__TakeSnapshot_Response__Sequence * array);

/// Create array of srv/TakeSnapshot messages.
/**
 * It allocates the memory for the array and calls
 * opencv_wb_camera_msgs__srv__TakeSnapshot_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_opencv_wb_camera_msgs
opencv_wb_camera_msgs__srv__TakeSnapshot_Response__Sequence *
opencv_wb_camera_msgs__srv__TakeSnapshot_Response__Sequence__create(size_t size);

/// Destroy array of srv/TakeSnapshot messages.
/**
 * It calls
 * opencv_wb_camera_msgs__srv__TakeSnapshot_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_opencv_wb_camera_msgs
void
opencv_wb_camera_msgs__srv__TakeSnapshot_Response__Sequence__destroy(opencv_wb_camera_msgs__srv__TakeSnapshot_Response__Sequence * array);

/// Check for srv/TakeSnapshot message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_opencv_wb_camera_msgs
bool
opencv_wb_camera_msgs__srv__TakeSnapshot_Response__Sequence__are_equal(const opencv_wb_camera_msgs__srv__TakeSnapshot_Response__Sequence * lhs, const opencv_wb_camera_msgs__srv__TakeSnapshot_Response__Sequence * rhs);

/// Copy an array of srv/TakeSnapshot messages.
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
opencv_wb_camera_msgs__srv__TakeSnapshot_Response__Sequence__copy(
  const opencv_wb_camera_msgs__srv__TakeSnapshot_Response__Sequence * input,
  opencv_wb_camera_msgs__srv__TakeSnapshot_Response__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // OPENCV_WB_CAMERA_MSGS__SRV__DETAIL__TAKE_SNAPSHOT__FUNCTIONS_H_
