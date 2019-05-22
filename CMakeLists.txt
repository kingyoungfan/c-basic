cmake_minimum_required(VERSION 3.14)
project(c_basic C)

set(CMAKE_C_STANDARD 11)

add_executable(c_basic src/main.c src/support.c src/quick-sort.c src/day-enum.c src/point.c src/str.c src/struct.c src/unions.c src/bit-fields.c src/type-def.c src/io.c src/file.c src/pre.c)