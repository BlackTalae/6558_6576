// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from teleop_interfaces:srv/MakePath.idl
// generated code does not contain a copyright notice

#ifndef TELEOP_INTERFACES__SRV__DETAIL__MAKE_PATH__FUNCTIONS_H_
#define TELEOP_INTERFACES__SRV__DETAIL__MAKE_PATH__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "teleop_interfaces/msg/rosidl_generator_c__visibility_control.h"

#include "teleop_interfaces/srv/detail/make_path__struct.h"

/// Initialize srv/MakePath message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * teleop_interfaces__srv__MakePath_Request
 * )) before or use
 * teleop_interfaces__srv__MakePath_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_teleop_interfaces
bool
teleop_interfaces__srv__MakePath_Request__init(teleop_interfaces__srv__MakePath_Request * msg);

/// Finalize srv/MakePath message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_teleop_interfaces
void
teleop_interfaces__srv__MakePath_Request__fini(teleop_interfaces__srv__MakePath_Request * msg);

/// Create srv/MakePath message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * teleop_interfaces__srv__MakePath_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_teleop_interfaces
teleop_interfaces__srv__MakePath_Request *
teleop_interfaces__srv__MakePath_Request__create();

/// Destroy srv/MakePath message.
/**
 * It calls
 * teleop_interfaces__srv__MakePath_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_teleop_interfaces
void
teleop_interfaces__srv__MakePath_Request__destroy(teleop_interfaces__srv__MakePath_Request * msg);

/// Check for srv/MakePath message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_teleop_interfaces
bool
teleop_interfaces__srv__MakePath_Request__are_equal(const teleop_interfaces__srv__MakePath_Request * lhs, const teleop_interfaces__srv__MakePath_Request * rhs);

/// Copy a srv/MakePath message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_teleop_interfaces
bool
teleop_interfaces__srv__MakePath_Request__copy(
  const teleop_interfaces__srv__MakePath_Request * input,
  teleop_interfaces__srv__MakePath_Request * output);

/// Initialize array of srv/MakePath messages.
/**
 * It allocates the memory for the number of elements and calls
 * teleop_interfaces__srv__MakePath_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_teleop_interfaces
bool
teleop_interfaces__srv__MakePath_Request__Sequence__init(teleop_interfaces__srv__MakePath_Request__Sequence * array, size_t size);

/// Finalize array of srv/MakePath messages.
/**
 * It calls
 * teleop_interfaces__srv__MakePath_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_teleop_interfaces
void
teleop_interfaces__srv__MakePath_Request__Sequence__fini(teleop_interfaces__srv__MakePath_Request__Sequence * array);

/// Create array of srv/MakePath messages.
/**
 * It allocates the memory for the array and calls
 * teleop_interfaces__srv__MakePath_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_teleop_interfaces
teleop_interfaces__srv__MakePath_Request__Sequence *
teleop_interfaces__srv__MakePath_Request__Sequence__create(size_t size);

/// Destroy array of srv/MakePath messages.
/**
 * It calls
 * teleop_interfaces__srv__MakePath_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_teleop_interfaces
void
teleop_interfaces__srv__MakePath_Request__Sequence__destroy(teleop_interfaces__srv__MakePath_Request__Sequence * array);

/// Check for srv/MakePath message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_teleop_interfaces
bool
teleop_interfaces__srv__MakePath_Request__Sequence__are_equal(const teleop_interfaces__srv__MakePath_Request__Sequence * lhs, const teleop_interfaces__srv__MakePath_Request__Sequence * rhs);

/// Copy an array of srv/MakePath messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_teleop_interfaces
bool
teleop_interfaces__srv__MakePath_Request__Sequence__copy(
  const teleop_interfaces__srv__MakePath_Request__Sequence * input,
  teleop_interfaces__srv__MakePath_Request__Sequence * output);

/// Initialize srv/MakePath message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * teleop_interfaces__srv__MakePath_Response
 * )) before or use
 * teleop_interfaces__srv__MakePath_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_teleop_interfaces
bool
teleop_interfaces__srv__MakePath_Response__init(teleop_interfaces__srv__MakePath_Response * msg);

/// Finalize srv/MakePath message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_teleop_interfaces
void
teleop_interfaces__srv__MakePath_Response__fini(teleop_interfaces__srv__MakePath_Response * msg);

/// Create srv/MakePath message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * teleop_interfaces__srv__MakePath_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_teleop_interfaces
teleop_interfaces__srv__MakePath_Response *
teleop_interfaces__srv__MakePath_Response__create();

/// Destroy srv/MakePath message.
/**
 * It calls
 * teleop_interfaces__srv__MakePath_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_teleop_interfaces
void
teleop_interfaces__srv__MakePath_Response__destroy(teleop_interfaces__srv__MakePath_Response * msg);

/// Check for srv/MakePath message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_teleop_interfaces
bool
teleop_interfaces__srv__MakePath_Response__are_equal(const teleop_interfaces__srv__MakePath_Response * lhs, const teleop_interfaces__srv__MakePath_Response * rhs);

/// Copy a srv/MakePath message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_teleop_interfaces
bool
teleop_interfaces__srv__MakePath_Response__copy(
  const teleop_interfaces__srv__MakePath_Response * input,
  teleop_interfaces__srv__MakePath_Response * output);

/// Initialize array of srv/MakePath messages.
/**
 * It allocates the memory for the number of elements and calls
 * teleop_interfaces__srv__MakePath_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_teleop_interfaces
bool
teleop_interfaces__srv__MakePath_Response__Sequence__init(teleop_interfaces__srv__MakePath_Response__Sequence * array, size_t size);

/// Finalize array of srv/MakePath messages.
/**
 * It calls
 * teleop_interfaces__srv__MakePath_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_teleop_interfaces
void
teleop_interfaces__srv__MakePath_Response__Sequence__fini(teleop_interfaces__srv__MakePath_Response__Sequence * array);

/// Create array of srv/MakePath messages.
/**
 * It allocates the memory for the array and calls
 * teleop_interfaces__srv__MakePath_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_teleop_interfaces
teleop_interfaces__srv__MakePath_Response__Sequence *
teleop_interfaces__srv__MakePath_Response__Sequence__create(size_t size);

/// Destroy array of srv/MakePath messages.
/**
 * It calls
 * teleop_interfaces__srv__MakePath_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_teleop_interfaces
void
teleop_interfaces__srv__MakePath_Response__Sequence__destroy(teleop_interfaces__srv__MakePath_Response__Sequence * array);

/// Check for srv/MakePath message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_teleop_interfaces
bool
teleop_interfaces__srv__MakePath_Response__Sequence__are_equal(const teleop_interfaces__srv__MakePath_Response__Sequence * lhs, const teleop_interfaces__srv__MakePath_Response__Sequence * rhs);

/// Copy an array of srv/MakePath messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_teleop_interfaces
bool
teleop_interfaces__srv__MakePath_Response__Sequence__copy(
  const teleop_interfaces__srv__MakePath_Response__Sequence * input,
  teleop_interfaces__srv__MakePath_Response__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // TELEOP_INTERFACES__SRV__DETAIL__MAKE_PATH__FUNCTIONS_H_
