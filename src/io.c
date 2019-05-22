//
// Created by Mr.Yang on 2019-05-22.
//

#include <stdio.h>

void io() {
    /*
    int c;
    printf("Enter a value:");
    c = getchar();
    printf("\nYou entered:");
    putchar(c);
    printf("\n");
     */

    /*
    char str[100];
    printf("Enter a value:");
    gets(str);

    printf("\nYou entered:");
    puts(str);
     */

    char str[100];
    int i;
    printf("Enter a value:");
    scanf("%s %d", str, &i);

    printf("\nYou entered: %s %d", str, i);
    printf("\n");


}