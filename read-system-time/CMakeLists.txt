cmake_minimum_required(VERSION 2.8)
project( cpp-c-tutorial )
set (CMAKE_CXX_STANDARD 11)
include_directories(include)
file(GLOB SOURCES "*.cpp")
add_executable(run_app ${SOURCES} )
target_link_libraries(run_app )



