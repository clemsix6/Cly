/*
** EPITECH PROJECT, 2022
** Cly
** File description:
** test_cly_append_char.c
*/

#include "cly_string.h"
#include <criterion/criterion.h>

Test(test_cly_append_char, cly_append_char_2)
{
    char str[] = "Hell";
    char *result;
    char c = 'o';

    result = cly_append_char(str, c);
    cr_assert_str_eq(result, "Hello");
}
