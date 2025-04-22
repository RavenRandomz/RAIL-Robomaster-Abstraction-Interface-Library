cmake_minimum_required(VERSION 3.20)
set( CMAKE_EXPORT_COMPILE_COMMANDS ON )
project(
	rmul-rail
	VERSION 3.2
	LANGUAGES CXX)
add_library(rmul-rail INTERFACE)

include(GNUInstallDirs)
install(DIRECTORY include/
        DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/rmul-rail)
