// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from opencv_wb_camera_msgs:srv/TakeSnapshot.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "opencv_wb_camera_msgs/srv/detail/take_snapshot__rosidl_typesupport_introspection_c.h"
#include "opencv_wb_camera_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "opencv_wb_camera_msgs/srv/detail/take_snapshot__functions.h"
#include "opencv_wb_camera_msgs/srv/detail/take_snapshot__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void opencv_wb_camera_msgs__srv__TakeSnapshot_Request__rosidl_typesupport_introspection_c__TakeSnapshot_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  opencv_wb_camera_msgs__srv__TakeSnapshot_Request__init(message_memory);
}

void opencv_wb_camera_msgs__srv__TakeSnapshot_Request__rosidl_typesupport_introspection_c__TakeSnapshot_Request_fini_function(void * message_memory)
{
  opencv_wb_camera_msgs__srv__TakeSnapshot_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember opencv_wb_camera_msgs__srv__TakeSnapshot_Request__rosidl_typesupport_introspection_c__TakeSnapshot_Request_message_member_array[1] = {
  {
    "structure_needs_at_least_one_member",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(opencv_wb_camera_msgs__srv__TakeSnapshot_Request, structure_needs_at_least_one_member),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers opencv_wb_camera_msgs__srv__TakeSnapshot_Request__rosidl_typesupport_introspection_c__TakeSnapshot_Request_message_members = {
  "opencv_wb_camera_msgs__srv",  // message namespace
  "TakeSnapshot_Request",  // message name
  1,  // number of fields
  sizeof(opencv_wb_camera_msgs__srv__TakeSnapshot_Request),
  opencv_wb_camera_msgs__srv__TakeSnapshot_Request__rosidl_typesupport_introspection_c__TakeSnapshot_Request_message_member_array,  // message members
  opencv_wb_camera_msgs__srv__TakeSnapshot_Request__rosidl_typesupport_introspection_c__TakeSnapshot_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  opencv_wb_camera_msgs__srv__TakeSnapshot_Request__rosidl_typesupport_introspection_c__TakeSnapshot_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t opencv_wb_camera_msgs__srv__TakeSnapshot_Request__rosidl_typesupport_introspection_c__TakeSnapshot_Request_message_type_support_handle = {
  0,
  &opencv_wb_camera_msgs__srv__TakeSnapshot_Request__rosidl_typesupport_introspection_c__TakeSnapshot_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_opencv_wb_camera_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, opencv_wb_camera_msgs, srv, TakeSnapshot_Request)() {
  if (!opencv_wb_camera_msgs__srv__TakeSnapshot_Request__rosidl_typesupport_introspection_c__TakeSnapshot_Request_message_type_support_handle.typesupport_identifier) {
    opencv_wb_camera_msgs__srv__TakeSnapshot_Request__rosidl_typesupport_introspection_c__TakeSnapshot_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &opencv_wb_camera_msgs__srv__TakeSnapshot_Request__rosidl_typesupport_introspection_c__TakeSnapshot_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "opencv_wb_camera_msgs/srv/detail/take_snapshot__rosidl_typesupport_introspection_c.h"
// already included above
// #include "opencv_wb_camera_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "opencv_wb_camera_msgs/srv/detail/take_snapshot__functions.h"
// already included above
// #include "opencv_wb_camera_msgs/srv/detail/take_snapshot__struct.h"


// Include directives for member types
// Member `filepath`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void opencv_wb_camera_msgs__srv__TakeSnapshot_Response__rosidl_typesupport_introspection_c__TakeSnapshot_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  opencv_wb_camera_msgs__srv__TakeSnapshot_Response__init(message_memory);
}

void opencv_wb_camera_msgs__srv__TakeSnapshot_Response__rosidl_typesupport_introspection_c__TakeSnapshot_Response_fini_function(void * message_memory)
{
  opencv_wb_camera_msgs__srv__TakeSnapshot_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember opencv_wb_camera_msgs__srv__TakeSnapshot_Response__rosidl_typesupport_introspection_c__TakeSnapshot_Response_message_member_array[2] = {
  {
    "success",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(opencv_wb_camera_msgs__srv__TakeSnapshot_Response, success),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "filepath",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(opencv_wb_camera_msgs__srv__TakeSnapshot_Response, filepath),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers opencv_wb_camera_msgs__srv__TakeSnapshot_Response__rosidl_typesupport_introspection_c__TakeSnapshot_Response_message_members = {
  "opencv_wb_camera_msgs__srv",  // message namespace
  "TakeSnapshot_Response",  // message name
  2,  // number of fields
  sizeof(opencv_wb_camera_msgs__srv__TakeSnapshot_Response),
  opencv_wb_camera_msgs__srv__TakeSnapshot_Response__rosidl_typesupport_introspection_c__TakeSnapshot_Response_message_member_array,  // message members
  opencv_wb_camera_msgs__srv__TakeSnapshot_Response__rosidl_typesupport_introspection_c__TakeSnapshot_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  opencv_wb_camera_msgs__srv__TakeSnapshot_Response__rosidl_typesupport_introspection_c__TakeSnapshot_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t opencv_wb_camera_msgs__srv__TakeSnapshot_Response__rosidl_typesupport_introspection_c__TakeSnapshot_Response_message_type_support_handle = {
  0,
  &opencv_wb_camera_msgs__srv__TakeSnapshot_Response__rosidl_typesupport_introspection_c__TakeSnapshot_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_opencv_wb_camera_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, opencv_wb_camera_msgs, srv, TakeSnapshot_Response)() {
  if (!opencv_wb_camera_msgs__srv__TakeSnapshot_Response__rosidl_typesupport_introspection_c__TakeSnapshot_Response_message_type_support_handle.typesupport_identifier) {
    opencv_wb_camera_msgs__srv__TakeSnapshot_Response__rosidl_typesupport_introspection_c__TakeSnapshot_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &opencv_wb_camera_msgs__srv__TakeSnapshot_Response__rosidl_typesupport_introspection_c__TakeSnapshot_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "opencv_wb_camera_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "opencv_wb_camera_msgs/srv/detail/take_snapshot__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers opencv_wb_camera_msgs__srv__detail__take_snapshot__rosidl_typesupport_introspection_c__TakeSnapshot_service_members = {
  "opencv_wb_camera_msgs__srv",  // service namespace
  "TakeSnapshot",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // opencv_wb_camera_msgs__srv__detail__take_snapshot__rosidl_typesupport_introspection_c__TakeSnapshot_Request_message_type_support_handle,
  NULL  // response message
  // opencv_wb_camera_msgs__srv__detail__take_snapshot__rosidl_typesupport_introspection_c__TakeSnapshot_Response_message_type_support_handle
};

static rosidl_service_type_support_t opencv_wb_camera_msgs__srv__detail__take_snapshot__rosidl_typesupport_introspection_c__TakeSnapshot_service_type_support_handle = {
  0,
  &opencv_wb_camera_msgs__srv__detail__take_snapshot__rosidl_typesupport_introspection_c__TakeSnapshot_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, opencv_wb_camera_msgs, srv, TakeSnapshot_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, opencv_wb_camera_msgs, srv, TakeSnapshot_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_opencv_wb_camera_msgs
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, opencv_wb_camera_msgs, srv, TakeSnapshot)() {
  if (!opencv_wb_camera_msgs__srv__detail__take_snapshot__rosidl_typesupport_introspection_c__TakeSnapshot_service_type_support_handle.typesupport_identifier) {
    opencv_wb_camera_msgs__srv__detail__take_snapshot__rosidl_typesupport_introspection_c__TakeSnapshot_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)opencv_wb_camera_msgs__srv__detail__take_snapshot__rosidl_typesupport_introspection_c__TakeSnapshot_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, opencv_wb_camera_msgs, srv, TakeSnapshot_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, opencv_wb_camera_msgs, srv, TakeSnapshot_Response)()->data;
  }

  return &opencv_wb_camera_msgs__srv__detail__take_snapshot__rosidl_typesupport_introspection_c__TakeSnapshot_service_type_support_handle;
}
