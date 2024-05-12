// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from opencv_wb_camera_msgs:msg/CameraStillShot.idl
// generated code does not contain a copyright notice

#ifndef OPENCV_WB_CAMERA_MSGS__MSG__DETAIL__CAMERA_STILL_SHOT__TRAITS_HPP_
#define OPENCV_WB_CAMERA_MSGS__MSG__DETAIL__CAMERA_STILL_SHOT__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "opencv_wb_camera_msgs/msg/detail/camera_still_shot__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace opencv_wb_camera_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const CameraStillShot & msg,
  std::ostream & out)
{
  out << "{";
  // member: cmd_vel_linear
  {
    out << "cmd_vel_linear: ";
    rosidl_generator_traits::value_to_yaml(msg.cmd_vel_linear, out);
    out << ", ";
  }

  // member: cmd_vel_angular
  {
    out << "cmd_vel_angular: ";
    rosidl_generator_traits::value_to_yaml(msg.cmd_vel_angular, out);
    out << ", ";
  }

  // member: pose_x
  {
    out << "pose_x: ";
    rosidl_generator_traits::value_to_yaml(msg.pose_x, out);
    out << ", ";
  }

  // member: pose_y
  {
    out << "pose_y: ";
    rosidl_generator_traits::value_to_yaml(msg.pose_y, out);
    out << ", ";
  }

  // member: linear_vel
  {
    out << "linear_vel: ";
    rosidl_generator_traits::value_to_yaml(msg.linear_vel, out);
    out << ", ";
  }

  // member: angular_vel
  {
    out << "angular_vel: ";
    rosidl_generator_traits::value_to_yaml(msg.angular_vel, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const CameraStillShot & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: cmd_vel_linear
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cmd_vel_linear: ";
    rosidl_generator_traits::value_to_yaml(msg.cmd_vel_linear, out);
    out << "\n";
  }

  // member: cmd_vel_angular
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cmd_vel_angular: ";
    rosidl_generator_traits::value_to_yaml(msg.cmd_vel_angular, out);
    out << "\n";
  }

  // member: pose_x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pose_x: ";
    rosidl_generator_traits::value_to_yaml(msg.pose_x, out);
    out << "\n";
  }

  // member: pose_y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pose_y: ";
    rosidl_generator_traits::value_to_yaml(msg.pose_y, out);
    out << "\n";
  }

  // member: linear_vel
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "linear_vel: ";
    rosidl_generator_traits::value_to_yaml(msg.linear_vel, out);
    out << "\n";
  }

  // member: angular_vel
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "angular_vel: ";
    rosidl_generator_traits::value_to_yaml(msg.angular_vel, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const CameraStillShot & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace opencv_wb_camera_msgs

namespace rosidl_generator_traits
{

[[deprecated("use opencv_wb_camera_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const opencv_wb_camera_msgs::msg::CameraStillShot & msg,
  std::ostream & out, size_t indentation = 0)
{
  opencv_wb_camera_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use opencv_wb_camera_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const opencv_wb_camera_msgs::msg::CameraStillShot & msg)
{
  return opencv_wb_camera_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<opencv_wb_camera_msgs::msg::CameraStillShot>()
{
  return "opencv_wb_camera_msgs::msg::CameraStillShot";
}

template<>
inline const char * name<opencv_wb_camera_msgs::msg::CameraStillShot>()
{
  return "opencv_wb_camera_msgs/msg/CameraStillShot";
}

template<>
struct has_fixed_size<opencv_wb_camera_msgs::msg::CameraStillShot>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<opencv_wb_camera_msgs::msg::CameraStillShot>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<opencv_wb_camera_msgs::msg::CameraStillShot>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // OPENCV_WB_CAMERA_MSGS__MSG__DETAIL__CAMERA_STILL_SHOT__TRAITS_HPP_
