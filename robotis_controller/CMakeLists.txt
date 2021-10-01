find_package(Boost COMPONENTS thread REQUIRED)
find_package(yaml-cpp REQUIRED)

# # Resolve system dependency on yaml-cpp, which apparently does not
# # provide a CMake find_package() module.
# find_package(PkgConfig REQUIRED)
# pkg_check_modules(YAML_CPP REQUIRED yaml-cpp)
# find_path(YAML_CPP_INCLUDE_DIR
#   NAMES yaml_cpp.h
#   PATHS ${YAML_CPP_INCLUDE_DIRS}
# )
# find_library(YAML_CPP_LIBRARY
#   NAMES YAML_CPP
#   PATHS ${YAML_CPP_LIBRARY_DIRS}
# )
# link_directories(${YAML_CPP_LIBRARY_DIRS})

# if(NOT ${YAML_CPP_VERSION} VERSION_LESS "0.5")
# add_definitions(-DHAVE_NEW_YAMLCPP)
# endif(NOT ${YAML_CPP_VERSION} VERSION_LESS "0.5")

add_library(${LIB_CONTROLLER} src/robotis_controller/robotis_controller.cpp)
target_include_directories(${LIB_CONTROLLER} PUBLIC include)
target_link_libraries(${LIB_CONTROLLER}
    Boost::thread
    ${YAML_CPP_LIBRARIES}
    ${LIB_DEVICE}
    ${LIB_COMMON}
    dxl_x64_cpp
)
