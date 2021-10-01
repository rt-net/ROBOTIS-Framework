add_library(${LIB_DEVICE}
  src/robotis_device/dynamixel.cpp
  src/robotis_device/robot.cpp
  src/robotis_device/sensor.cpp
)
target_include_directories(${LIB_DEVICE} PUBLIC include/)
target_link_libraries(${LIB_DEVICE} dxl_x64_cpp)

install(DIRECTORY devices DESTINATION ${PROJECT_SOURCE_DIR}/bin)