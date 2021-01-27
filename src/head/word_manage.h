//
// Created by Mr.Yang on 9/9/20.
//

#ifndef C_BASIC_WORD_MANAGE_H___
#define C_BASIC_WORD_MANAGE_H___

#include <stdio.h>

void word_init(void);

void add_word(char *word);

void dump_word(FILE *file);

void word_finalize(void);

#endif //C_BASIC_WORD_MANAGE_H
