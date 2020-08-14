cmake_minimum_required(VERSION 2.9 FATAL_ERROR)

project(mesh LANGUAGES CXX )

MESSAGE("CMAKE_CXX_COMPILER_VERSION: " ${CMAKE_CXX_COMPILER_VERSION})


add_library(extras_lib STATIC
	SignalMesh.cpp
	SignalCell.cpp
	SignalTissue.cpp
	SignalCommon.cpp)

	
target_compile_features(extras_lib PUBLIC cxx_std_11)

set(MAIN_SOURCES Signal_Calculator.cpp)
set(TARGET program)
add_executable(${TARGET} ${MAIN_SOURCES})

MESSAGE("TARGET: " ${TARGET})

target_link_libraries(${TARGET} extras_lib )

