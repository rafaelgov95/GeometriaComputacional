cmake_minimum_required(VERSION 3.6)
project(untitled8)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp)
add_executable(untitled8 ${SOURCE_FILES})
find_package(OpenGL REQUIRED)
find_package(GLUT REQUIRED)
include_directories(${OPENGL_INCLUDE_DIRS} ${GLUT_INCLUDE_DIRS})
target_link_libraries(untitled8 ${OPENGL_LIBRARIES} ${GLUT_LIBRARY})
