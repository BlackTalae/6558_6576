// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from teleop_interfaces:srv/SavePath.idl
// generated code does not contain a copyright notice

#ifndef TELEOP_INTERFACES__SRV__DETAIL__SAVE_PATH__STRUCT_HPP_
#define TELEOP_INTERFACES__SRV__DETAIL__SAVE_PATH__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'request'
#include "std_msgs/msg/detail/empty__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__teleop_interfaces__srv__SavePath_Request __attribute__((deprecated))
#else
# define DEPRECATED__teleop_interfaces__srv__SavePath_Request __declspec(deprecated)
#endif

namespace teleop_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SavePath_Request_
{
  using Type = SavePath_Request_<ContainerAllocator>;

  explicit SavePath_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : request(_init)
  {
    (void)_init;
  }

  explicit SavePath_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : request(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _request_type =
    std_msgs::msg::Empty_<ContainerAllocator>;
  _request_type request;

  // setters for named parameter idiom
  Type & set__request(
    const std_msgs::msg::Empty_<ContainerAllocator> & _arg)
  {
    this->request = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    teleop_interfaces::srv::SavePath_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const teleop_interfaces::srv::SavePath_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<teleop_interfaces::srv::SavePath_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<teleop_interfaces::srv::SavePath_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      teleop_interfaces::srv::SavePath_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<teleop_interfaces::srv::SavePath_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      teleop_interfaces::srv::SavePath_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<teleop_interfaces::srv::SavePath_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<teleop_interfaces::srv::SavePath_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<teleop_interfaces::srv::SavePath_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__teleop_interfaces__srv__SavePath_Request
    std::shared_ptr<teleop_interfaces::srv::SavePath_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__teleop_interfaces__srv__SavePath_Request
    std::shared_ptr<teleop_interfaces::srv::SavePath_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SavePath_Request_ & other) const
  {
    if (this->request != other.request) {
      return false;
    }
    return true;
  }
  bool operator!=(const SavePath_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SavePath_Request_

// alias to use template instance with default allocator
using SavePath_Request =
  teleop_interfaces::srv::SavePath_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace teleop_interfaces


#ifndef _WIN32
# define DEPRECATED__teleop_interfaces__srv__SavePath_Response __attribute__((deprecated))
#else
# define DEPRECATED__teleop_interfaces__srv__SavePath_Response __declspec(deprecated)
#endif

namespace teleop_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SavePath_Response_
{
  using Type = SavePath_Response_<ContainerAllocator>;

  explicit SavePath_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->count = 0ll;
    }
  }

  explicit SavePath_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->count = 0ll;
    }
  }

  // field types and members
  using _count_type =
    int64_t;
  _count_type count;

  // setters for named parameter idiom
  Type & set__count(
    const int64_t & _arg)
  {
    this->count = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    teleop_interfaces::srv::SavePath_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const teleop_interfaces::srv::SavePath_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<teleop_interfaces::srv::SavePath_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<teleop_interfaces::srv::SavePath_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      teleop_interfaces::srv::SavePath_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<teleop_interfaces::srv::SavePath_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      teleop_interfaces::srv::SavePath_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<teleop_interfaces::srv::SavePath_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<teleop_interfaces::srv::SavePath_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<teleop_interfaces::srv::SavePath_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__teleop_interfaces__srv__SavePath_Response
    std::shared_ptr<teleop_interfaces::srv::SavePath_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__teleop_interfaces__srv__SavePath_Response
    std::shared_ptr<teleop_interfaces::srv::SavePath_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SavePath_Response_ & other) const
  {
    if (this->count != other.count) {
      return false;
    }
    return true;
  }
  bool operator!=(const SavePath_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SavePath_Response_

// alias to use template instance with default allocator
using SavePath_Response =
  teleop_interfaces::srv::SavePath_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace teleop_interfaces

namespace teleop_interfaces
{

namespace srv
{

struct SavePath
{
  using Request = teleop_interfaces::srv::SavePath_Request;
  using Response = teleop_interfaces::srv::SavePath_Response;
};

}  // namespace srv

}  // namespace teleop_interfaces

#endif  // TELEOP_INTERFACES__SRV__DETAIL__SAVE_PATH__STRUCT_HPP_
