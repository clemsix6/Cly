/*
** EPITECH PROJECT, 2022
** Cly
** File description:
** cly_putstr.c
*/

#include "cly_string.h"
#include <unistd.h>

int cly_putstr(char const *str)
{
    int len = cly_strlen(str);

    return (int)(write(1, str, len));
}