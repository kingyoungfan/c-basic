//
// Created by Mr.Yang on 2019-05-21.
//

#include <stdio.h>

int count;

void write_extern(void) {
    printf("count = %d\n", count);
}

/**
 * 取出两个数中较大的
 * @param a a参数
 * @param b b参数
 * @return  要求的数
 */
int max(int a, int b) {
    int result;
    if (a > b) {
        result = a;
    } else {
        result = b;
    }
    return result;
}

/**
 * 求和
 * @param a
 * @param b
 * @return
 */
int sum(int a, int b) {
    return a + b;
}