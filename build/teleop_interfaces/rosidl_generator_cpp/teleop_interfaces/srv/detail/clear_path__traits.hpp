// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from teleop_interfaces:srv/ClearPath.idl
// generated code does not contain a copyright notice

#ifndef TELEOP_INTERFACES__SRV__DETAIL__CLEAR_PATH__TRAITS_HPP_
#define TELEOP_INTERFACES__SRV__DETAIL__CLEAR_PATH__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "teleop_interfaces/srv/detail/clear_path__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'clear'
#include "std_msgs/msg/detail/empty__traits.hpp"

namespace teleop_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const ClearPath_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: clear
  {
    out << "clear: ";
    to_flow_style_yaml(msg.clear, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ClearPath_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: clear
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "clear:\n";
    to_block_style_yaml(msg.clear, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ClearPath_Request & msg, bool use_flow_style = false)
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
  const teleop_interfaces::srv::ClearPath_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  teleop_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use teleop_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const teleop_interfaces::srv::ClearPath_Request & msg)
{
  return teleop_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<teleop_interfaces::srv::ClearPath_Request>()
{
  return "teleop_interfaces::srv::ClearPath_Request";
}

template<>
inline const char * name<teleop_interfaces::srv::ClearPath_Request>()
{
  return "teleop_interfaces/srv/ClearPath_Request";
}

template<>
struct has_fixed_size<teleop_interfaces::srv::ClearPath_Request>
  : std::integral_constant<bool, has_fixed_size<std_msgs::msg::Empty>::value> {};

template<>
struct has_bounded_size<teleop_interfaces::srv::ClearPath_Request>
  : std::integral_constant<bool, has_bounded_size<std_msgs::msg::Empty>::value> {};

template<>
struct is_message<teleop_interfaces::srv::ClearPath_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace teleop_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const ClearPath_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: ack
  {
    out << "ack: ";
    rosidl_generator_traits::value_to_yaml(msg.ack, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ClearPath_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: ack
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ack: ";
    rosidl_generator_traits::value_to_yaml(msg.ack, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ClearPath_Response & msg, bool use_flow_style = false)
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
  const teleop_interfaces::srv::ClearPath_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  teleop_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use teleop_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const teleop_interfaces::srv::ClearPath_Response & msg)
{
  return teleop_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<teleop_interfaces::srv::ClearPath_Response>()
{
  return "teleop_interfaces::srv::ClearPath_Response";
}

template<>
inline const char * name<teleop_interfaces::srv::ClearPath_Response>()
{
  return "teleop_interfaces/srv/ClearPath_Response";
}

template<>
struct has_fixed_size<teleop_interfaces::srv::ClearPath_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<teleop_interfaces::srv::ClearPath_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<teleop_interfaces::srv::ClearPath_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<teleop_interfaces::srv::ClearPath>()
{
  return "teleop_interfaces::srv::ClearPath";
}

template<>
inline const char * name<teleop_interfaces::srv::ClearPath>()
{
  return "teleop_interfaces/srv/ClearPath";
}

template<>
struct has_fixed_size<teleop_interfaces::srv::ClearPath>
  : std::integral_constant<
    bool,
    has_fixed_size<teleop_interfaces::srv::ClearPath_Request>::value &&
    has_fixed_size<teleop_interfaces::srv::ClearPath_Response>::value
  >
{
};

template<>
struct has_bounded_size<teleop_interfaces::srv::ClearPath>
  : std::integral_constant<
    bool,
    has_bounded_size<teleop_interfaces::srv::ClearPath_Request>::value &&
    has_bounded_size<teleop_interfaces::srv::ClearPath_Response>::value
  >
{
};

template<>
struct is_service<teleop_interfaces::srv::ClearPath>
  : std::true_type
{
};

template<>
struct is_service_request<teleop_interfaces::srv::ClearPath_Request>
  : std::true_type
{
};

template<>
struct is_service_response<teleop_interfaces::srv::ClearPath_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // TELEOP_INTERFACES__SRV__DETAIL__CLEAR_PATH__TRAITS_HPP_
