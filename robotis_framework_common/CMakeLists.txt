add_library(${LIB_COMMON} INTERFACE)
target_include_directories(${LIB_COMMON} INTERFACE include/)
target_link_libraries(${LIB_COMMON} INTERFACE ${LIB_DEVICE})