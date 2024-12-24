cmake_minimum_required(VERSION 3.10)

project(cs106l_operator_overload)

set(CMAKE_CXX_STANDARD 20)

include_directories(include)

if(VIRTUAL_INHERITANCE)
    add_definitions(-DVIRTUAL_INHERITANCE)
endif()

add_executable(main main.cpp src/StudentID.cpp)
