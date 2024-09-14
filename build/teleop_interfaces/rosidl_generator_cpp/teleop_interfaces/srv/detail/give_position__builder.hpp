// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from teleop_interfaces:srv/GivePosition.idl
// generated code does not contain a copyright notice

#ifndef TELEOP_INTERFACES__SRV__DETAIL__GIVE_POSITION__BUILDER_HPP_
#define TELEOP_INTERFACES__SRV__DETAIL__GIVE_POSITION__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "teleop_interfaces/srv/detail/give_position__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace teleop_interfaces
{

namespace srv
{

namespace builder
{

class Init_GivePosition_Request_y
{
public:
  explicit Init_GivePosition_Request_y(::teleop_interfaces::srv::GivePosition_Request & msg)
  : msg_(msg)
  {}
  ::teleop_interfaces::srv::GivePosition_Request y(::teleop_interfaces::srv::GivePosition_Request::_y_type arg)
  {
    msg_.y = std::move(arg);
    return std::move(msg_);
  }

private:
  ::teleop_interfaces::srv::GivePosition_Request msg_;
};

class Init_GivePosition_Request_x
{
public:
  Init_GivePosition_Request_x()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GivePosition_Request_y x(::teleop_interfaces::srv::GivePosition_Request::_x_type arg)
  {
    msg_.x = std::move(arg);
    return Init_GivePosition_Request_y(msg_);
  }

private:
  ::teleop_interfaces::srv::GivePosition_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::teleop_interfaces::srv::GivePosition_Request>()
{
  return teleop_interfaces::srv::builder::Init_GivePosition_Request_x();
}

}  // namespace teleop_interfaces


namespace teleop_interfaces
{

namespace srv
{


}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::teleop_interfaces::srv::GivePosition_Response>()
{
  return ::teleop_interfaces::srv::GivePosition_Response(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace teleop_interfaces

#endif  // TELEOP_INTERFACES__SRV__DETAIL__GIVE_POSITION__BUILDER_HPP_
