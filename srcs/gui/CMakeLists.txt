add_library(GUI STATIC mainwindow.cpp)

target_link_libraries(GUI PRIVATE Qt5::Core Qt5::Widgets)

target_include_directories(GUI PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})