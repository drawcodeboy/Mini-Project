cmake_minimum_required(VERSION 3.22)

project(Toyproject, VERSION 1.0.0 LANGUAGES CXX)

find_package(Qt5 REQUIRED COMPONENTS Core Widgets)

add_executable(Main main.cpp)

target_link_libraries(Main PRIVATE Qt5::Core Qt5::Widgets)