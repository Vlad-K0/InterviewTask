cmake_minimum_required(VERSION 3.28)
project(InterviewTask)

set(CMAKE_CXX_STANDARD 11)

add_executable(InterviewTask main.cpp
        Calculate.cpp
        Calculate.h
        Tools.cpp
        Tools.h)
