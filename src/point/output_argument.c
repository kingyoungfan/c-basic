//
// Created by Mr.Yang on 8/27/20.
//
#include <stdio.h>

void func_output_argument(int *a, double *b) {
    *a = 5;
    *b = 6.2;
}

void output_argument() {
    int a;
    double b;
    /**
     * 如果需要通过函数返回值以外的方式返回值，将指向 T 的指针作为参数传递给函数。
     */
    func_output_argument(&a, &b);
    printf("a=%d, b=%f", a, b);

}