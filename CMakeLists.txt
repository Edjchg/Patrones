cmake_minimum_required(VERSION 3.9)
project(Patrones)

set(CMAKE_CXX_STANDARD 11)

add_executable(Patrones main.cpp Singleton.cpp Singleton.h AbstractFactory.cpp AbstractFactory.h WindowAbstract.cpp WindowAbstract.h QTFactory.cpp QTFactory.h GTKFactory.cpp GTKFactory.h)