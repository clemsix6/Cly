/*
** EPITECH PROJECT, 2022
** Cly
** File description:
** main.c
*/

#include "cly_io.h"

int main(void)
{
    char str[] = "Hello World :)\n";
    char *line = cly_readline(0);

    cly_putstr(str);
    cly_putstr(line);
    cly_putchar('\n');
}
