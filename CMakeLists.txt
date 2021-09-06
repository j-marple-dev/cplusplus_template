cmake_minimum_required(VERSION 3.20.5)
project(
	cplucplus_template  # Change this for your project name
	VERSION 0.1.0
)

option(test "Build all tests." OFF)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_FLAGS "-std=c++17 ${CMAKE_CXX_FLAGS} -fPIC")

include_directories( include )
file(GLOB_RECURSE SOURCES CONFIGURE_DEPENDS "${CMAKE_CURRENT_SOURCE_DIR}/src/*.cpp")

add_library( ${PROJECT_NAME}_lib ${SOURCES} )

add_executable( ${PROJECT_NAME}
    src/cplucplu_template/main.cpp
)

target_link_libraries(${PROJECT_NAME} ${PROJECT_NAME}_lib)

if (test)
    add_subdirectory("/usr/src/gtest" ${CMAKE_BINARY_DIR}/gtest)
    include_directories(${GTEST_INCLUDE_DIRS})
	enable_testing()

    include_directories(${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR})

    add_executable(test-second_module tests/test_second_module.cpp)

    target_link_libraries(test-second_module gtest gtest_main)
    target_link_libraries(test-second_module ${PROJECT_NAME}_lib)

    add_test(NAME SecondModuleTest COMMAND test-second_module)
endif()
