cmake_minimum_required(VERSION 3.20)
project(login_and_registration_system)

set(CMAKE_CXX_STANDARD 20)

add_executable(login_and_registration_system main.cpp Field.hpp AFieldSystem.hpp Register.hpp Login.hpp AFieldSystem.cpp Field.cpp Login.cpp Register.cpp)
