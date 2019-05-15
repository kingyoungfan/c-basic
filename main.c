#include <stdio.h>


int sum(int a, int b) {
    return a + b;
}

int main() {
    printf("Hello, World!\n");
    int a = 2, b = 3;
    printf("a + b = %d", sum(a, b));
    return 0;
}
