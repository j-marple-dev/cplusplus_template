cmake_minimum_required(VERSION 3.20.5)
project(
	cplucplus_template  # Change this for your project name
	VERSION 0.1.0
)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_FLAGS "-std=c++17 ${CMAKE_CXX_FLAGS} -fPIC")

include_directories( include )
file(GLOB_RECURSE SOURCES CONFIGURE_DEPENDS "${CMAKE_CURRENT_SOURCE_DIR}/src/*.cpp")

add_executable( ${PROJECT_NAME}
    ${SOURCES}
)

