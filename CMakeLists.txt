project(HEIHEI)
cmake_minimum_required(VERSION 3.1)
set(CMAKE_CXX_STANDARD 11)

set(RVALUES rvalues.cc)

add_executable(main ${RVALUES})
