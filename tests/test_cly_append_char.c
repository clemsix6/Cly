/*
** EPITECH PROJECT, 2022
** Cly
** File description:
** test_cly_append_char.c
*/

#include "cly_string.h"
#include <criterion/criterion.h>

Test(test_cly_append_char, cly_append_char_1)
{
    char *ptr = NULL;
    char c = 'o';

    cly_append_char(&ptr, c);
    cr_assert_str_eq(ptr, "o");
}

Test(test_cly_append_char, cly_append_char_2)
{
    char str[] = "Hell";
    char *ptr = str;
    char c = 'o';

    cly_append_char(&ptr, c);
    cr_assert_str_eq(ptr, "Hello");
}
