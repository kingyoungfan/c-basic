//
// Created by Mr.Yang on 1/28/21.
//
#include <stdio.h>

void array_test() {
    int array[5];

    int i;

    /**
     * 为数组array的各元素赋值
     */
    for (i = 0; i < 5; ++i) {
        array[i] = i;
    }

    printf("数组下标访问元素:\n");
    for (i = 0; i < 5; ++i) {
        printf("%d\n", array[i]);
    }
    printf("\n\n");

    printf("输出数组元素的地址:\n");
    for (i = 0; i < 5; ++i) {
        printf("&array[%d]: %p\n", i, &array[i]);
    }
    printf("\n\n");

    printf("使用指针的方式访问数组元素:\n");
    int *p;
    for (p = array; p != &array[5]; ++p) {
        printf("%d\n", *p);
    }

    printf("\n\n");

    printf("使用指针的方式访问数组元素(改进版):\n");
    p = &array[0];
    for (i = 0; i < 5; ++i) {
        printf("%d\n", *(p + i));
    }


}