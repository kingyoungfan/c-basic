//
// Created by Mr.Yang on 8/18/20.
//
#include <stdio.h>

typedef struct {
    int i;
    double d;
    char c;
    double d2;

} Baz;

void alignment() {
    Baz baz;
    printf("baz    size=%lu\n", sizeof(baz));
    printf("int    size=%lu\n", sizeof(int));
    printf("char   size=%lu\n", sizeof(char));
    printf("long   size=%lu\n", sizeof(long));
    printf("double size=%lu\n", sizeof(double));
    printf("baz address=%p\n", &baz);
    printf("i   address=%p\n", &baz.i);
    printf("d   address=%p\n", &baz.d);
    printf("c   address=%p\n", &baz.c);
    printf("d2  address=%p\n", &baz.d2);
}