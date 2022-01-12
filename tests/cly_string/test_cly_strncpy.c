/*
** EPITECH PROJECT, 2022
** Cly
** File description:
** test_cly_strncpy.c
*/

#include "cly_string.h"
#include <criterion/criterion.h>

Test(cly_strncpy, test_cly_strncpy_1)
{
    char str[] = "Hello";
    char cpy[] = "Grato";
    int result;

    result = cly_strncpy(str, cpy, 3);
    cr_assert_str_eq(cpy, "Helto");
    cr_assert_eq(result, 0);
}

Test(cly_strncpy, test_cly_strncpy_2)
{
    char str[] = "Hello";
    char cpy[] = "Grato";
    int result;

    result = cly_strncpy(str, cpy, 4);
    cr_assert_str_eq(cpy, "Hello");
    cr_assert_eq(result, 0);
}

Test(cly_strncpy, test_cly_strncpy_3)
{
    char *str = NULL;
    char cpy[] = "Grato";
    int result;

    result = cly_strncpy(str, cpy, 4);
    cr_assert_str_eq(cpy, "Grato");
    cr_assert_eq(result, -1);
}

Test(cly_strncpy, test_cly_strncpy_4)
{
    char str[] = "Hello";
    char *cpy = NULL;
    int result;

    result = cly_strncpy(str, cpy, 4);
    cr_assert_eq(cpy, NULL);
    cr_assert_eq(result, -1);
}