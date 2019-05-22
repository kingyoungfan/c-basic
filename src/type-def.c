//
// Created by Mr.Yang on 2019-05-22.
//
// 类型定义
#include <stdio.h>
#include <string.h>

typedef struct Books {
    char title[50];
    char author[50];
    char subject[100];
    int book_id;
} Book;


#define TRUE 1
#define FALSE 0

void type_def() {
    Book book;
    strcpy(book.title, "C 教程");
    strcpy(book.author, "羊羊");
    strcpy(book.subject, "编程语言");
    book.book_id = 123456;
    printf("书标题：%s\n", book.title);
    printf("书作者：%s\n", book.author);
    printf("书类目：%s\n", book.subject);
    printf("书ID ：%d\n", book.book_id);

    printf("TRUE的值 ： %d\n", TRUE);
    printf("FALSE的值： %d\n", FALSE);

}