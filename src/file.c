//
// Created by Mr.Yang on 2019-05-22.
//

#include <stdio.h>
#include <unistd.h>

void file() {
    FILE *fp = NULL;

    fp = fopen("/Users/yangyang/hello.groovy", "w+");
    fprintf(fp, "This is testing for fprintf...\n");
    fputs("This is testing for fputs...\n", fp);
    int code = fclose(fp);
    printf("code:%d", code);
}

void read0() {
    FILE *fp = NULL;/* 定义一个文件指针*/
    char buff[255];
    fp = fopen("/Users/yangyang/hello.groovy", "r");
    fscanf(fp, "%s", buff);
    printf("1: %s\n", buff);

    fgets(buff, 255, (FILE *) fp);
    printf("2: %s\n", buff);

    fgets(buff, 255, (FILE *) fp);
    printf("3: %s\n", buff);
    fclose(fp);

}

void pwd(){
    char buffer[100];
    getcwd(buffer, sizeof(buffer));
    printf("当前路径：%s\n",buffer);

}