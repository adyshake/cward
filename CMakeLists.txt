cmake_minimum_required(VERSION 3.6)
project(cward)

set(GLFW_BUILD_DOCS OFF CACHE BOOL "" FORCE)
set(GLFW_BUILD_TESTS OFF CACHE BOOL "" FORCE)
set(GLFW_BUILD_EXAMPLES OFF CACHE BOOL "" FORCE)

add_subdirectory(third_party/glfw)
add_subdirectory(third_party/tinyobjloader)
add_subdirectory(third_party/glm)
add_subdirectory(src)