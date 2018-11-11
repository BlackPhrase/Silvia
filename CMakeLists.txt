cmake_minimum_required(VERSION 3.9)
project(SilviaGameFramework VERSION 0.0.1)

option(SILVIA_BUILD_TESTS "Enable building of tests" ON)

include_directories(
	${CMAKE_CURRENT_SOURCE_DIR}/include/silvia
)

add_subdirectory(src)

if(SILVIA_BUILD_TESTS)
	add_subdirectory(tests)
endif()