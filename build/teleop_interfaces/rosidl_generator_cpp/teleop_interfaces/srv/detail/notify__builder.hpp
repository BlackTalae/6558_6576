// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from teleop_interfaces:srv/Notify.idl
// generated code does not contain a copyright notice

#ifndef TELEOP_INTERFACES__SRV__DETAIL__NOTIFY__BUILDER_HPP_
#define TELEOP_INTERFACES__SRV__DETAIL__NOTIFY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "teleop_interfaces/srv/detail/notify__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace teleop_interfaces
{

namespace srv
{

namespace builder
{

class Init_Notify_Request_trig
{
public:
  Init_Notify_Request_trig()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::teleop_interfaces::srv::Notify_Request trig(::teleop_interfaces::srv::Notify_Request::_trig_type arg)
  {
    msg_.trig = std::move(arg);
    return std::move(msg_);
  }

private:
  ::teleop_interfaces::srv::Notify_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::teleop_interfaces::srv::Notify_Request>()
{
  return teleop_interfaces::srv::builder::Init_Notify_Request_trig();
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
auto build<::teleop_interfaces::srv::Notify_Response>()
{
  return ::teleop_interfaces::srv::Notify_Response(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace teleop_interfaces

#endif  // TELEOP_INTERFACES__SRV__DETAIL__NOTIFY__BUILDER_HPP_
