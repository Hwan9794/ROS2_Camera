// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from opencv_wb_camera_msgs:msg/CameraStillShot.idl
// generated code does not contain a copyright notice
#include "opencv_wb_camera_msgs/msg/detail/camera_still_shot__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
opencv_wb_camera_msgs__msg__CameraStillShot__init(opencv_wb_camera_msgs__msg__CameraStillShot * msg)
{
  if (!msg) {
    return false;
  }
  // cmd_vel_linear
  // cmd_vel_angular
  // pose_x
  // pose_y
  // linear_vel
  // angular_vel
  return true;
}

void
opencv_wb_camera_msgs__msg__CameraStillShot__fini(opencv_wb_camera_msgs__msg__CameraStillShot * msg)
{
  if (!msg) {
    return;
  }
  // cmd_vel_linear
  // cmd_vel_angular
  // pose_x
  // pose_y
  // linear_vel
  // angular_vel
}

bool
opencv_wb_camera_msgs__msg__CameraStillShot__are_equal(const opencv_wb_camera_msgs__msg__CameraStillShot * lhs, const opencv_wb_camera_msgs__msg__CameraStillShot * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // cmd_vel_linear
  if (lhs->cmd_vel_linear != rhs->cmd_vel_linear) {
    return false;
  }
  // cmd_vel_angular
  if (lhs->cmd_vel_angular != rhs->cmd_vel_angular) {
    return false;
  }
  // pose_x
  if (lhs->pose_x != rhs->pose_x) {
    return false;
  }
  // pose_y
  if (lhs->pose_y != rhs->pose_y) {
    return false;
  }
  // linear_vel
  if (lhs->linear_vel != rhs->linear_vel) {
    return false;
  }
  // angular_vel
  if (lhs->angular_vel != rhs->angular_vel) {
    return false;
  }
  return true;
}

bool
opencv_wb_camera_msgs__msg__CameraStillShot__copy(
  const opencv_wb_camera_msgs__msg__CameraStillShot * input,
  opencv_wb_camera_msgs__msg__CameraStillShot * output)
{
  if (!input || !output) {
    return false;
  }
  // cmd_vel_linear
  output->cmd_vel_linear = input->cmd_vel_linear;
  // cmd_vel_angular
  output->cmd_vel_angular = input->cmd_vel_angular;
  // pose_x
  output->pose_x = input->pose_x;
  // pose_y
  output->pose_y = input->pose_y;
  // linear_vel
  output->linear_vel = input->linear_vel;
  // angular_vel
  output->angular_vel = input->angular_vel;
  return true;
}

opencv_wb_camera_msgs__msg__CameraStillShot *
opencv_wb_camera_msgs__msg__CameraStillShot__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  opencv_wb_camera_msgs__msg__CameraStillShot * msg = (opencv_wb_camera_msgs__msg__CameraStillShot *)allocator.allocate(sizeof(opencv_wb_camera_msgs__msg__CameraStillShot), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(opencv_wb_camera_msgs__msg__CameraStillShot));
  bool success = opencv_wb_camera_msgs__msg__CameraStillShot__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
opencv_wb_camera_msgs__msg__CameraStillShot__destroy(opencv_wb_camera_msgs__msg__CameraStillShot * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    opencv_wb_camera_msgs__msg__CameraStillShot__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
opencv_wb_camera_msgs__msg__CameraStillShot__Sequence__init(opencv_wb_camera_msgs__msg__CameraStillShot__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  opencv_wb_camera_msgs__msg__CameraStillShot * data = NULL;

  if (size) {
    data = (opencv_wb_camera_msgs__msg__CameraStillShot *)allocator.zero_allocate(size, sizeof(opencv_wb_camera_msgs__msg__CameraStillShot), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = opencv_wb_camera_msgs__msg__CameraStillShot__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        opencv_wb_camera_msgs__msg__CameraStillShot__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
opencv_wb_camera_msgs__msg__CameraStillShot__Sequence__fini(opencv_wb_camera_msgs__msg__CameraStillShot__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      opencv_wb_camera_msgs__msg__CameraStillShot__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

opencv_wb_camera_msgs__msg__CameraStillShot__Sequence *
opencv_wb_camera_msgs__msg__CameraStillShot__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  opencv_wb_camera_msgs__msg__CameraStillShot__Sequence * array = (opencv_wb_camera_msgs__msg__CameraStillShot__Sequence *)allocator.allocate(sizeof(opencv_wb_camera_msgs__msg__CameraStillShot__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = opencv_wb_camera_msgs__msg__CameraStillShot__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
opencv_wb_camera_msgs__msg__CameraStillShot__Sequence__destroy(opencv_wb_camera_msgs__msg__CameraStillShot__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    opencv_wb_camera_msgs__msg__CameraStillShot__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
opencv_wb_camera_msgs__msg__CameraStillShot__Sequence__are_equal(const opencv_wb_camera_msgs__msg__CameraStillShot__Sequence * lhs, const opencv_wb_camera_msgs__msg__CameraStillShot__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!opencv_wb_camera_msgs__msg__CameraStillShot__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
opencv_wb_camera_msgs__msg__CameraStillShot__Sequence__copy(
  const opencv_wb_camera_msgs__msg__CameraStillShot__Sequence * input,
  opencv_wb_camera_msgs__msg__CameraStillShot__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(opencv_wb_camera_msgs__msg__CameraStillShot);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    opencv_wb_camera_msgs__msg__CameraStillShot * data =
      (opencv_wb_camera_msgs__msg__CameraStillShot *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!opencv_wb_camera_msgs__msg__CameraStillShot__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          opencv_wb_camera_msgs__msg__CameraStillShot__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!opencv_wb_camera_msgs__msg__CameraStillShot__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
