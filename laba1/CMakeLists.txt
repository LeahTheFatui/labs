cmake_minimum_required(VERSION 3.10)
project(nod)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(Lab1_main
    src/ccalc.cpp
    main.cpp
)

target_include_directories(laba_1_main PRIVATE 
    ${CMAKE_CURRENT_SOURCE_DIR}/include
    ${CMAKE_CURRENT_SOURCE_DIR}/src
)

add_executable(laba_1_tests
    src/function.cpp
    test/tests.cpp
)
    
target_include_directories(laba_1_tests PRIVATE 
    ${CMAKE_CURRENT_SOURCE_DIR}/include
    ${CMAKE_CURRENT_SOURCE_DIR}/src
)

target_link_libraries(laba_1_tests PRIVATE gtest gtest_main)

include(GoogleTest)
gtest_discover_tests(laba_1_tests)
