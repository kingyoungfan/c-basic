#include <stdio.h>
#include <unistd.h>

int count;

void write_extern();

// 函数声明：求两个数较大的
int max(int a, int c);

// 函数声明：求和
int sum(int a, int b);

// 函数声明：快速排序
void quick_sort(int arr[], int len);

// 函数声明：快速排序的递归法实现，start是数组索引开始的位置， end是数组索引结束的未知
void quick_sort_recursive(int arr[], int start, int end);

// 函数声明：指针练习
void point_test();

// 函数声明：函数指针
void fun_point();

// 函数声明：字符串练习
void str_test();

// 函数声明：使用结构体
void use_struct();

void use_book();

// 函数声明：打印图书
void print_book();

// 函数声明：定义共用体
void unions();

// 函数声明：位域
void bit_filed();

// 函数声明：类型定义
void type_def();

// 函数声明：输入输出
void io();

void file();

void read0();

void pre();

// 函数声明：类型转换
void cast();

// 函数申明：错误
void error();

void pwd();

void pointer();

void print_address();

void pointer_calc();
void print_array();
void test_get_word();
// 使用指针交换两个值
void test_swap();
int main() {
    print_address();
    return 0;
}
