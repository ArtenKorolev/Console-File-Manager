cmake_minimum_required(VERSION 3.5)

project(FileManager)

set(CMAKE_CXX_STANDARD 17)

file(GLOB 
		  CPP_SOURCES "source/*.cpp" "source/Commands/*.cpp" "source/Exceptions/*.cpp" "source/File/*.cpp" "source/Directory/*.cpp" "source/Entities/*.cpp" "source/FileSystem/*.cpp" "source/common/*.cpp"
)

include_directories("source" "source/common" "source/Commands" "source/Exceptions" "source/File" "source/Directory" "source/Entities" "source/FileSystem")

add_executable(${PROJECT_NAME} ${CPP_SOURCES})