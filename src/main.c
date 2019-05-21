#include <stdio.h>


int sum(int a, int b) {
    return a + b;
}

int count;

void write_extern();

// 函数外定义变量 x 和 y
int x;
int y;
int addtwonum()
{
    // 函数内声明变量 x 和 y 为外部变量
    extern int x;
    extern int y;
    // 给外部变量（全局变量）x 和 y 赋值
    x = 1;
    y = 2;
    return x+y;
}
int main() {
    count = 5;
    write_extern();
    int result;
    // 调用函数 addtwonum
    result = addtwonum();
}
