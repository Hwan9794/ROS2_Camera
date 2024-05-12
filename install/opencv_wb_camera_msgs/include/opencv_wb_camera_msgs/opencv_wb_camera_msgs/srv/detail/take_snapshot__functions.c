// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from opencv_wb_camera_msgs:srv/TakeSnapshot.idl
// generated code does not contain a copyright notice
#include "opencv_wb_camera_msgs/srv/detail/take_snapshot__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

bool
opencv_wb_camera_msgs__srv__TakeSnapshot_Request__init(opencv_wb_camera_msgs__srv__TakeSnapshot_Request * msg)
{
  if (!msg) {
    return false;
  }
  // structure_needs_at_least_one_member
  return true;
}

void
opencv_wb_camera_msgs__srv__TakeSnapshot_Request__fini(opencv_wb_camera_msgs__srv__TakeSnapshot_Request * msg)
{
  if (!msg) {
    return;
  }
  // structure_needs_at_least_one_member
}

bool
opencv_wb_camera_msgs__srv__TakeSnapshot_Request__are_equal(const opencv_wb_camera_msgs__srv__TakeSnapshot_Request * lhs, const opencv_wb_camera_msgs__srv__TakeSnapshot_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // structure_needs_at_least_one_member
  if (lhs->structure_needs_at_least_one_member != rhs->structure_needs_at_least_one_member) {
    return false;
  }
  return true;
}

bool
opencv_wb_camera_msgs__srv__TakeSnapshot_Request__copy(
  const opencv_wb_camera_msgs__srv__TakeSnapshot_Request * input,
  opencv_wb_camera_msgs__srv__TakeSnapshot_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // structure_needs_at_least_one_member
  output->structure_needs_at_least_one_member = input->structure_needs_at_least_one_member;
  return true;
}

opencv_wb_camera_msgs__srv__TakeSnapshot_Request *
opencv_wb_camera_msgs__srv__TakeSnapshot_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  opencv_wb_camera_msgs__srv__TakeSnapshot_Request * msg = (opencv_wb_camera_msgs__srv__TakeSnapshot_Request *)allocator.allocate(sizeof(opencv_wb_camera_msgs__srv__TakeSnapshot_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(opencv_wb_camera_msgs__srv__TakeSnapshot_Request));
  bool success = opencv_wb_camera_msgs__srv__TakeSnapshot_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
opencv_wb_camera_msgs__srv__TakeSnapshot_Request__destroy(opencv_wb_camera_msgs__srv__TakeSnapshot_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    opencv_wb_camera_msgs__srv__TakeSnapshot_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
opencv_wb_camera_msgs__srv__TakeSnapshot_Request__Sequence__init(opencv_wb_camera_msgs__srv__TakeSnapshot_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  opencv_wb_camera_msgs__srv__TakeSnapshot_Request * data = NULL;

  if (size) {
    data = (opencv_wb_camera_msgs__srv__TakeSnapshot_Request *)allocator.zero_allocate(size, sizeof(opencv_wb_camera_msgs__srv__TakeSnapshot_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = opencv_wb_camera_msgs__srv__TakeSnapshot_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        opencv_wb_camera_msgs__srv__TakeSnapshot_Request__fini(&data[i - 1]);
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
opencv_wb_camera_msgs__srv__TakeSnapshot_Request__Sequence__fini(opencv_wb_camera_msgs__srv__TakeSnapshot_Request__Sequence * array)
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
      opencv_wb_camera_msgs__srv__TakeSnapshot_Request__fini(&array->data[i]);
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

opencv_wb_camera_msgs__srv__TakeSnapshot_Request__Sequence *
opencv_wb_camera_msgs__srv__TakeSnapshot_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  opencv_wb_camera_msgs__srv__TakeSnapshot_Request__Sequence * array = (opencv_wb_camera_msgs__srv__TakeSnapshot_Request__Sequence *)allocator.allocate(sizeof(opencv_wb_camera_msgs__srv__TakeSnapshot_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = opencv_wb_camera_msgs__srv__TakeSnapshot_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
opencv_wb_camera_msgs__srv__TakeSnapshot_Request__Sequence__destroy(opencv_wb_camera_msgs__srv__TakeSnapshot_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    opencv_wb_camera_msgs__srv__TakeSnapshot_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
opencv_wb_camera_msgs__srv__TakeSnapshot_Request__Sequence__are_equal(const opencv_wb_camera_msgs__srv__TakeSnapshot_Request__Sequence * lhs, const opencv_wb_camera_msgs__srv__TakeSnapshot_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!opencv_wb_camera_msgs__srv__TakeSnapshot_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
opencv_wb_camera_msgs__srv__TakeSnapshot_Request__Sequence__copy(
  const opencv_wb_camera_msgs__srv__TakeSnapshot_Request__Sequence * input,
  opencv_wb_camera_msgs__srv__TakeSnapshot_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(opencv_wb_camera_msgs__srv__TakeSnapshot_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    opencv_wb_camera_msgs__srv__TakeSnapshot_Request * data =
      (opencv_wb_camera_msgs__srv__TakeSnapshot_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!opencv_wb_camera_msgs__srv__TakeSnapshot_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          opencv_wb_camera_msgs__srv__TakeSnapshot_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!opencv_wb_camera_msgs__srv__TakeSnapshot_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `filepath`
#include "rosidl_runtime_c/string_functions.h"

bool
opencv_wb_camera_msgs__srv__TakeSnapshot_Response__init(opencv_wb_camera_msgs__srv__TakeSnapshot_Response * msg)
{
  if (!msg) {
    return false;
  }
  // success
  // filepath
  if (!rosidl_runtime_c__String__init(&msg->filepath)) {
    opencv_wb_camera_msgs__srv__TakeSnapshot_Response__fini(msg);
    return false;
  }
  return true;
}

void
opencv_wb_camera_msgs__srv__TakeSnapshot_Response__fini(opencv_wb_camera_msgs__srv__TakeSnapshot_Response * msg)
{
  if (!msg) {
    return;
  }
  // success
  // filepath
  rosidl_runtime_c__String__fini(&msg->filepath);
}

bool
opencv_wb_camera_msgs__srv__TakeSnapshot_Response__are_equal(const opencv_wb_camera_msgs__srv__TakeSnapshot_Response * lhs, const opencv_wb_camera_msgs__srv__TakeSnapshot_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // success
  if (lhs->success != rhs->success) {
    return false;
  }
  // filepath
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->filepath), &(rhs->filepath)))
  {
    return false;
  }
  return true;
}

bool
opencv_wb_camera_msgs__srv__TakeSnapshot_Response__copy(
  const opencv_wb_camera_msgs__srv__TakeSnapshot_Response * input,
  opencv_wb_camera_msgs__srv__TakeSnapshot_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // success
  output->success = input->success;
  // filepath
  if (!rosidl_runtime_c__String__copy(
      &(input->filepath), &(output->filepath)))
  {
    return false;
  }
  return true;
}

opencv_wb_camera_msgs__srv__TakeSnapshot_Response *
opencv_wb_camera_msgs__srv__TakeSnapshot_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  opencv_wb_camera_msgs__srv__TakeSnapshot_Response * msg = (opencv_wb_camera_msgs__srv__TakeSnapshot_Response *)allocator.allocate(sizeof(opencv_wb_camera_msgs__srv__TakeSnapshot_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(opencv_wb_camera_msgs__srv__TakeSnapshot_Response));
  bool success = opencv_wb_camera_msgs__srv__TakeSnapshot_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
opencv_wb_camera_msgs__srv__TakeSnapshot_Response__destroy(opencv_wb_camera_msgs__srv__TakeSnapshot_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    opencv_wb_camera_msgs__srv__TakeSnapshot_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
opencv_wb_camera_msgs__srv__TakeSnapshot_Response__Sequence__init(opencv_wb_camera_msgs__srv__TakeSnapshot_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  opencv_wb_camera_msgs__srv__TakeSnapshot_Response * data = NULL;

  if (size) {
    data = (opencv_wb_camera_msgs__srv__TakeSnapshot_Response *)allocator.zero_allocate(size, sizeof(opencv_wb_camera_msgs__srv__TakeSnapshot_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = opencv_wb_camera_msgs__srv__TakeSnapshot_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        opencv_wb_camera_msgs__srv__TakeSnapshot_Response__fini(&data[i - 1]);
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
opencv_wb_camera_msgs__srv__TakeSnapshot_Response__Sequence__fini(opencv_wb_camera_msgs__srv__TakeSnapshot_Response__Sequence * array)
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
      opencv_wb_camera_msgs__srv__TakeSnapshot_Response__fini(&array->data[i]);
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

opencv_wb_camera_msgs__srv__TakeSnapshot_Response__Sequence *
opencv_wb_camera_msgs__srv__TakeSnapshot_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  opencv_wb_camera_msgs__srv__TakeSnapshot_Response__Sequence * array = (opencv_wb_camera_msgs__srv__TakeSnapshot_Response__Sequence *)allocator.allocate(sizeof(opencv_wb_camera_msgs__srv__TakeSnapshot_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = opencv_wb_camera_msgs__srv__TakeSnapshot_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
opencv_wb_camera_msgs__srv__TakeSnapshot_Response__Sequence__destroy(opencv_wb_camera_msgs__srv__TakeSnapshot_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    opencv_wb_camera_msgs__srv__TakeSnapshot_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
opencv_wb_camera_msgs__srv__TakeSnapshot_Response__Sequence__are_equal(const opencv_wb_camera_msgs__srv__TakeSnapshot_Response__Sequence * lhs, const opencv_wb_camera_msgs__srv__TakeSnapshot_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!opencv_wb_camera_msgs__srv__TakeSnapshot_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
opencv_wb_camera_msgs__srv__TakeSnapshot_Response__Sequence__copy(
  const opencv_wb_camera_msgs__srv__TakeSnapshot_Response__Sequence * input,
  opencv_wb_camera_msgs__srv__TakeSnapshot_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(opencv_wb_camera_msgs__srv__TakeSnapshot_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    opencv_wb_camera_msgs__srv__TakeSnapshot_Response * data =
      (opencv_wb_camera_msgs__srv__TakeSnapshot_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!opencv_wb_camera_msgs__srv__TakeSnapshot_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          opencv_wb_camera_msgs__srv__TakeSnapshot_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!opencv_wb_camera_msgs__srv__TakeSnapshot_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
