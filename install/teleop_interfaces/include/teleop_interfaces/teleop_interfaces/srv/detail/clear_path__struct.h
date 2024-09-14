// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from teleop_interfaces:srv/ClearPath.idl
// generated code does not contain a copyright notice

#ifndef TELEOP_INTERFACES__SRV__DETAIL__CLEAR_PATH__STRUCT_H_
#define TELEOP_INTERFACES__SRV__DETAIL__CLEAR_PATH__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'clear'
#include "std_msgs/msg/detail/empty__struct.h"

/// Struct defined in srv/ClearPath in the package teleop_interfaces.
typedef struct teleop_interfaces__srv__ClearPath_Request
{
  std_msgs__msg__Empty clear;
} teleop_interfaces__srv__ClearPath_Request;

// Struct for a sequence of teleop_interfaces__srv__ClearPath_Request.
typedef struct teleop_interfaces__srv__ClearPath_Request__Sequence
{
  teleop_interfaces__srv__ClearPath_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} teleop_interfaces__srv__ClearPath_Request__Sequence;


// Constants defined in the message

/// Struct defined in srv/ClearPath in the package teleop_interfaces.
typedef struct teleop_interfaces__srv__ClearPath_Response
{
  bool ack;
} teleop_interfaces__srv__ClearPath_Response;

// Struct for a sequence of teleop_interfaces__srv__ClearPath_Response.
typedef struct teleop_interfaces__srv__ClearPath_Response__Sequence
{
  teleop_interfaces__srv__ClearPath_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} teleop_interfaces__srv__ClearPath_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TELEOP_INTERFACES__SRV__DETAIL__CLEAR_PATH__STRUCT_H_
