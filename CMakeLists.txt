cmake_minimum_required(VERSION 3.20)
set( CMAKE_EXPORT_COMPILE_COMMANDS ON )
project(
	RAIL
	VERSION 3.2
	LANGUAGES CXX)
include_directories(./include) 
find_package(Catch2 3 REQUIRED)
add_executable(tests)
target_link_libraries(tests PRIVATE Catch2::Catch2WithMain)
add_subdirectory(./test)
