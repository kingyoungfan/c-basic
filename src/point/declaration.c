//
// Created by Mr.Yang on 8/18/20.
// 声明

/**
 *  1. 指向数组的指针
 *  2. 指向函数的指针
 */
#include <stdio.h>

/**
 * 参数是指向（返回void且没有参数的）函数的指针
 * @return 返回int
 */
int atexit(void (*_Nonnull )(void));

/**
 * signal 是返回"指向返回void参数为int的函数的指针"的函数，他有两个参数，
 * 一个是int，另一个是"指向返回void、参数为int的函数的指针"。
 * @return 返回函数的指针
 */
void (*signal(int sig, void (*func)(int)))(int);

void declaration() {
    // 声明hoge变量，hoge是int类型变量
    int hoge;
    // 指向int的指针
    int *hoge_p;

    // hoge_arr是int的数组，数组元素个数为10
    int hoge_arr[10];

    // 数组的数组
    int hoge_arr_arr[2][3];

    // 指向int的指针的数组
    int *hoge_p_arr[100];

    // 指向int的数组的指针
    int (*hoge_p_arr1)[100];

    // 指向返回int的函数的（参数为i, d）指针
    int (*func)(int i, double d);
    int n;
    int *np = &n; // pointer to int

    int *const *npp = &np; // non-const pointer to const pointer to non-const int


}

/**
 * 类型名
 */
void type_name() {
    // 声明hoge是int类型
    int hoge;

    // 指向int类型的指针类型
    int *hoge_p;

    // 指向数组的指针类型
    double (*p)[3];

    // 指向返回void的函数的指针类型
    void (*func)(int i, double d);

    // 指向返回int函数的指针的数组
    int (*func1[100])(int i, double d);

    // 函数的指针的数组
    int (*arr[5][6])(double);
    printf("size..%lu\n", sizeof(int (*[5])(double)));

    //src是指向 char的只读指针
    char *const src;
    // src1 是指向 只读的char的指针
    char const *src1;

    // 指针的数组
    char *color_name[] = {
            "red",
            "green",
    };
    char *str = "abc";
    int i = 12;
    int *i_p = &i;
    printf("p=%p\n", color_name[0]);
    printf("i=%i\n", *i_p);
    printf("s=%c\n", str[1]);
    printf("str size(lu)=%lu\n", sizeof("123456"));
    printf("str size(zd)=%zd\n", sizeof("123456"));
}

