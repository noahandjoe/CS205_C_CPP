cmake_minimum_required(VERSION 3.10)

project(main)

aux_source_directory(. DIR)

add_executable(main ${DIR})