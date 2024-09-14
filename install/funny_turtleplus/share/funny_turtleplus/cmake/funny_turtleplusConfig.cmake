# generated from ament/cmake/core/templates/nameConfig.cmake.in

# prevent multiple inclusion
if(_funny_turtleplus_CONFIG_INCLUDED)
  # ensure to keep the found flag the same
  if(NOT DEFINED funny_turtleplus_FOUND)
    # explicitly set it to FALSE, otherwise CMake will set it to TRUE
    set(funny_turtleplus_FOUND FALSE)
  elseif(NOT funny_turtleplus_FOUND)
    # use separate condition to avoid uninitialized variable warning
    set(funny_turtleplus_FOUND FALSE)
  endif()
  return()
endif()
set(_funny_turtleplus_CONFIG_INCLUDED TRUE)

# output package information
if(NOT funny_turtleplus_FIND_QUIETLY)
  message(STATUS "Found funny_turtleplus: 0.0.0 (${funny_turtleplus_DIR})")
endif()

# warn when using a deprecated package
if(NOT "" STREQUAL "")
  set(_msg "Package 'funny_turtleplus' is deprecated")
  # append custom deprecation text if available
  if(NOT "" STREQUAL "TRUE")
    set(_msg "${_msg} ()")
  endif()
  # optionally quiet the deprecation message
  if(NOT ${funny_turtleplus_DEPRECATED_QUIET})
    message(DEPRECATION "${_msg}")
  endif()
endif()

# flag package as ament-based to distinguish it after being find_package()-ed
set(funny_turtleplus_FOUND_AMENT_PACKAGE TRUE)

# include all config extra files
set(_extras "")
foreach(_extra ${_extras})
  include("${funny_turtleplus_DIR}/${_extra}")
endforeach()
