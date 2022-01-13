/*
** EPITECH PROJECT, 2022
** Cly
** File description:
** test_cly_strset.c
*/

#include "cly_string.h"
#include <criterion/criterion.h>

Test(cly_strset, test_cly_strset_1)
{
    char str[] = "Hello";

    cly_strset(str, '#');
    cr_assert_str_eq(str, "#####");
}

Test(cly_strset, test_cly_strset_2)
{
    char str[] = "";

    cly_strset(str, '#');
    cr_assert_str_eq(str, "");
}

Test(cly_strset, test_cly_strset_3)
{
    char *str = NULL;

    cly_strset(str, '#');
    cr_assert_eq(str, NULL);
}