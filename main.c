#include <stdio.h>


int sum(int a, int b) {
    return a + b;
}

int count;

void write_extern();

int main() {
    count = 5;
    write_extern();
}
