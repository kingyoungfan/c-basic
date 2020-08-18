//
// Created by Mr.Yang on 8/18/20.
// 字节排序
#include <stdio.h>

void byte_order() {
    // 八进制
    int hoge = 0x12345678;
    // 指向char类型的指针
    unsigned char *hoge_p = (unsigned char *) &hoge;

    printf("%x\n", hoge_p[0]);
    printf("%x\n", hoge_p[1]);
    printf("%x\n", hoge_p[2]);
    printf("%x\n", hoge_p[3]);
}