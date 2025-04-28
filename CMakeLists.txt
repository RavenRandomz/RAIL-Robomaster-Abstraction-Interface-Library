cmake_minimum_required(VERSION 3.20)
set( CMAKE_EXPORT_COMPILE_COMMANDS ON )
project(
	rmul-rail
	VERSION 3.2
	LANGUAGES CXX)
add_library(rmul-rail INTERFACE)

include(GNUInstallDirs)
include_directories(${PROJECT_SOURCE_DIR}/include)
install(DIRECTORY include/
        DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/rmul-rail)

# GoogleTest requires at least C++14
set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

include(FetchContent)
FetchContent_Declare(
  googletest
  URL https://github.com/google/googletest/archive/03597a01ee50ed33e9dfd640b249b4be3799d395.zip
)
# For Windows: Prevent overriding the parent project's compiler/linker settings
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
FetchContent_MakeAvailable(googletest)

enable_testing()

add_executable(
  hello_test
  include/
  test/
)
target_link_libraries(
  hello_test
  GTest::gtest_main
)

include(GoogleTest)
gtest_discover_tests(hello_test)

