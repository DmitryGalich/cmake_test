cmake_minimum_required(VERSION 3.16)

project(macros_test
    LANGUAGES
    CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
add_compile_options(-Wall -Wextra -pedantic -Werror)

add_subdirectory(log_lib)

add_executable(${PROJECT_NAME}
    main.cpp)
target_link_libraries(${PROJECT_NAME}
    PRIVATE
    log_lib
)