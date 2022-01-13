/*
** EPITECH PROJECT, 2022
** Cly
** File description:
** test_cly_strstr.c
*/

#include "cly_string.h"
#include <criterion/criterion.h>
#include <stdio.h>

Test(cly_strstr, test_cly_strstr_1)
{
    char str[] = "Hello World!!!";
    char *ptr = str + 6;
    char *result;

    result = cly_strstr(str, "World");
    cr_assert_eq(result, ptr);
}

Test(cly_strstr, test_cly_strstr_2)
{
    char str[] = "Hello World!!!World Hello";
    char *ptr = str + 6;
    char *result;

    result = cly_strstr(str, "World");
    cr_assert_eq(result, ptr);
}

Test(cly_strstr, test_cly_strstr_3)
{
    char str[] = "Hello !!!";
    char *result;

    result = cly_strstr(str, "World");
    cr_assert_eq(result, NULL);
}

Test(cly_strstr, test_cly_strstr_4)
{
    char *str = NULL;
    char *result;

    result = cly_strstr(str, "World");
    cr_assert_eq(result, NULL);
}

Test(cly_strstr, test_cly_strstr_5)
{
    char str[] = "Hello !!!";
    char *result;

    result = cly_strstr(str, NULL);
    cr_assert_eq(result, NULL);
}

Test(cly_strstr, test_cly_strstr_6)
{
    char *str = NULL;
    char *result;

    result = cly_strstr(str, NULL);
    cr_assert_eq(result, NULL);
}

Test(cly_strstr, test_cly_strstr_7)
{
    char str[] = "";
    char *result;

    result = cly_strstr(str, "Oui");
    cr_assert_eq(result, NULL);
}

Test(cly_strstr, test_cly_strstr_8)
{
    char str[] = "Hello !!!";
    char *result;

    result = cly_strstr(str, "");
    cr_assert_eq(result, NULL);
}

Test(cly_strstr, test_cly_strstr_9)
{
    char str[] = "Hello !!!";
    char *ptr = str + 1;
    char *result;

    result = cly_strstr(str, "e");
    cr_assert_eq(result, ptr);
}
