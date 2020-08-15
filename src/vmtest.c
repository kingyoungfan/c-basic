//
// Created by Mr.Yang on 8/15/20.
//
#include <stdio.h>
/**
 * 虚拟地址 ==> 物理地址
 */
int vm_test(){
    int hoge;
    char buf[256];
    printf("&hoge===> %p\n", &hoge);
    printf("Input initial value.\n");
    fgets(buf, sizeof(buf), stdin);
    sscanf(buf, "%d", &hoge);
    for (;;){
        printf("hoge===>%d\n", hoge);
        getchar();
        hoge++;
    }
    return 0;
}