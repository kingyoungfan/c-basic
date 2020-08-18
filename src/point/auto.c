//
// Created by Mr.Yang on 8/17/20.
//
#include <stdio.h>

void auto_variable(int a, int b) {
    int c, d;
    printf("auto_variable:&a=%p; &b=%p\n", &a, &b);
    printf("auto_variable:&c=%p; &d=%p\n", &c, &d);
}

void auto_variable_test() {
    int a, b;
    printf("auto_variable_test:&a=%p; &b=%p\n", &a, &b);
    auto_variable(1, 2);
}