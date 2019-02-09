cmake_minimum_required(VERSION 3.11.2)

project(CCTask
        LANGUAGES CXX)

find_package(OpenGL REQUIRED)

set(GLFW_BUILD_EXAMPLES OFF)
set(GLFW_BUILD_TESTS OFF)
add_subdirectory(${CMAKE_CURRENT_SOURCE_DIR}/external/glfw)

add_subdirectory(${CMAKE_CURRENT_SOURCE_DIR}/external/glm)

add_subdirectory(${CMAKE_CURRENT_SOURCE_DIR}/app)