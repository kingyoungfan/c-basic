//
// Created by Mr.Yang on 2019-05-22.
//
// 共用体

#include <stdio.h>
#include <string.h>

union Data {
    int i;
    float f;
    char str[32];// 最大20个字节
};

void unions() {
    union Data data;
    printf("Memory size occupied by data: %lu\n", sizeof(data));

    data.i = 10;
    printf("data.i: %d\n", data.i);

    data.f = 222.5;
    printf("data.f: %f\n", data.f);

    strcpy(data.str, "C Programming");
    printf("data.str: %s\n", data.str);
}