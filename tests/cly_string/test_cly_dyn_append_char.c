/*
** EPITECH PROJECT, 2022
** Cly
** File description:
** test_cly_dyn_append_char.c
*/

#include "cly_string.h"
#include <criterion/criterion.h>

Test(cly_dyn_append_char, test_cly_dyn_append_char_1)
{
    char *str = NULL;

    cly_dyn_append_char(&str, 'a');
    cly_dyn_append_char(&str, 'b');
    cly_dyn_append_char(&str, 'c');
    cly_dyn_append_char(&str, 'd');

    cr_assert_str_eq(str, "abcd");
    free(str);
}

Test(cly_dyn_append_char, test_cly_dyn_append_char_2)
{
    char *str = malloc(4);
    cly_strcpy(str, "ABC");
    str[3] = 0;

    cly_dyn_append_char(&str, 'a');
    cly_dyn_append_char(&str, 'b');
    cly_dyn_append_char(&str, 'c');
    cly_dyn_append_char(&str, 'd');

    cr_assert_str_eq(str, "ABCabcd");
    free(str);
}