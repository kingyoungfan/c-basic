//
// Created by Mr.Yang on 2019-05-22.
//

#include <errno.h>
#include <stdio.h>
#include <string.h>

void error() {
    FILE *pf;
    int errnum;
    pf = fopen("unexist.txt", "rb");
    if (pf == NULL) {
        errnum = errno;
        fprintf(stderr, "错误号: %d\n", errno);
        perror("通过 perror 输出错误");
        fprintf(stderr, "打开文件错误: %s\n", strerror(errnum));
    } else {
        fclose(pf);
    }
}

void div_err(){
    int dividend = 20;
    
}

