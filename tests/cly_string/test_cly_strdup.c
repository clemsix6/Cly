/*
** EPITECH PROJECT, 2022
** Cly
** File description:
** test_cly_strdup.c
*/

#include "cly_string.h"
#include <criterion/criterion.h>

Test(cly_strdup, test_cly_strdup_1)
{
    char str[] = "Hello World";
    char *result;

    result = cly_strdup(str);
    cr_assert_neq(result, str);
    cr_assert_str_eq(result, str);
}

Test(cly_strdup, test_cly_strdup_2)
{
    char str[] = "";
    char *result;

    result = cly_strdup(str);
    cr_assert_neq(result, str);
    cr_assert_str_eq(result, str);
}

Test(cly_strdup, test_cly_strdup_3)
{
    char *str = NULL;
    char *result;

    result = cly_strdup(str);
    cr_assert_eq(result, NULL);
}