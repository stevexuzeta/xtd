cmake_minimum_required(VERSION 3.20)

# Project
project(xtdc-gui)
include(../../scripts/cmake/xtd_commands.cmake)
include(../../scripts/cmake/xtd_version.cmake)
add_references(xtd)
add_sources(
  src/main_form.h
  src/main_form.cpp
  src/project_language.h
  src/project_platform.h
  src/project_sdk.h
  src/project_type.h
  src/project_type_item.h
  src/project_type_item_control.h
  src/project_type_item_control.cpp
  src/project_type_items_control.h
  src/xtd_example_item.h
)
target_type(GUI_APPLICATION)

# Install
install_component()
