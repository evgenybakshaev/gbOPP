CMAKE_MINIMUM_REQUIRED(VERSION 3.5)
	 
PROJECT(lesson6)

file(GLOB sources "${CMAKE_CURRENT_SOURCE_DIR}/src/*.cpp")
file(GLOB headers "${CMAKE_CURRENT_SOURCE_DIR}/src/*.h")

add_executable(${PROJECT_NAME} ${sources} ${headers})


