//
// Created by Mr.Yang on 8/15/20.
// 数组：长度固定，类型一致的对象
/**
 * 数组可以理解为指向它初始元素的指针
 * 下标运算符[]和数组无关。
 */

#include <stdio.h>

void print_array() {
    int array[5];
    int i;
    // 为数组的元素设置值
    for (i = 0; i < 10; i++) {
        array[i] = i;
    }

    // 输出数组各元素的值
    for (i = 0; i != 5; i++) {
        printf("%i\n", array[i]);
    }
    int *p;
//    for (p = array; p != &array[5]; p++) {
//        printf("*p=%d\n", *p);
//    }
    p=array;
    for (i = 0; i < 5; i++) {
        printf("p=%d\n", *(p + i));
        printf("p=%d\n", p[i]);
        printf("pi=%d\n", i[p]);
    }

    // 输出数组各元素的地址
    for (i = 0; i < 5; i++) {
        printf("&array[%d]===> %p\n", i, &array[i]);
    }
}