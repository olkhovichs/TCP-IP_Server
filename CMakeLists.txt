cmake_minimum_required(VERSION 3.19)
project(Server)

set(CMAKE_CXX_STANDART 17)

add_executable(Server src/main.cpp src/TcpServer.h src/TcpServer.cpp src/Client.h src/Client.cpp)