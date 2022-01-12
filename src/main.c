/*
** EPITECH PROJECT, 2022
** Cly
** File description:
** main.c
*/

#include "cly_string.h"
#include "cly_linked_list.h"
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char str[] = "Hello World :)";
    char **result;

    result = cly_str_split(str, ' ');
    printf("--------\n");
    for (int i = 0; result[i] != NULL; i++) {
        printf("%s\n", result[i]);
        free(result[i]);
    }
    free(result);
}
