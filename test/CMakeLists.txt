add_library(test_module src/test_motion_module.cpp)
target_include_directories(test_module PUBLIC include)
target_link_libraries(test_module ${LIB_COMMON} ${LIB_CONTROLLER})

add_executable(test src/test.cpp)
target_link_libraries(test test_module)
install(TARGETS test DESTINATION ${PROJECT_SOURCE_DIR}/bin)