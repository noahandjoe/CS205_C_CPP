cmake_minimum_required(VERSION 3.10)

project(hello)

# add_executable(hello main.cpp factorial.cpp printhello.cpp)

#store the source files into variable DIR_SRCS
aux_source_directory(./src DIR_SRCS)

#add the directory of include
include_directories(./include)

#specify the build target
add_executable(hello ${DIR_SRCS})
