//
// Created by Mr.Yang on 2019-05-22.
//
// 位域

#include <stdio.h>

//定义结构体
struct {
    unsigned int widthValidated;
    unsigned int heightValidated;
} struct1;

struct {
    unsigned int widthValidated : 1;
    unsigned int heightValidated : 1;
} struct2;

struct {
    unsigned int age:3;
} Age;

void bit_filed() {
    printf("Memory size occupied by struct1: %lu\n", sizeof(struct1));
    printf("Memory size occupied by struct2: %lu\n", sizeof(struct2));

    Age.age = 4;
    printf("Sizeof(Age): %lu\n", sizeof(Age));
    printf("Age.age: %d\n", Age.age);
    Age.age = 7;
    printf("Age.age: %d\n", Age.age);
    Age.age = 8;
    printf("Age.age: %d\n", Age.age);
}

