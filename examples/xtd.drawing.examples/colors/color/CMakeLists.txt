cmake_minimum_required(VERSION 3.20)

project(color)
find_package(xtd REQUIRED)
add_references(xtd.drawing)
add_sources(README.md src/color.cpp)
target_type(CONSOLE_APPLICATION)
