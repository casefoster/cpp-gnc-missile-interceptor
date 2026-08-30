cmake_minimum_required(VERSION 3.16)

project(GNCMissileInterceptor)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(
    gnc_simulator
    src/main.cpp
)