cmake_minimum_required(VERSION 3.9)
project(Transportation)

set(CMAKE_CXX_STANDARD 11)

add_executable(Transportation structure/base/Transport.cpp structure/base/Transport.h structure/base/Route.cpp structure/base/Route.h structure/base/Stop.cpp structure/base/Stop.h structure/air/Flyable.h implementation/air/Plane.cpp implementation/air/Plane.h structure/air/AirTransport.cpp structure/air/AirTransport.h Launcher.cpp structure/base/Operator.cpp structure/base/Operator.h implementation/land/Automobile.cpp implementation/land/Automobile.h structure/land/LandTransport.cpp structure/land/LandTransport.h structure/land/Drivable.h implementation/hybrid/FlyingCar.cpp implementation/hybrid/FlyingCar.h)