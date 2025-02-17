project(bobots-core)

# Create library from all source files in src directory
file(GLOB SOURCES "*.cpp")
add_library(${PROJECT_NAME} SHARED ${SOURCES})

# Add include directory
target_include_directories(${PROJECT_NAME} PUBLIC ${CMAKE_SOURCE_DIR}/include)
