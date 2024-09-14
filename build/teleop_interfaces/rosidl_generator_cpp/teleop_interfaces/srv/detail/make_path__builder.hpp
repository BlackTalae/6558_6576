// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from teleop_interfaces:srv/MakePath.idl
// generated code does not contain a copyright notice

#ifndef TELEOP_INTERFACES__SRV__DETAIL__MAKE_PATH__BUILDER_HPP_
#define TELEOP_INTERFACES__SRV__DETAIL__MAKE_PATH__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "teleop_interfaces/srv/detail/make_path__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace teleop_interfaces
{

namespace srv
{

namespace builder
{

class Init_MakePath_Request_request
{
public:
  Init_MakePath_Request_request()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::teleop_interfaces::srv::MakePath_Request request(::teleop_interfaces::srv::MakePath_Request::_request_type arg)
  {
    msg_.request = std::move(arg);
    return std::move(msg_);
  }

private:
  ::teleop_interfaces::srv::MakePath_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::teleop_interfaces::srv::MakePath_Request>()
{
  return teleop_interfaces::srv::builder::Init_MakePath_Request_request();
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
auto build<::teleop_interfaces::srv::MakePath_Response>()
{
  return ::teleop_interfaces::srv::MakePath_Response(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace teleop_interfaces

#endif  // TELEOP_INTERFACES__SRV__DETAIL__MAKE_PATH__BUILDER_HPP_
