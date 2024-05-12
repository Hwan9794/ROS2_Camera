// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from opencv_wb_camera_msgs:srv/TakeSnapshot.idl
// generated code does not contain a copyright notice

#ifndef OPENCV_WB_CAMERA_MSGS__SRV__DETAIL__TAKE_SNAPSHOT__TRAITS_HPP_
#define OPENCV_WB_CAMERA_MSGS__SRV__DETAIL__TAKE_SNAPSHOT__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "opencv_wb_camera_msgs/srv/detail/take_snapshot__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace opencv_wb_camera_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const TakeSnapshot_Request & msg,
  std::ostream & out)
{
  (void)msg;
  out << "null";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const TakeSnapshot_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  (void)msg;
  (void)indentation;
  out << "null\n";
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const TakeSnapshot_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace opencv_wb_camera_msgs

namespace rosidl_generator_traits
{

[[deprecated("use opencv_wb_camera_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const opencv_wb_camera_msgs::srv::TakeSnapshot_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  opencv_wb_camera_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use opencv_wb_camera_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const opencv_wb_camera_msgs::srv::TakeSnapshot_Request & msg)
{
  return opencv_wb_camera_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<opencv_wb_camera_msgs::srv::TakeSnapshot_Request>()
{
  return "opencv_wb_camera_msgs::srv::TakeSnapshot_Request";
}

template<>
inline const char * name<opencv_wb_camera_msgs::srv::TakeSnapshot_Request>()
{
  return "opencv_wb_camera_msgs/srv/TakeSnapshot_Request";
}

template<>
struct has_fixed_size<opencv_wb_camera_msgs::srv::TakeSnapshot_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<opencv_wb_camera_msgs::srv::TakeSnapshot_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<opencv_wb_camera_msgs::srv::TakeSnapshot_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace opencv_wb_camera_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const TakeSnapshot_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: success
  {
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << ", ";
  }

  // member: filepath
  {
    out << "filepath: ";
    rosidl_generator_traits::value_to_yaml(msg.filepath, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const TakeSnapshot_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: success
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << "\n";
  }

  // member: filepath
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "filepath: ";
    rosidl_generator_traits::value_to_yaml(msg.filepath, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const TakeSnapshot_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace opencv_wb_camera_msgs

namespace rosidl_generator_traits
{

[[deprecated("use opencv_wb_camera_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const opencv_wb_camera_msgs::srv::TakeSnapshot_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  opencv_wb_camera_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use opencv_wb_camera_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const opencv_wb_camera_msgs::srv::TakeSnapshot_Response & msg)
{
  return opencv_wb_camera_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<opencv_wb_camera_msgs::srv::TakeSnapshot_Response>()
{
  return "opencv_wb_camera_msgs::srv::TakeSnapshot_Response";
}

template<>
inline const char * name<opencv_wb_camera_msgs::srv::TakeSnapshot_Response>()
{
  return "opencv_wb_camera_msgs/srv/TakeSnapshot_Response";
}

template<>
struct has_fixed_size<opencv_wb_camera_msgs::srv::TakeSnapshot_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<opencv_wb_camera_msgs::srv::TakeSnapshot_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<opencv_wb_camera_msgs::srv::TakeSnapshot_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<opencv_wb_camera_msgs::srv::TakeSnapshot>()
{
  return "opencv_wb_camera_msgs::srv::TakeSnapshot";
}

template<>
inline const char * name<opencv_wb_camera_msgs::srv::TakeSnapshot>()
{
  return "opencv_wb_camera_msgs/srv/TakeSnapshot";
}

template<>
struct has_fixed_size<opencv_wb_camera_msgs::srv::TakeSnapshot>
  : std::integral_constant<
    bool,
    has_fixed_size<opencv_wb_camera_msgs::srv::TakeSnapshot_Request>::value &&
    has_fixed_size<opencv_wb_camera_msgs::srv::TakeSnapshot_Response>::value
  >
{
};

template<>
struct has_bounded_size<opencv_wb_camera_msgs::srv::TakeSnapshot>
  : std::integral_constant<
    bool,
    has_bounded_size<opencv_wb_camera_msgs::srv::TakeSnapshot_Request>::value &&
    has_bounded_size<opencv_wb_camera_msgs::srv::TakeSnapshot_Response>::value
  >
{
};

template<>
struct is_service<opencv_wb_camera_msgs::srv::TakeSnapshot>
  : std::true_type
{
};

template<>
struct is_service_request<opencv_wb_camera_msgs::srv::TakeSnapshot_Request>
  : std::true_type
{
};

template<>
struct is_service_response<opencv_wb_camera_msgs::srv::TakeSnapshot_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // OPENCV_WB_CAMERA_MSGS__SRV__DETAIL__TAKE_SNAPSHOT__TRAITS_HPP_
