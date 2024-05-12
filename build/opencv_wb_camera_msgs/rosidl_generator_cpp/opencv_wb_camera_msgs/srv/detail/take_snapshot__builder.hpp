// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from opencv_wb_camera_msgs:srv/TakeSnapshot.idl
// generated code does not contain a copyright notice

#ifndef OPENCV_WB_CAMERA_MSGS__SRV__DETAIL__TAKE_SNAPSHOT__BUILDER_HPP_
#define OPENCV_WB_CAMERA_MSGS__SRV__DETAIL__TAKE_SNAPSHOT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "opencv_wb_camera_msgs/srv/detail/take_snapshot__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace opencv_wb_camera_msgs
{

namespace srv
{


}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::opencv_wb_camera_msgs::srv::TakeSnapshot_Request>()
{
  return ::opencv_wb_camera_msgs::srv::TakeSnapshot_Request(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace opencv_wb_camera_msgs


namespace opencv_wb_camera_msgs
{

namespace srv
{

namespace builder
{

class Init_TakeSnapshot_Response_filepath
{
public:
  explicit Init_TakeSnapshot_Response_filepath(::opencv_wb_camera_msgs::srv::TakeSnapshot_Response & msg)
  : msg_(msg)
  {}
  ::opencv_wb_camera_msgs::srv::TakeSnapshot_Response filepath(::opencv_wb_camera_msgs::srv::TakeSnapshot_Response::_filepath_type arg)
  {
    msg_.filepath = std::move(arg);
    return std::move(msg_);
  }

private:
  ::opencv_wb_camera_msgs::srv::TakeSnapshot_Response msg_;
};

class Init_TakeSnapshot_Response_success
{
public:
  Init_TakeSnapshot_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TakeSnapshot_Response_filepath success(::opencv_wb_camera_msgs::srv::TakeSnapshot_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_TakeSnapshot_Response_filepath(msg_);
  }

private:
  ::opencv_wb_camera_msgs::srv::TakeSnapshot_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::opencv_wb_camera_msgs::srv::TakeSnapshot_Response>()
{
  return opencv_wb_camera_msgs::srv::builder::Init_TakeSnapshot_Response_success();
}

}  // namespace opencv_wb_camera_msgs

#endif  // OPENCV_WB_CAMERA_MSGS__SRV__DETAIL__TAKE_SNAPSHOT__BUILDER_HPP_
