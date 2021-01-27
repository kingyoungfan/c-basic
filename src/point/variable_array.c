//
// Created by Mr.Yang on 8/27/20.
//
#include <stdio.h>
#include <stdlib.h>

void variable_array() {
    char buf[256];
    int size;
    int *variable_array;
    int i;
    printf("Input array size: ");
    fgets(buf, 256, stdin);
    sscanf(buf, "%d", &size);
    variable_array = malloc(sizeof(int) * size);
    for (i = 0; i < size; ++i) {
        variable_array[i] = i;
    }
    for (i = 0; i < size; i++) {
        printf("variable_array[%d]: %d\n", i, variable_array[i]);
    }

}