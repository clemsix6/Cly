/*
** EPITECH PROJECT, 2022
** Cly
** File description:
** test_cly_append_dynamic_char.c
*/

#include "cly_string.h"
#include <criterion/criterion.h>

Test(cly_append_dynamic_char, test_cly_append_dynamic_char_1)
{
    char *str = NULL;

    cly_append_dynamic_char(&str, 'a');
    cly_append_dynamic_char(&str, 'b');
    cly_append_dynamic_char(&str, 'c');
    cly_append_dynamic_char(&str, 'd');
    cr_assert_str_eq(str, "abcd");

    free(str);
}