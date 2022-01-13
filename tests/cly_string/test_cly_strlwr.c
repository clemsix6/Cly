/*
** EPITECH PROJECT, 2022
** Cly
** File description:
** test_cly_strlwr.c
*/

#include "cly_string.h"
#include <criterion/criterion.h>

Test(cly_strlwr, test_cly_strlwr_1)
{
    char str[] = "Hello";
    int ret_code = 0;

    ret_code = cly_strlwr(str);
    cr_assert_eq(ret_code, 0);
    cr_assert_str_eq(str, "hello");
}

Test(cly_strlwr, test_cly_strlwr_2)
{
    char str[] = "HELLO54";
    int ret_code = 0;

    ret_code = cly_strlwr(str);
    cr_assert_eq(ret_code, 0);
    cr_assert_str_eq(str, "hello54");
}

Test(cly_strlwr, test_cly_strlwr_3)
{
    char *str = NULL;
    int ret_code = 0;

    ret_code = cly_strlwr(str);
    cr_assert_eq(ret_code, -1);
    cr_assert_eq(str, NULL);
}