cmake_minimum_required(VERSION 3.10)

# set the project name and version
project(robotis_framework VERSION 1.0)

# specify the C++ standard
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

set(LIB_COMMON robotis_framework_common)
set(LIB_DEVICE robotis_device)

add_subdirectory(${LIB_DEVICE})
add_subdirectory(${LIB_COMMON})

# ビルド
add_subdirectory(test)
# include_directories(include)
# add_executable(test
#     src/test.cpp
# )
# target_link_libraries(test ${LIB_COMMON})
