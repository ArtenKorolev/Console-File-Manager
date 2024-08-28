cmake_minimum_required(VERSION 3.5)

project(FileManager)

set(CMAKE_CXX_STANDARD 17)

file(GLOB
		  CPP_SOURCES "source/*.cpp" , "source/Exeptions/*.cpp")

add_executable(${PROJECT_NAME} ${CPP_SOURCES})