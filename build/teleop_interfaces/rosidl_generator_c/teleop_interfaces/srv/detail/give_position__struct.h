// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from teleop_interfaces:srv/GivePosition.idl
// generated code does not contain a copyright notice

#ifndef TELEOP_INTERFACES__SRV__DETAIL__GIVE_POSITION__STRUCT_H_
#define TELEOP_INTERFACES__SRV__DETAIL__GIVE_POSITION__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'x'
// Member 'y'
#include "std_msgs/msg/detail/float64__struct.h"

/// Struct defined in srv/GivePosition in the package teleop_interfaces.
typedef struct teleop_interfaces__srv__GivePosition_Request
{
  std_msgs__msg__Float64 x;
  std_msgs__msg__Float64 y;
} teleop_interfaces__srv__GivePosition_Request;

// Struct for a sequence of teleop_interfaces__srv__GivePosition_Request.
typedef struct teleop_interfaces__srv__GivePosition_Request__Sequence
{
  teleop_interfaces__srv__GivePosition_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} teleop_interfaces__srv__GivePosition_Request__Sequence;


// Constants defined in the message

/// Struct defined in srv/GivePosition in the package teleop_interfaces.
typedef struct teleop_interfaces__srv__GivePosition_Response
{
  uint8_t structure_needs_at_least_one_member;
} teleop_interfaces__srv__GivePosition_Response;

// Struct for a sequence of teleop_interfaces__srv__GivePosition_Response.
typedef struct teleop_interfaces__srv__GivePosition_Response__Sequence
{
  teleop_interfaces__srv__GivePosition_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} teleop_interfaces__srv__GivePosition_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TELEOP_INTERFACES__SRV__DETAIL__GIVE_POSITION__STRUCT_H_
