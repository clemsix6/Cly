/*
** EPITECH PROJECT, 2022
** Cly
** File description:
** cly_append_dynamic_char.c
*/

#include "cly_string.h"
#include <stdlib.h>

int cly_append_dynamic_char(char **str, char c)
{
    char *tmp;

    if (str == NULL)
        return -1;
    tmp = cly_append_char(*str, c);
    if (tmp == NULL)
        return -1;
    if (*str != NULL)
        free(*str);
    *str = tmp;
    return 0;
}