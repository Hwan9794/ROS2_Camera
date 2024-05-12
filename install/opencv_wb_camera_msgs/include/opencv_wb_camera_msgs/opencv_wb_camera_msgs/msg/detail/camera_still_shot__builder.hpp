// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from opencv_wb_camera_msgs:msg/CameraStillShot.idl
// generated code does not contain a copyright notice

#ifndef OPENCV_WB_CAMERA_MSGS__MSG__DETAIL__CAMERA_STILL_SHOT__BUILDER_HPP_
#define OPENCV_WB_CAMERA_MSGS__MSG__DETAIL__CAMERA_STILL_SHOT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "opencv_wb_camera_msgs/msg/detail/camera_still_shot__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace opencv_wb_camera_msgs
{

namespace msg
{

namespace builder
{

class Init_CameraStillShot_angular_vel
{
public:
  explicit Init_CameraStillShot_angular_vel(::opencv_wb_camera_msgs::msg::CameraStillShot & msg)
  : msg_(msg)
  {}
  ::opencv_wb_camera_msgs::msg::CameraStillShot angular_vel(::opencv_wb_camera_msgs::msg::CameraStillShot::_angular_vel_type arg)
  {
    msg_.angular_vel = std::move(arg);
    return std::move(msg_);
  }

private:
  ::opencv_wb_camera_msgs::msg::CameraStillShot msg_;
};

class Init_CameraStillShot_linear_vel
{
public:
  explicit Init_CameraStillShot_linear_vel(::opencv_wb_camera_msgs::msg::CameraStillShot & msg)
  : msg_(msg)
  {}
  Init_CameraStillShot_angular_vel linear_vel(::opencv_wb_camera_msgs::msg::CameraStillShot::_linear_vel_type arg)
  {
    msg_.linear_vel = std::move(arg);
    return Init_CameraStillShot_angular_vel(msg_);
  }

private:
  ::opencv_wb_camera_msgs::msg::CameraStillShot msg_;
};

class Init_CameraStillShot_pose_y
{
public:
  explicit Init_CameraStillShot_pose_y(::opencv_wb_camera_msgs::msg::CameraStillShot & msg)
  : msg_(msg)
  {}
  Init_CameraStillShot_linear_vel pose_y(::opencv_wb_camera_msgs::msg::CameraStillShot::_pose_y_type arg)
  {
    msg_.pose_y = std::move(arg);
    return Init_CameraStillShot_linear_vel(msg_);
  }

private:
  ::opencv_wb_camera_msgs::msg::CameraStillShot msg_;
};

class Init_CameraStillShot_pose_x
{
public:
  explicit Init_CameraStillShot_pose_x(::opencv_wb_camera_msgs::msg::CameraStillShot & msg)
  : msg_(msg)
  {}
  Init_CameraStillShot_pose_y pose_x(::opencv_wb_camera_msgs::msg::CameraStillShot::_pose_x_type arg)
  {
    msg_.pose_x = std::move(arg);
    return Init_CameraStillShot_pose_y(msg_);
  }

private:
  ::opencv_wb_camera_msgs::msg::CameraStillShot msg_;
};

class Init_CameraStillShot_cmd_vel_angular
{
public:
  explicit Init_CameraStillShot_cmd_vel_angular(::opencv_wb_camera_msgs::msg::CameraStillShot & msg)
  : msg_(msg)
  {}
  Init_CameraStillShot_pose_x cmd_vel_angular(::opencv_wb_camera_msgs::msg::CameraStillShot::_cmd_vel_angular_type arg)
  {
    msg_.cmd_vel_angular = std::move(arg);
    return Init_CameraStillShot_pose_x(msg_);
  }

private:
  ::opencv_wb_camera_msgs::msg::CameraStillShot msg_;
};

class Init_CameraStillShot_cmd_vel_linear
{
public:
  Init_CameraStillShot_cmd_vel_linear()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CameraStillShot_cmd_vel_angular cmd_vel_linear(::opencv_wb_camera_msgs::msg::CameraStillShot::_cmd_vel_linear_type arg)
  {
    msg_.cmd_vel_linear = std::move(arg);
    return Init_CameraStillShot_cmd_vel_angular(msg_);
  }

private:
  ::opencv_wb_camera_msgs::msg::CameraStillShot msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::opencv_wb_camera_msgs::msg::CameraStillShot>()
{
  return opencv_wb_camera_msgs::msg::builder::Init_CameraStillShot_cmd_vel_linear();
}

}  // namespace opencv_wb_camera_msgs

#endif  // OPENCV_WB_CAMERA_MSGS__MSG__DETAIL__CAMERA_STILL_SHOT__BUILDER_HPP_
