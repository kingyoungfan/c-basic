//
// Created by Mr.Yang on 2019-05-21.
//
#include <stdio.h>

/**
 * 指针练习
 */
int max(int x, int y);

void point_test() {
    int var = 20; /* 声明并定义一个变量 */
    int *ip;      /* 指针变量的声明 */
    ip = &var;    /* 在指针变量中存储 var 的地址 */
    printf("Address of var variable: %p\n", &var);
    /* 在指针变量中存储的地址 */
    printf("Address stored in ip variable: %p\n", ip);
    /* 使用指针访问数据 */
    printf("Value of *ip variable: %d\n", *ip);
}

void fun_point() {
    int (*p)(int, int) = &max;
    int a, b, c, d;
    printf("请输入三个数字");
    scanf("%d %d %d", &a, &b, &c);
    d = p(p(a, b), c);
    printf("最大数字是：%d\n", d);
}