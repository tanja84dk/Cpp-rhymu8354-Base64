# CMakeLists.txt for Base64Tests
#
# © 2018 by Richard Walters

cmake_minimum_required(VERSION 3.8)
set(This Base64Tests)

set(Sources
    src/Base32Tests.cpp
    src/Base64Tests.cpp
)

add_executable(${This} ${Sources})
set_target_properties(${This} PROPERTIES
    FOLDER Tests
)

target_include_directories(${This} PRIVATE ..)

target_link_libraries(${This} PUBLIC
    gtest_main
    Base64
)

add_test(
    NAME ${This}
    COMMAND ${This}
)
