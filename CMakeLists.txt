cmake_minimum_required(VERSION 3.19)
project(StudyC C)

set(CMAKE_C_STANDARD 11)

add_executable(StudyC
        StudyC/main.c day01/Test.c day02/StuMultiFile.c day02/h/StuMultiFile.h day02/StuPoint.c day02/h/StuPoint.h)
