cmake_minimum_required(VERSION 3.8.0)

cmake_policy(SET CMP0048 NEW)
project (Show VERSION 0.4.0 LANGUAGES CXX)

add_executable(Show main.cpp)

set_target_properties(Show PROPERTIES
  CXX_STANDARD 14
  CXX_STANDARD_REQUIRED YES
  POSITION_INDEPENDENT_CODE ON
  VERSION ${Show_VERSION})