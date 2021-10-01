cmake_minimum_required(VERSION 3.10)

# set the project name and version
project(robotis_framework VERSION 1.0)

# specify the C++ standard
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

set(LIB_COMMON robotis_framework_common)
set(LIB_DEVICE robotis_device)
set(LIB_CONTROLLER robotis_controller)

add_subdirectory(${LIB_DEVICE})
add_subdirectory(${LIB_COMMON})
add_subdirectory(${LIB_CONTROLLER})

add_subdirectory(test)
