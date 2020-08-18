//
// Created by Mr.Yang on 8/18/20.
//
#include <stdio.h>

void stackoverflow() {
    fprintf(stderr, "hello\n");
}

void func() {
    void *buf[10];
    static int i;
    for (i = 0; i < 100; i++) {
        buf[i] = stackoverflow;
    }
}

void test_stackoverflow(){
    int buf[1000];
    func();
}
