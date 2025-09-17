cmake_minimum_required(VERSION 3.10)
project(University_Management_System)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

include_directories(include)

set(SOURCES
    src/person.cpp
    src/student.cpp
    src/course.cpp
    src/main.cpp
)

add_executable(ums ${SOURCES})
