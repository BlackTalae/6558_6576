// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from teleop_interfaces:srv/Notify.idl
// generated code does not contain a copyright notice

#ifndef TELEOP_INTERFACES__SRV__DETAIL__NOTIFY__STRUCT_H_
#define TELEOP_INTERFACES__SRV__DETAIL__NOTIFY__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/Notify in the package teleop_interfaces.
typedef struct teleop_interfaces__srv__Notify_Request
{
  bool trig;
} teleop_interfaces__srv__Notify_Request;

// Struct for a sequence of teleop_interfaces__srv__Notify_Request.
typedef struct teleop_interfaces__srv__Notify_Request__Sequence
{
  teleop_interfaces__srv__Notify_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} teleop_interfaces__srv__Notify_Request__Sequence;


// Constants defined in the message

/// Struct defined in srv/Notify in the package teleop_interfaces.
typedef struct teleop_interfaces__srv__Notify_Response
{
  uint8_t structure_needs_at_least_one_member;
} teleop_interfaces__srv__Notify_Response;

// Struct for a sequence of teleop_interfaces__srv__Notify_Response.
typedef struct teleop_interfaces__srv__Notify_Response__Sequence
{
  teleop_interfaces__srv__Notify_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} teleop_interfaces__srv__Notify_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TELEOP_INTERFACES__SRV__DETAIL__NOTIFY__STRUCT_H_
