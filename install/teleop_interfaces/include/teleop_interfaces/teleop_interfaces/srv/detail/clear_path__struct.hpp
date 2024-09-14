// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from teleop_interfaces:srv/ClearPath.idl
// generated code does not contain a copyright notice

#ifndef TELEOP_INTERFACES__SRV__DETAIL__CLEAR_PATH__STRUCT_HPP_
#define TELEOP_INTERFACES__SRV__DETAIL__CLEAR_PATH__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'clear'
#include "std_msgs/msg/detail/empty__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__teleop_interfaces__srv__ClearPath_Request __attribute__((deprecated))
#else
# define DEPRECATED__teleop_interfaces__srv__ClearPath_Request __declspec(deprecated)
#endif

namespace teleop_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct ClearPath_Request_
{
  using Type = ClearPath_Request_<ContainerAllocator>;

  explicit ClearPath_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : clear(_init)
  {
    (void)_init;
  }

  explicit ClearPath_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : clear(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _clear_type =
    std_msgs::msg::Empty_<ContainerAllocator>;
  _clear_type clear;

  // setters for named parameter idiom
  Type & set__clear(
    const std_msgs::msg::Empty_<ContainerAllocator> & _arg)
  {
    this->clear = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    teleop_interfaces::srv::ClearPath_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const teleop_interfaces::srv::ClearPath_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<teleop_interfaces::srv::ClearPath_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<teleop_interfaces::srv::ClearPath_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      teleop_interfaces::srv::ClearPath_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<teleop_interfaces::srv::ClearPath_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      teleop_interfaces::srv::ClearPath_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<teleop_interfaces::srv::ClearPath_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<teleop_interfaces::srv::ClearPath_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<teleop_interfaces::srv::ClearPath_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__teleop_interfaces__srv__ClearPath_Request
    std::shared_ptr<teleop_interfaces::srv::ClearPath_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__teleop_interfaces__srv__ClearPath_Request
    std::shared_ptr<teleop_interfaces::srv::ClearPath_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ClearPath_Request_ & other) const
  {
    if (this->clear != other.clear) {
      return false;
    }
    return true;
  }
  bool operator!=(const ClearPath_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ClearPath_Request_

// alias to use template instance with default allocator
using ClearPath_Request =
  teleop_interfaces::srv::ClearPath_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace teleop_interfaces


#ifndef _WIN32
# define DEPRECATED__teleop_interfaces__srv__ClearPath_Response __attribute__((deprecated))
#else
# define DEPRECATED__teleop_interfaces__srv__ClearPath_Response __declspec(deprecated)
#endif

namespace teleop_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct ClearPath_Response_
{
  using Type = ClearPath_Response_<ContainerAllocator>;

  explicit ClearPath_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->ack = false;
    }
  }

  explicit ClearPath_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->ack = false;
    }
  }

  // field types and members
  using _ack_type =
    bool;
  _ack_type ack;

  // setters for named parameter idiom
  Type & set__ack(
    const bool & _arg)
  {
    this->ack = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    teleop_interfaces::srv::ClearPath_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const teleop_interfaces::srv::ClearPath_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<teleop_interfaces::srv::ClearPath_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<teleop_interfaces::srv::ClearPath_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      teleop_interfaces::srv::ClearPath_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<teleop_interfaces::srv::ClearPath_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      teleop_interfaces::srv::ClearPath_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<teleop_interfaces::srv::ClearPath_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<teleop_interfaces::srv::ClearPath_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<teleop_interfaces::srv::ClearPath_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__teleop_interfaces__srv__ClearPath_Response
    std::shared_ptr<teleop_interfaces::srv::ClearPath_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__teleop_interfaces__srv__ClearPath_Response
    std::shared_ptr<teleop_interfaces::srv::ClearPath_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ClearPath_Response_ & other) const
  {
    if (this->ack != other.ack) {
      return false;
    }
    return true;
  }
  bool operator!=(const ClearPath_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ClearPath_Response_

// alias to use template instance with default allocator
using ClearPath_Response =
  teleop_interfaces::srv::ClearPath_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace teleop_interfaces

namespace teleop_interfaces
{

namespace srv
{

struct ClearPath
{
  using Request = teleop_interfaces::srv::ClearPath_Request;
  using Response = teleop_interfaces::srv::ClearPath_Response;
};

}  // namespace srv

}  // namespace teleop_interfaces

#endif  // TELEOP_INTERFACES__SRV__DETAIL__CLEAR_PATH__STRUCT_HPP_
