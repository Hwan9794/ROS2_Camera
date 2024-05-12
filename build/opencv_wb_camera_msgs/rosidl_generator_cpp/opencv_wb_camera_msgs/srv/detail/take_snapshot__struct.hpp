// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from opencv_wb_camera_msgs:srv/TakeSnapshot.idl
// generated code does not contain a copyright notice

#ifndef OPENCV_WB_CAMERA_MSGS__SRV__DETAIL__TAKE_SNAPSHOT__STRUCT_HPP_
#define OPENCV_WB_CAMERA_MSGS__SRV__DETAIL__TAKE_SNAPSHOT__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__opencv_wb_camera_msgs__srv__TakeSnapshot_Request __attribute__((deprecated))
#else
# define DEPRECATED__opencv_wb_camera_msgs__srv__TakeSnapshot_Request __declspec(deprecated)
#endif

namespace opencv_wb_camera_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct TakeSnapshot_Request_
{
  using Type = TakeSnapshot_Request_<ContainerAllocator>;

  explicit TakeSnapshot_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->structure_needs_at_least_one_member = 0;
    }
  }

  explicit TakeSnapshot_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->structure_needs_at_least_one_member = 0;
    }
  }

  // field types and members
  using _structure_needs_at_least_one_member_type =
    uint8_t;
  _structure_needs_at_least_one_member_type structure_needs_at_least_one_member;


  // constant declarations

  // pointer types
  using RawPtr =
    opencv_wb_camera_msgs::srv::TakeSnapshot_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const opencv_wb_camera_msgs::srv::TakeSnapshot_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<opencv_wb_camera_msgs::srv::TakeSnapshot_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<opencv_wb_camera_msgs::srv::TakeSnapshot_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      opencv_wb_camera_msgs::srv::TakeSnapshot_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<opencv_wb_camera_msgs::srv::TakeSnapshot_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      opencv_wb_camera_msgs::srv::TakeSnapshot_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<opencv_wb_camera_msgs::srv::TakeSnapshot_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<opencv_wb_camera_msgs::srv::TakeSnapshot_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<opencv_wb_camera_msgs::srv::TakeSnapshot_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__opencv_wb_camera_msgs__srv__TakeSnapshot_Request
    std::shared_ptr<opencv_wb_camera_msgs::srv::TakeSnapshot_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__opencv_wb_camera_msgs__srv__TakeSnapshot_Request
    std::shared_ptr<opencv_wb_camera_msgs::srv::TakeSnapshot_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const TakeSnapshot_Request_ & other) const
  {
    if (this->structure_needs_at_least_one_member != other.structure_needs_at_least_one_member) {
      return false;
    }
    return true;
  }
  bool operator!=(const TakeSnapshot_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct TakeSnapshot_Request_

// alias to use template instance with default allocator
using TakeSnapshot_Request =
  opencv_wb_camera_msgs::srv::TakeSnapshot_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace opencv_wb_camera_msgs


#ifndef _WIN32
# define DEPRECATED__opencv_wb_camera_msgs__srv__TakeSnapshot_Response __attribute__((deprecated))
#else
# define DEPRECATED__opencv_wb_camera_msgs__srv__TakeSnapshot_Response __declspec(deprecated)
#endif

namespace opencv_wb_camera_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct TakeSnapshot_Response_
{
  using Type = TakeSnapshot_Response_<ContainerAllocator>;

  explicit TakeSnapshot_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
      this->filepath = "";
    }
  }

  explicit TakeSnapshot_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : filepath(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
      this->filepath = "";
    }
  }

  // field types and members
  using _success_type =
    bool;
  _success_type success;
  using _filepath_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _filepath_type filepath;

  // setters for named parameter idiom
  Type & set__success(
    const bool & _arg)
  {
    this->success = _arg;
    return *this;
  }
  Type & set__filepath(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->filepath = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    opencv_wb_camera_msgs::srv::TakeSnapshot_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const opencv_wb_camera_msgs::srv::TakeSnapshot_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<opencv_wb_camera_msgs::srv::TakeSnapshot_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<opencv_wb_camera_msgs::srv::TakeSnapshot_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      opencv_wb_camera_msgs::srv::TakeSnapshot_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<opencv_wb_camera_msgs::srv::TakeSnapshot_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      opencv_wb_camera_msgs::srv::TakeSnapshot_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<opencv_wb_camera_msgs::srv::TakeSnapshot_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<opencv_wb_camera_msgs::srv::TakeSnapshot_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<opencv_wb_camera_msgs::srv::TakeSnapshot_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__opencv_wb_camera_msgs__srv__TakeSnapshot_Response
    std::shared_ptr<opencv_wb_camera_msgs::srv::TakeSnapshot_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__opencv_wb_camera_msgs__srv__TakeSnapshot_Response
    std::shared_ptr<opencv_wb_camera_msgs::srv::TakeSnapshot_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const TakeSnapshot_Response_ & other) const
  {
    if (this->success != other.success) {
      return false;
    }
    if (this->filepath != other.filepath) {
      return false;
    }
    return true;
  }
  bool operator!=(const TakeSnapshot_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct TakeSnapshot_Response_

// alias to use template instance with default allocator
using TakeSnapshot_Response =
  opencv_wb_camera_msgs::srv::TakeSnapshot_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace opencv_wb_camera_msgs

namespace opencv_wb_camera_msgs
{

namespace srv
{

struct TakeSnapshot
{
  using Request = opencv_wb_camera_msgs::srv::TakeSnapshot_Request;
  using Response = opencv_wb_camera_msgs::srv::TakeSnapshot_Response;
};

}  // namespace srv

}  // namespace opencv_wb_camera_msgs

#endif  // OPENCV_WB_CAMERA_MSGS__SRV__DETAIL__TAKE_SNAPSHOT__STRUCT_HPP_
