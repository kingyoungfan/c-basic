//
// Created by Mr.Yang on 2019-05-21.
//

#include <stdio.h>
#include <string.h>

void str_test() {
    char str1[12] = "hello";
    char str2[12] = "World";
    char str3[12];
    int len;
    /* 复制str1 到 str3 */
    strcpy(str3, str1);
    printf("strcpy(str3, str1): %s\n", str3);
    /* 连接str1 和 str2 */
    strcat(str1, str2);
    printf("strcat(str1, str2): %s\n", str1);
    /* 连接后，str1的总长度 */
    len = strlen(str1);
    printf("strlen(str1): %d\n", len);

}
