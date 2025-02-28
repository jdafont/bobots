project(bobots-lib)

# Create library from all source files in src directory
file(GLOB SOURCES "bobots/*/*.cpp" "bobots/*/*/*.cpp")
add_library(${PROJECT_NAME} SHARED ${SOURCES})

target_compile_options(${PROJECT_NAME} PRIVATE -Werror -Wall -Wextra)

# Add include directory
target_include_directories(${PROJECT_NAME} PUBLIC ${CMAKE_SOURCE_DIR}/include)
