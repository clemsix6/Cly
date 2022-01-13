/*
** EPITECH PROJECT, 2022
** Cly
** File description:
** test_cly_strnset.c
*/

#include "cly_string.h"
#include <criterion/criterion.h>

Test(cly_strnset, test_cly_strnset_1)
{
    char str[] = "Hello";

    cly_strnset(str, '#', 2);
    cr_assert_str_eq(str, "##llo");
}

Test(cly_strnset, test_cly_strnset_2)
{
    char str[] = "Hello World";

    cly_strnset(str, '#', 5);
    cr_assert_str_eq(str, "##### World");
}

Test(cly_strnset, test_cly_strnset_4)
{
    char *str = NULL;

    cly_strnset(str, '#', 2);
    cr_assert_eq(str, NULL);
}