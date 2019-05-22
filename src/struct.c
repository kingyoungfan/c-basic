//
// Created by Mr.Yang on 2019-05-21.
// C 语言结构体
//

#include <stdio.h>
#include <string.h>

struct Books {
    char title[50];
    char author[50];
    char subject[100];
    int book_id;
} book = {"C 语言", "Yangyang", "编程语言", 123456};


void use_struct() {
    printf("Title: %s\nAuthor: %s\nSubject: %s\nBookId: %d\n", book.title, book.author, book.subject, book.book_id);
}

void use_book() {
    struct Books book1; /* 声明book1， 类型为Books */
    struct Books book2; /* 声明book2， 类型为Books*/

    /* book1 详述 */
    strcpy(book1.title, "C Programming");
    strcpy(book1.author, "Yangyang");
    strcpy(book1.subject, "C Programming Basic");
    book1.book_id = 12456;

    /* book2详述 */
    strcpy(book2.title, "Java Programming");
    strcpy(book2.author, "Yang");
    strcpy(book2.subject, "Java Programming Basic");
    book2.book_id = 12456;

    printf("book1 title: %s\n", book1.title);
    printf("book1 author: %s\n", book1.author);
    printf("book1 subject: %s\n", book1.subject);
    printf("book1 book_id: %d\n", book1.book_id);

    printf("**********************\n");

    printf("book2 title: %s\n", book2.title);
    printf("book2 author: %s\n", book2.author);
    printf("book2 subject: %s\n", book2.subject);
    printf("book2 book_id: %d\n", book2.book_id);

}

void create_book(char title[50], char author[50]){

}

void print_book(struct Books book){
    printf("book title: %s\n", book.title);
    printf("book author: %s\n", book.author);
    printf("book subject: %s\n", book.subject);
    printf("book book_id: %d\n", book.book_id);

}