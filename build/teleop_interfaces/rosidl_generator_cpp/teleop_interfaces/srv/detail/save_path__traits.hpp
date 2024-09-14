// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from teleop_interfaces:srv/SavePath.idl
// generated code does not contain a copyright notice

#ifndef TELEOP_INTERFACES__SRV__DETAIL__SAVE_PATH__TRAITS_HPP_
#define TELEOP_INTERFACES__SRV__DETAIL__SAVE_PATH__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "teleop_interfaces/srv/detail/save_path__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'request'
#include "std_msgs/msg/detail/empty__traits.hpp"

namespace teleop_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const SavePath_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: request
  {
    out << "request: ";
    to_flow_style_yaml(msg.request, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SavePath_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: request
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "request:\n";
    to_block_style_yaml(msg.request, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SavePath_Request & msg, bool use_flow_style = false)
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
  const teleop_interfaces::srv::SavePath_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  teleop_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use teleop_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const teleop_interfaces::srv::SavePath_Request & msg)
{
  return teleop_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<teleop_interfaces::srv::SavePath_Request>()
{
  return "teleop_interfaces::srv::SavePath_Request";
}

template<>
inline const char * name<teleop_interfaces::srv::SavePath_Request>()
{
  return "teleop_interfaces/srv/SavePath_Request";
}

template<>
struct has_fixed_size<teleop_interfaces::srv::SavePath_Request>
  : std::integral_constant<bool, has_fixed_size<std_msgs::msg::Empty>::value> {};

template<>
struct has_bounded_size<teleop_interfaces::srv::SavePath_Request>
  : std::integral_constant<bool, has_bounded_size<std_msgs::msg::Empty>::value> {};

template<>
struct is_message<teleop_interfaces::srv::SavePath_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace teleop_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const SavePath_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: count
  {
    out << "count: ";
    rosidl_generator_traits::value_to_yaml(msg.count, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SavePath_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: count
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "count: ";
    rosidl_generator_traits::value_to_yaml(msg.count, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SavePath_Response & msg, bool use_flow_style = false)
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
  const teleop_interfaces::srv::SavePath_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  teleop_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use teleop_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const teleop_interfaces::srv::SavePath_Response & msg)
{
  return teleop_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<teleop_interfaces::srv::SavePath_Response>()
{
  return "teleop_interfaces::srv::SavePath_Response";
}

template<>
inline const char * name<teleop_interfaces::srv::SavePath_Response>()
{
  return "teleop_interfaces/srv/SavePath_Response";
}

template<>
struct has_fixed_size<teleop_interfaces::srv::SavePath_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<teleop_interfaces::srv::SavePath_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<teleop_interfaces::srv::SavePath_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<teleop_interfaces::srv::SavePath>()
{
  return "teleop_interfaces::srv::SavePath";
}

template<>
inline const char * name<teleop_interfaces::srv::SavePath>()
{
  return "teleop_interfaces/srv/SavePath";
}

template<>
struct has_fixed_size<teleop_interfaces::srv::SavePath>
  : std::integral_constant<
    bool,
    has_fixed_size<teleop_interfaces::srv::SavePath_Request>::value &&
    has_fixed_size<teleop_interfaces::srv::SavePath_Response>::value
  >
{
};

template<>
struct has_bounded_size<teleop_interfaces::srv::SavePath>
  : std::integral_constant<
    bool,
    has_bounded_size<teleop_interfaces::srv::SavePath_Request>::value &&
    has_bounded_size<teleop_interfaces::srv::SavePath_Response>::value
  >
{
};

template<>
struct is_service<teleop_interfaces::srv::SavePath>
  : std::true_type
{
};

template<>
struct is_service_request<teleop_interfaces::srv::SavePath_Request>
  : std::true_type
{
};

template<>
struct is_service_response<teleop_interfaces::srv::SavePath_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // TELEOP_INTERFACES__SRV__DETAIL__SAVE_PATH__TRAITS_HPP_
