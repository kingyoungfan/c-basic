//
// Created by Mr.Yang on 8/15/20.
// 16进制：0，1，2，3，4，5，6，7，8，9，a，b，c，d，e，f
// 指针运算
// 对指针加N，指针前进"当前指针指向的数据类型的长度*N"
//
#include <stdio.h>

void pointer_calc() {
    int hoge;
    int *hoge_p = 0;
    // 将指向hoge的指针赋值给hoge_p
    hoge_p = &hoge;

    // 输出hoge_p的值
    printf("hoge_p: %p\n", hoge_p);

    hoge_p++;
    printf("hoge_p: %p\n", hoge_p);
    printf("hoge_p: %p\n", hoge_p + 3);

}