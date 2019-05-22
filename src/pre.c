//
// Created by Mr.Yang on 2019-05-22.
//
// 预处理器
#include <stdio.h>
/* \: 宏延续运算符 */
#define message_for(a, b)\
    printf(#a " and " #b ": We love you!\n") /* #:字符串常量化运算符 */

#define token_parser(n)\
    printf("token" #n " = %d", token##n)
#if !defined(MESSAGE)
#define MESSAGE "You wish!"
#endif

/* 参数化宏 */
#define square(x)((x) * (x))

#define MAX(x, y) ((x) > (y) ? (x) : (y))

void pre() {
    printf("File: %s\n", __FILE__);
    printf("Date: %s\n", __DATE__);
    printf("TIME: %s\n", __TIME__);
    printf("LINE: %d\n", __LINE__);
    printf("ANSI: %d\n", __STDC__);

    message_for(Car, Deb);
    int token32 = 22;
    token_parser(32);

    printf("Here is the message: %s\n", MESSAGE);

    int x = 20, y = 10;
    printf("Max between %d and %d is %d\n", x, y, MAX(x, y));
    printf("x*x = %d", square(x));
}
