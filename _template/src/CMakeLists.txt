cmake_minimum_required(VERSION 3.23)

project(app)

include_directories(../lib)

add_executable(app main.cpp)

add_dependencies(app utility)
target_link_libraries(app utility)
