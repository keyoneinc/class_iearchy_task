cmake_minimum_required(VERSION 3.28)
project(untitled_2)

set(CMAKE_CXX_STANDARD 17)

add_executable(untitled_2 main.cpp
        Person.cpp
        Person.h
        Applicant.cpp
        Applicant.h
        Student.cpp
        Student.h
        Teacher.cpp
        Teacher.h)
