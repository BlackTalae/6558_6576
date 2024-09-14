// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from teleop_interfaces:srv/GivePosition.idl
// generated code does not contain a copyright notice

#ifndef TELEOP_INTERFACES__SRV__DETAIL__GIVE_POSITION__TRAITS_HPP_
#define TELEOP_INTERFACES__SRV__DETAIL__GIVE_POSITION__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "teleop_interfaces/srv/detail/give_position__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'x'
// Member 'y'
#include "std_msgs/msg/detail/float64__traits.hpp"

namespace teleop_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const GivePosition_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: x
  {
    out << "x: ";
    to_flow_style_yaml(msg.x, out);
    out << ", ";
  }

  // member: y
  {
    out << "y: ";
    to_flow_style_yaml(msg.y, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GivePosition_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "x:\n";
    to_block_style_yaml(msg.x, out, indentation + 2);
  }

  // member: y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "y:\n";
    to_block_style_yaml(msg.y, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GivePosition_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace teleop_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use teleop_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const teleop_interfaces::srv::GivePosition_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  teleop_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use teleop_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const teleop_interfaces::srv::GivePosition_Request & msg)
{
  return teleop_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<teleop_interfaces::srv::GivePosition_Request>()
{
  return "teleop_interfaces::srv::GivePosition_Request";
}

template<>
inline const char * name<teleop_interfaces::srv::GivePosition_Request>()
{
  return "teleop_interfaces/srv/GivePosition_Request";
}

template<>
struct has_fixed_size<teleop_interfaces::srv::GivePosition_Request>
  : std::integral_constant<bool, has_fixed_size<std_msgs::msg::Float64>::value> {};

template<>
struct has_bounded_size<teleop_interfaces::srv::GivePosition_Request>
  : std::integral_constant<bool, has_bounded_size<std_msgs::msg::Float64>::value> {};

template<>
struct is_message<teleop_interfaces::srv::GivePosition_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace teleop_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const GivePosition_Response & msg,
  std::ostream & out)
{
  (void)msg;
  out << "null";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GivePosition_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  (void)msg;
  (void)indentation;
  out << "null\n";
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GivePosition_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace teleop_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use teleop_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const teleop_interfaces::srv::GivePosition_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  teleop_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use teleop_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const teleop_interfaces::srv::GivePosition_Response & msg)
{
  return teleop_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<teleop_interfaces::srv::GivePosition_Response>()
{
  return "teleop_interfaces::srv::GivePosition_Response";
}

template<>
inline const char * name<teleop_interfaces::srv::GivePosition_Response>()
{
  return "teleop_interfaces/srv/GivePosition_Response";
}

template<>
struct has_fixed_size<teleop_interfaces::srv::GivePosition_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<teleop_interfaces::srv::GivePosition_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<teleop_interfaces::srv::GivePosition_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<teleop_interfaces::srv::GivePosition>()
{
  return "teleop_interfaces::srv::GivePosition";
}

template<>
inline const char * name<teleop_interfaces::srv::GivePosition>()
{
  return "teleop_interfaces/srv/GivePosition";
}

template<>
struct has_fixed_size<teleop_interfaces::srv::GivePosition>
  : std::integral_constant<
    bool,
    has_fixed_size<teleop_interfaces::srv::GivePosition_Request>::value &&
    has_fixed_size<teleop_interfaces::srv::GivePosition_Response>::value
  >
{
};

template<>
struct has_bounded_size<teleop_interfaces::srv::GivePosition>
  : std::integral_constant<
    bool,
    has_bounded_size<teleop_interfaces::srv::GivePosition_Request>::value &&
    has_bounded_size<teleop_interfaces::srv::GivePosition_Response>::value
  >
{
};

template<>
struct is_service<teleop_interfaces::srv::GivePosition>
  : std::true_type
{
};

template<>
struct is_service_request<teleop_interfaces::srv::GivePosition_Request>
  : std::true_type
{
};

template<>
struct is_service_response<teleop_interfaces::srv::GivePosition_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // TELEOP_INTERFACES__SRV__DETAIL__GIVE_POSITION__TRAITS_HPP_
