project(bobots-core)

# Create library from all source files in src directory
file(GLOB SOURCES "src/*.cpp")
add_library(${PROJECT_NAME} ${SOURCES})

# Add include directory
target_include_directories(${PROJECT_NAME} PUBLIC include)
