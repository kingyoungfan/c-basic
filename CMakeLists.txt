cmake_minimum_required(VERSION 3.15)
project(c_basic C)

set(CMAKE_C_STANDARD 11)
aux_source_directory(src DIR_SRCS)

add_executable(c_basic ${DIR_SRCS} src/point/pointer.c src/point/print_address.c src/point/pointer_calc.c src/array.c src/get_word.c src/vmtest.c src/point/auto.c src/point/stackoverflow.c src/point/free.c src/point/alignment.c src/point/byteorder.c)