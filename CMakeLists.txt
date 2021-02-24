cmake_minimum_required(VERSION 3.15)
project(c_basic C)

set(CMAKE_C_STANDARD 11)
aux_source_directory(src DIR_SRCS)
include_directories(/Library/Java/JavaVirtualMachines/jdk1.8.0_202.jdk/Contents/Home/include /Library/Java/JavaVirtualMachines/jdk1.8.0_202.jdk/Contents/Home/include/darwin)
add_executable(c_basic ${DIR_SRCS} src/point/pointer.c src/point/print_address.c src/point/pointer_calc.c src/array.c src/point/get_word.c src/vmtest.c src/point/auto.c src/point/stackoverflow.c src/point/free.c src/point/alignment.c src/point/byteorder.c src/point/declaration.c src/praisel.c src/pizza.c src/printout.c src/point/output_argument.c src/point/variable_array.c src/head/get_word.h src/head/word_manage.h src/head/word_manage_p.h src/point/array.c src/jni/max_val.c)