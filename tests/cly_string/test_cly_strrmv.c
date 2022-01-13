/*
** EPITECH PROJECT, 2022
** Cly
** File description:
** test_cly_strrmv.c
*/

#include "cly_string.h"
#include <criterion/criterion.h>

Test(cly_strrmv, test_cly_strrmv_1)
{
    char str[] = "Hello World!";
    char *result;

    result = cly_strrmv(str, 0, 5);
    cr_assert_str_eq(result, " World!");
}

Test(cly_strrmv, test_cly_strrmv_2)
{
    char str[] = "Hello World!";
    char *result;

    result = cly_strrmv(str, 0, 20);
    cr_assert_str_eq(result, "");
}

Test(cly_strrmv, test_cly_strrmv_3)
{
    char str[] = "Hello World!";
    char *result;

    result = cly_strrmv(str, 5, 20);
    cr_assert_str_eq(result, "Hello");
}

Test(cly_strrmv, test_cly_strrmv_4)
{
    char str[] = "Hello World!";
    char *result;

    result = cly_strrmv(str, 5, 1);
    cr_assert_str_eq(result, "HelloWorld!");
}

Test(cly_strrmv, test_cly_strrmv_5)
{
    char str[] = "";
    char *result;

    result = cly_strrmv(str, 5, 1);
    cr_assert_str_eq(result, "");
}

Test(cly_strrmv, test_cly_strrmv_6)
{
    char *str = NULL;
    char *result;

    result = cly_strrmv(str, 5, 1);
    cr_assert_eq(result, NULL);
}