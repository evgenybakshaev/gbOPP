CMAKE_MINIMUM_REQUIRED(VERSION 2.8)
	 
PROJECT(Lesson1)

#set(CMAKE_CXX_FLAGS "-std=c++14")

file(GLOB sources "src/*.cpp")

add_executable(Lesson1 ${sources})

target_include_directories(Lesson1 PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/include)
