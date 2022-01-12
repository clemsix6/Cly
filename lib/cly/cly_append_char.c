/*
** EPITECH PROJECT, 2022
** Cly
** File description:
** cly_append_char.c
*/

#include "cly_string.h"
#include <stdlib.h>
#include <stdio.h>

char *cly_append_char(char *str, char c)
{
    char *tmp;
    int len = 0;

    if (str == NULL) {
        tmp = malloc(2);
    } else {
        len = cly_strlen(str);
        tmp = malloc(len + 1);
        if (cly_strncpy(str, tmp, len) == -1) {
            free(tmp);
            return NULL;
        }
        free(*str);
        *str = tmp;
    }
    tmp[len] = c;
    tmp[len + 1] = 0;
    return tmp;
}