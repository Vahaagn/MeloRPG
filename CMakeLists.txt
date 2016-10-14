cmake_minimum_required(VERSION 2.8.4)
project(MeloRPG)


set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++14")
set(SOURCE_FILES main.cpp)
add_executable(MeloRPG ${SOURCE_FILES})

include_directories(MeloRPG_core)

add_subdirectory(MeloRPG_core)
add_subdirectory(MeloRPG_tests)

target_link_libraries(MeloRPG MeloRPG_core)
