cmake_minimum_required(VERSION 3.20)

project(font)
find_package(xtd REQUIRED)
add_references(xtd.drawing)
add_sources(README.md src/font.cpp)
target_type(CONSOLE_APPLICATION)
