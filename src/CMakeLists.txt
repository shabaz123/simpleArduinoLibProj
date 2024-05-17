# Set minimum required version of CMake
cmake_minimum_required(VERSION 3.12)

# Set name of project (as PROJECT_NAME) and C/C++ standards
project(megatest C CXX ASM)
set(CMAKE_C_STANDARD 11)
set(CMAKE_CXX_STANDARD 17)

# Tell CMake where to find the executable source file
add_executable(${PROJECT_NAME}
    Megatest.cpp
    extracode.cpp
    main.cpp
    Arduino.cpp
)

#find_package(XYZ REQUIRED)
#include_directories(${XYZ_INCLUDE_DIR})
target_link_libraries(
    ${PROJECT_NAME}
)

