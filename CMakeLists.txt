cmake_minimum_required(VERSION 3.16)
project(QualityApiCase)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

include(FetchContent)

set(HTTPLIB_INCLUDE_DIR "${CMAKE_CURRENT_SOURCE_DIR}/include")

if(NOT EXISTS "${HTTPLIB_INCLUDE_DIR}/httplib.h")
	set(HTTPLIB_INCLUDE_DIR "${CMAKE_CURRENT_SOURCE_DIR}/external")
	message(STATUS "httplib.h not found in include/, checking external/")

	if(NOT EXISTS "${HTTPLIB_INCLUDE_DIR}/httplib.h")
		message(STATUS "httplib.h not found in external/, fetching cpp-httplib")

		FetchContent_Declare(
			cpp_httplib
			GIT_REPOSITORY https://github.com/yhirose/cpp-httplib.git
			GIT_TAG v0.15.3
		)
		FetchContent_MakeAvailable(cpp_httplib)

		set(HTTPLIB_INCLUDE_DIR "${cpp_httplib_SOURCE_DIR}")
	endif()
endif()

add_executable(quality_api src/main.cpp src/logic.cpp)
add_executable(quality_tests src/tests.cpp src/logic.cpp)

target_include_directories(quality_api PRIVATE include "${HTTPLIB_INCLUDE_DIR}")
target_include_directories(quality_tests PRIVATE include "${HTTPLIB_INCLUDE_DIR}")

if(WIN32)
	target_link_libraries(quality_api PRIVATE ws2_32)
endif()
