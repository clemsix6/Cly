/*
** EPITECH PROJECT, 2022
** Cly
** File description:
** test_cly_strlen.c
*/

#include "cly_string.h"
#include <criterion/criterion.h>

Test(cly_strlen, test_cly_strlen_1)
{
    char str[] = "Hello";
    int len = cly_strlen(str);

    cr_assert_eq(len, 5);
}

Test(cly_strlen, test_cly_strlen_2)
{
    char str[] = "";
    int len = cly_strlen(str);

    cr_assert_eq(len, 0);
}

Test(cly_strlen, test_cly_strlen_3)
{
    char *str = NULL;
    int len = cly_strlen(str);

    cr_assert_eq(len, -1);
}