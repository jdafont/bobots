project(sim)

add_executable(${PROJECT_NAME}
	main.cpp
)

target_compile_options(${PROJECT_NAME} PRIVATE -Werror -Wall -Wextra)

target_compile_options(${PROJECT_NAME} PRIVATE -Werror -Wall -Wextra)

target_link_libraries(${PROJECT_NAME} PRIVATE bobots-lib)
