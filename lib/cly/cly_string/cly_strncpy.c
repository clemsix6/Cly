/*
** EPITECH PROJECT, 2022
** Cly
** File description:
** cly_strncpy.c
*/

#include <stdlib.h>

int cly_strncpy(char const *src, char *dest, int n)
{
    if (src == NULL || dest == NULL)
        return -1;
    for (int i = 0; i < n; i++)
        dest[i] = src[i];
    return 0;
}