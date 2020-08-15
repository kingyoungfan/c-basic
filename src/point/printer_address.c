//
// Created by Mr.Yang on 8/10/20.
//
#include <stdio.h>

int global_variable;
static int file_static_variable;

void func1() {
    int func1_variable;
    static int func1_static_variable;
    printf("&func1_variable.. %p\n", &func1_variable);
    printf("&func1_static_variable.. %p\n", &func1_static_variable);
    char *str = "abc";
    printf("str... %p\n", str);
    printf("&str... %p\n", &str);
    printf("*str... %c\n", *str);
}

void func2() {
    int func2_variable;
    printf("&func2_variable.. %p\n", &func2_variable);
}

void print_address() {

    // 声明指针变量
    int *p;
    func1();
    func2();
    // 输出指向函数的指针的地址
    printf("&func1.. %p\n", &func1);
    printf("&func2.. %p\n", &func2);
    // 输出字符串常量的地址
    printf("string literal..%p\n", "abc");
}