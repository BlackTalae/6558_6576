// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from teleop_interfaces:srv/ClearPath.idl
// generated code does not contain a copyright notice

#ifndef TELEOP_INTERFACES__SRV__DETAIL__CLEAR_PATH__BUILDER_HPP_
#define TELEOP_INTERFACES__SRV__DETAIL__CLEAR_PATH__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "teleop_interfaces/srv/detail/clear_path__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace teleop_interfaces
{

namespace srv
{

namespace builder
{

class Init_ClearPath_Request_clear
{
public:
  Init_ClearPath_Request_clear()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::teleop_interfaces::srv::ClearPath_Request clear(::teleop_interfaces::srv::ClearPath_Request::_clear_type arg)
  {
    msg_.clear = std::move(arg);
    return std::move(msg_);
  }

private:
  ::teleop_interfaces::srv::ClearPath_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::teleop_interfaces::srv::ClearPath_Request>()
{
  return teleop_interfaces::srv::builder::Init_ClearPath_Request_clear();
}

}  // namespace teleop_interfaces


namespace teleop_interfaces
{

namespace srv
{

namespace builder
{

class Init_ClearPath_Response_ack
{
public:
  Init_ClearPath_Response_ack()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::teleop_interfaces::srv::ClearPath_Response ack(::teleop_interfaces::srv::ClearPath_Response::_ack_type arg)
  {
    msg_.ack = std::move(arg);
    return std::move(msg_);
  }

private:
  ::teleop_interfaces::srv::ClearPath_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::teleop_interfaces::srv::ClearPath_Response>()
{
  return teleop_interfaces::srv::builder::Init_ClearPath_Response_ack();
}

}  // namespace teleop_interfaces

#endif  // TELEOP_INTERFACES__SRV__DETAIL__CLEAR_PATH__BUILDER_HPP_
