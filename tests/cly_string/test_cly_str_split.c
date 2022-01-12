/*
** EPITECH PROJECT, 2022
** Cly
** File description:
** test_cly_str_split.c
*/

#include "cly_string.h"
#include <criterion/criterion.h>
#include <stdio.h>
#include <stdlib.h>


Test(cly_str_split, test_cly_str_split_1)
{
    char str[] = "Hello World :)";
    char **result;

    result = cly_str_split(str, ' ');
    cr_assert_str_eq(result[0], "Hello");
    free(result[0]);
    cr_assert_str_eq(result[1], "World");
    free(result[1]);
    cr_assert_str_eq(result[2], ":)");
    free(result[2]);
    free(result);
}
