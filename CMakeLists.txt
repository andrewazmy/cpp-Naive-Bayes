cmake_minimum_required(VERSION 3.8)
project(cpp_Naive_Bayes)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp classifier.cpp classifier.h)
add_executable(cpp_Naive_Bayes ${SOURCE_FILES})