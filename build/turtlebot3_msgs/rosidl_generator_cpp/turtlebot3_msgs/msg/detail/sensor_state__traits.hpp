// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from turtlebot3_msgs:msg/SensorState.idl
// generated code does not contain a copyright notice

#ifndef TURTLEBOT3_MSGS__MSG__DETAIL__SENSOR_STATE__TRAITS_HPP_
#define TURTLEBOT3_MSGS__MSG__DETAIL__SENSOR_STATE__TRAITS_HPP_

#include "turtlebot3_msgs/msg/detail/sensor_state__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<turtlebot3_msgs::msg::SensorState>()
{
  return "turtlebot3_msgs::msg::SensorState";
}

template<>
inline const char * name<turtlebot3_msgs::msg::SensorState>()
{
  return "turtlebot3_msgs/msg/SensorState";
}

template<>
struct has_fixed_size<turtlebot3_msgs::msg::SensorState>
  : std::integral_constant<bool, has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<turtlebot3_msgs::msg::SensorState>
  : std::integral_constant<bool, has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<turtlebot3_msgs::msg::SensorState>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // TURTLEBOT3_MSGS__MSG__DETAIL__SENSOR_STATE__TRAITS_HPP_
