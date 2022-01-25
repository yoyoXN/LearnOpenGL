cmake_minimum_required(VERSION 3.21)
project(LearnOpenGL)

set(CMAKE_CXX_STANDARD 14)

include_directories(glfw/include)

include_directories(glad/include)

add_executable(LearnOpenGL main.cpp glad/src/glad.c Application.cpp Application.h Triangle.cpp Triangle.h Shader.h stb_image.h Texture.cpp Texture.h)

target_link_libraries(LearnOpenGL ${PROJECT_SOURCE_DIR}/lib/glfw3.lib)