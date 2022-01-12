/*
** EPITECH PROJECT, 2022
** Cly
** File description:
** test_cly_revstr.c
*/

#include "cly_string.h"
#include <criterion/criterion.h>

Test(cly_revstr, test_cly_revstr_1)
{
    char str[] = "hello";
    char rev[] = "olleh";
    int ret_code;

    ret_code = cly_revstr(str);
    cr_assert_str_eq(str, rev);
    cr_assert_eq(ret_code, 0);
}

Test(cly_revstr, test_cly_revstr_2)
{
    char str[] = "";
    char rev[] = "";
    int ret_code;

    ret_code = cly_revstr(str);
    cr_assert_str_eq(str, rev);
    cr_assert_eq(ret_code, 0);
}

Test(cly_revstr, test_cly_revstr_3)
{
    char *str = NULL;
    int ret_code;

    ret_code = cly_revstr(str);
    cr_assert_eq(ret_code, -1);
}