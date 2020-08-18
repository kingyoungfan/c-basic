//
// Created by Mr.Yang on 8/18/20.
//
/**
 *  测试手动分配内存
 */
#include <stdio.h>
#include <stdlib.h>

void test_free() {
    int *int_p;
    // 在利用malloc()分配的内存区域中
    int_p = malloc(sizeof(int));

    // 写入数据
    *int_p = 12345;
    free(int_p);

    printf("*int_p=%d\n", *int_p);

    int *p;
    p = realloc(p, sizeof(int));
    *p = 12;
    printf("*p=%d\n", *p);

}