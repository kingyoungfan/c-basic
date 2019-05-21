//
// Created by Mr.Yang on 2019-05-21.
//
#include <stdio.h>

/**
 * 指针练习
 */
void point_test() {
    int var = 20;
    int *ip;
    ip = &var;
    printf("Address of var variable: %p\n", &var);
    /* 在指针变量中存储的地址 */
    printf("Address stored in ip variable: %p\n", ip);
    /* 使用指针访问数据 */
    printf("Value of *ip variable: %d\n", *ip);
}