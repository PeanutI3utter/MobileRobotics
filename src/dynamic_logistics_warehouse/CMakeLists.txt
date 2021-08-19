cmake_minimum_required(VERSION 3.5) 
 
project(dynamic_logistics_warehouse) 
 
# Default to C99 
if(NOT CMAKE_C_STANDARD) 
  set(CMAKE_C_STANDARD 99) 
endif() 
 
# Default to C++14 
if(NOT CMAKE_CXX_STANDARD) 
  set(CMAKE_CXX_STANDARD 14) 
endif() 
 
if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang") 
  add_compile_options(-Wall -Wextra -Wpedantic) 
endif() 
 
# Skip if Gazebo not present 
find_package(gazebo QUIET) 
if(NOT gazebo_FOUND) 
  message(WARNING "Gazebo not found, proceeding without that simulator.") 
  return() 
endif() 
 
# find dependencies 
find_package(ament_cmake REQUIRED) 
 
find_package(gazebo_ros REQUIRED) 
 
install( 
  DIRECTORY 
    launch 
    models 
    rviz 
    worlds 
    maps 
  DESTINATION 
    share/${PROJECT_NAME}/ 
) 
ament_package()
