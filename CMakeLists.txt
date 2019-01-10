cmake_minimum_required(VERSION 2.8)

project(FactorialCalculator)

set(SOURCE main.cpp)
set(EXECUTABLE FactorialCalc)

add_executable(${EXECUTABLE} ${SOURCE})
