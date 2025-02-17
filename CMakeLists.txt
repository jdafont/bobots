cmake_minimum_required(VERSION 3.10)

# Set the project name
project(Bobots)

# Set the C++ standard
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

# Add the subdirectories
add_subdirectory(src)
add_subdirectory(app)

