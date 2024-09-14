// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from teleop_interfaces:srv/GivePosition.idl
// generated code does not contain a copyright notice

#ifndef TELEOP_INTERFACES__SRV__DETAIL__GIVE_POSITION__STRUCT_HPP_
#define TELEOP_INTERFACES__SRV__DETAIL__GIVE_POSITION__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'x'
// Member 'y'
#include "std_msgs/msg/detail/float64__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__teleop_interfaces__srv__GivePosition_Request __attribute__((deprecated))
#else
# define DEPRECATED__teleop_interfaces__srv__GivePosition_Request __declspec(deprecated)
#endif

namespace teleop_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct GivePosition_Request_
{
  using Type = GivePosition_Request_<ContainerAllocator>;

  explicit GivePosition_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : x(_init),
    y(_init)
  {
    (void)_init;
  }

  explicit GivePosition_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : x(_alloc, _init),
    y(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _x_type =
    std_msgs::msg::Float64_<ContainerAllocator>;
  _x_type x;
  using _y_type =
    std_msgs::msg::Float64_<ContainerAllocator>;
  _y_type y;

  // setters for named parameter idiom
  Type & set__x(
    const std_msgs::msg::Float64_<ContainerAllocator> & _arg)
  {
    this->x = _arg;
    return *this;
  }
  Type & set__y(
    const std_msgs::msg::Float64_<ContainerAllocator> & _arg)
  {
    this->y = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    teleop_interfaces::srv::GivePosition_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const teleop_interfaces::srv::GivePosition_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<teleop_interfaces::srv::GivePosition_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<teleop_interfaces::srv::GivePosition_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      teleop_interfaces::srv::GivePosition_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<teleop_interfaces::srv::GivePosition_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      teleop_interfaces::srv::GivePosition_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<teleop_interfaces::srv::GivePosition_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<teleop_interfaces::srv::GivePosition_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<teleop_interfaces::srv::GivePosition_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__teleop_interfaces__srv__GivePosition_Request
    std::shared_ptr<teleop_interfaces::srv::GivePosition_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__teleop_interfaces__srv__GivePosition_Request
    std::shared_ptr<teleop_interfaces::srv::GivePosition_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GivePosition_Request_ & other) const
  {
    if (this->x != other.x) {
      return false;
    }
    if (this->y != other.y) {
      return false;
    }
    return true;
  }
  bool operator!=(const GivePosition_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GivePosition_Request_

// alias to use template instance with default allocator
using GivePosition_Request =
  teleop_interfaces::srv::GivePosition_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace teleop_interfaces


#ifndef _WIN32
# define DEPRECATED__teleop_interfaces__srv__GivePosition_Response __attribute__((deprecated))
#else
# define DEPRECATED__teleop_interfaces__srv__GivePosition_Response __declspec(deprecated)
#endif

namespace teleop_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct GivePosition_Response_
{
  using Type = GivePosition_Response_<ContainerAllocator>;

  explicit GivePosition_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->structure_needs_at_least_one_member = 0;
    }
  }

  explicit GivePosition_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
    teleop_interfaces::srv::GivePosition_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const teleop_interfaces::srv::GivePosition_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<teleop_interfaces::srv::GivePosition_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<teleop_interfaces::srv::GivePosition_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      teleop_interfaces::srv::GivePosition_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<teleop_interfaces::srv::GivePosition_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      teleop_interfaces::srv::GivePosition_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<teleop_interfaces::srv::GivePosition_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<teleop_interfaces::srv::GivePosition_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<teleop_interfaces::srv::GivePosition_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__teleop_interfaces__srv__GivePosition_Response
    std::shared_ptr<teleop_interfaces::srv::GivePosition_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__teleop_interfaces__srv__GivePosition_Response
    std::shared_ptr<teleop_interfaces::srv::GivePosition_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GivePosition_Response_ & other) const
  {
    if (this->structure_needs_at_least_one_member != other.structure_needs_at_least_one_member) {
      return false;
    }
    return true;
  }
  bool operator!=(const GivePosition_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GivePosition_Response_

// alias to use template instance with default allocator
using GivePosition_Response =
  teleop_interfaces::srv::GivePosition_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace teleop_interfaces

namespace teleop_interfaces
{

namespace srv
{

struct GivePosition
{
  using Request = teleop_interfaces::srv::GivePosition_Request;
  using Response = teleop_interfaces::srv::GivePosition_Response;
};

}  // namespace srv

}  // namespace teleop_interfaces

#endif  // TELEOP_INTERFACES__SRV__DETAIL__GIVE_POSITION__STRUCT_HPP_
