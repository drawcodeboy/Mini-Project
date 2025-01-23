cmake_minimum_required(VERSION 3.22)

project(Toyproject, VERSION 1.0.0 LANGUAGES CXX)

find_package(Qt5 REQUIRED COMPONENTS Core Widgets)

add_executable(Encryptor main.cpp)

add_subdirectory(gui)

target_link_libraries(Encryptor PRIVATE Qt5::Core Qt5::Widgets)
target_link_libraries(Encryptor PRIVATE GUI)