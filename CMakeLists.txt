cmake_minimum_required(VERSION 3.17)
project(python_memory)

set(CMAKE_CXX_STANDARD 14)

find_package(Python COMPONENTS Development)

configure_file(test.py ${CMAKE_CURRENT_BINARY_DIR}/test.py COPYONLY)

add_executable(
        python_memory
        main.cpp
)

target_link_libraries(
        python_memory
        Python::Python
)