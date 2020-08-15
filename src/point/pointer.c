//
// Created by Mr.Yang on 8/10/20.
//
// 指针是保存变量地址的变量
// 指针也是变量，名曰：指针（类型）变量
// 1. 对变量使用&运算符，可以取得该变量的地址。这个地址称为指向该变量的指针。
// 2. 指针变量hoge_p保存了指向其他变量的地址的情况下，可以说"hoge_p指向hoge"。
// 3. 对指针变量使用*运算符，就等同于它指向的变量。如果hoge_p指向hoge，*hoge_p就等同于hoge。

/**
 * *: 解引用运算符
 * &: 取地址运算符
 */
#include <stdio.h>

void pointer() {
    // 声明int类型的变量
    int hoge = 5;
    int piyo = 10;
    // 指针类型变量，hoge_p是变量名称，表示指向int型的指针
    int *hoge_p;
    /*输出每个变量的地址。&地址运算符*/
    printf("&hoge..%p\n", &hoge);
    printf("&piyo..%p\n", &piyo);
    printf("&hoge_p..%p\n", &hoge_p);
    printf("hoge_p==>..%p\n", hoge_p);

    /** 将hoge的地址赋值给hoge_p*/
    hoge_p = &hoge;
    printf("hoge_p..%p\n", hoge_p);
    printf("&hoge_p===>..%p\n", &hoge_p);

    /**通过hoge_p输出hoge的内容*/
    /*在指针前面加上*，可以表示指针指向的变量*/
    printf("hoge_p..%d\n", *hoge_p);
    *hoge_p = 10;
    printf("hoge..%d\n", hoge);
}