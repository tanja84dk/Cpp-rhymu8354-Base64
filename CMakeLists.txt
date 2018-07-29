# CMakeLists.txt for Base64
#
# © 2018 by Richard Walters

cmake_minimum_required(VERSION 3.8)
set(This Base64)

set(Headers
    include/Base64/Base64.hpp
)

set(Sources
    src/Base64.cpp
)

add_library(${This} STATIC ${Sources} ${Headers})
set_target_properties(${This} PROPERTIES
    FOLDER Libraries
)

target_include_directories(${This} PUBLIC include)

add_subdirectory(test)
