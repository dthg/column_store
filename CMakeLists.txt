project(column_store)
cmake_minimum_required(VERSION 3.5.0)

include(${CMAKE_BINARY_DIR}/conanbuildinfo.cmake)
conan_basic_setup()

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -Werror -Wpedantic --std=c++1z")
set(CMAKE_CXX_FLAGS_RELEASE "${CMAKE_CXX_FLAGS} -O3")
set(CMAKE_CXX_FLAGS_DEBUG "${CMAKE_CXX_FLAGS} -O3 -g")

include_directories("${PROJECT_SOURCE_DIR}/include/")

## Main column library
add_library(COLUMN_LIB src/column.cpp)

## Testing
enable_testing()
file(GLOB TEST_SRC_FILES ${PROJECT_SOURCE_DIR}/test/*.cpp)
set(PROJECT_TEST_NAME column_store_test)
add_executable(${PROJECT_TEST_NAME} ${TEST_SRC_FILES})

target_link_libraries(${PROJECT_TEST_NAME} ${CONAN_LIBS} COLUMN_LIB)
