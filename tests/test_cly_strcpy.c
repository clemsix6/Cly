/*
** EPITECH PROJECT, 2022
** Cly
** File description:
** test_cly_strcpy.c
*/

#include "cly_string.h"
#include <criterion/criterion.h>

Test(cly_strcpy, test_cly_strcpy_1)
{
    char str[] = "Hello";
    char *cpy = malloc(6);
    int ret_code;

    ret_code = cly_strcpy(str, cpy);
    cr_assert_str_eq(cpy, "Hello");
    cr_assert_eq(ret_code, 0);
}

Test(cly_strcpy, test_cly_strcpy_2)
{
    char str[] = "Hello";
    char *cpy = NULL;
    int ret_code;

    ret_code = cly_strcpy(str, cpy);
    cr_assert_eq(cpy, NULL);
    cr_assert_eq(ret_code, -1);
}