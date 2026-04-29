cmake_minimum_required(VERSION 3.10.0)
project(Lab6-programming VERSION 0.1.0 LANGUAGES C CXX)


add_executable(counter_app 
    Counter/Counter.h 
    Counter/Counter.cpp 
    Counter/main.cpp
)

add_executable(point_app
    Point/Point.h
    Point/Point.cpp
    Point/main.cpp
)