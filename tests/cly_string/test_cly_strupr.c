/*
** EPITECH PROJECT, 2022
** Cly
** File description:
** test_cly_strupr.c
*/

#include "cly_string.h"
#include <criterion/criterion.h>

Test(cly_strupr, test_cly_strupr_1)
{
    char str[] = "Hello";
    int ret_code = 0;

    ret_code = cly_strupr(str);
    cr_assert_eq(ret_code, 0);
    cr_assert_str_eq(str, "HELLO");
}

Test(cly_strupr, test_cly_strupr_2)
{
    char str[] = "HELLO54";
    int ret_code = 0;

    ret_code = cly_strupr(str);
    cr_assert_eq(ret_code, 0);
    cr_assert_str_eq(str, "HELLO54");
}

Test(cly_strupr, test_cly_strupr_3)
{
    char *str = NULL;
    int ret_code = 0;

    ret_code = cly_strupr(str);
    cr_assert_eq(ret_code, -1);
    cr_assert_eq(str, NULL);
}