cmake_minimum_required(VERSION 3.8)

project(yana_cmake_example)
set(CMAKE_BUILD_TYPE Release)
set(SRC_DIR src)

set(EXAMPLE_SRC ${SRC_DIR}/main.cpp
                ${SRC_DIR}/animal.cpp
                ${SRC_DIR}/dog.cpp
                ${SRC_DIR}/cat.cpp)

include_directories(${PROJECT_SOURCE_DIR}/include)

add_executable(${PROJECT_NAME} ${EXAMPLE_SRC})

set_property(TARGET yana_cmake_example PROPERTY CXX_STANDARD 11)
set_property(TARGET yana_cmake_example PROPERTY CXX_STANDARD_REQUIRED ON)