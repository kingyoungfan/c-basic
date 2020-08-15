//
// Created by Mr.Yang on 8/15/20.
//

#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

int get_word(char *buf, int buf_size, FILE *fp) {
    printf("buf=%p, buf_size=%d, fp=%p\n", buf, buf_size, fp);
    printf("buf=%c, buf_size=%d, fp=%p\n", *buf, buf_size, fp);
    int len;
    int ch;
    /* 跳过读取空白字符 */
    while ((ch = getc(fp)) != EOF
           && !isalnum(ch));
    // ch中保存了单词的初始字符
    len = 0;
    do {
        buf[len] = (char) ch;
        len++;
        if (len >= buf_size) {
            fprintf(stderr, "word too long.\n");
            exit(1);
        }
    } while ((ch = getc(fp)) != EOF && isalnum(ch));
    buf[len] = '\0';
    printf("len = %d\n", len);
    return len;
}

void test_get_word() {
    char buf[256];
    while (get_word(buf, 256, stdin) != EOF) {
        printf("<<%s>>\n", buf);
    }
}