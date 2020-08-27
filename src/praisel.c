//
// Created by Mr.Yang on 8/22/20.
//
#include <stdio.h>
#include <string.h>

#define PRAISE "You are an extraordinary being."

/**
 * sizeof 运算符以字节为单位返回对象的大小。
 * strlen 函数以字符为单位返回对象的大小。
 */
void praisel() {
    char name[40];
    printf("What's your name?");
    scanf("%s", name);
    printf("Hello, %s, %s\n", name, PRAISE);

    printf("Your name of %zd letters occupies %zd memory cells.\n",
           strlen(name), sizeof(name));
    printf("The phrase of praise has %zd letters",
           strlen(PRAISE));
    printf("and occupies %zd memory cells.\n", sizeof PRAISE);
}