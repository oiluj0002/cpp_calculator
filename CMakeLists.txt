cmake_minimum_required(VERSION 3.10.0)
project(calculator VERSION 0.1.0 LANGUAGES C CXX)

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED True)
add_compile_options(
    -g 
    -ggdb 
    -pedantic-errors 
    -Wall 
    -Weffc++ 
    -Wextra 
    -Wconversion 
    -Wsign-conversion 
    -Werror
)

add_executable(calculator
    main.cpp
    modules/input.cpp
    modules/math.cpp
)

target_include_directories(calculator PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/includes)
