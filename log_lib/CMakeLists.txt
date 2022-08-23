cmake_minimum_required(VERSION 3.16)

project(log_lib LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
add_compile_options(-Wall -Wextra -pedantic -Werror)

set(INTERNAL_NAME ${PROJECT_NAME}_internal)
add_library(${INTERNAL_NAME}
    ${INTERNAL_NAME}.cpp
    ${INTERNAL_NAME}.h)

add_library(${PROJECT_NAME}
    ${PROJECT_NAME}.cpp
    ${PROJECT_NAME}.h)
target_link_libraries(${PROJECT_NAME}
    PRIVATE
    ${INTERNAL_NAME})

target_include_directories(${PROJECT_NAME}
    PUBLIC
    ${CMAKE_CURRENT_LIST_DIR})
