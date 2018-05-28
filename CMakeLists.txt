cmake_minimum_required(VERSION 3.9)
project(Transportation)

set(CMAKE_CXX_STANDARD 11)

add_executable(Transportation main.cpp structure/Transport.cpp structure/Transport.h structure/Rout.cpp structure/Rout.h structure/Stop.cpp structure/Stop.h)