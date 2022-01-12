/*
** EPITECH PROJECT, 2022
** Cly
** File description:
** test_cly_strcmp.c
*/

#include "cly_string.h"
#include <criterion/criterion.h>

Test(cly_strcmp, test_cly_strcmp_1)
{
    char str1[] = "Hello";
    char str2[] = "Hello";
    int result;

    result = cly_strcmp(str1, str2);
    cr_assert_eq(result, 0);
}

Test(cly_strcmp, test_cly_strcmp_2)
{
    char str1[] = "hello";
    char str2[] = "Hello";
    int result;

    result = cly_strcmp(str1, str2);
    cr_assert_eq(result, 1);
}

Test(cly_strcmp, test_cly_strcmp_3)
{
    char str1[] = "Hello";
    char str2[] = "hello";
    int result;

    result = cly_strcmp(str1, str2);
    cr_assert_eq(result, -1);
}

Test(cly_strcmp, test_cly_strcmp_4)
{
    char str1[] = "helloo";
    char str2[] = "hello";
    int result;

    result = cly_strcmp(str1, str2);
    cr_assert_eq(result, 1);
}

Test(cly_strcmp, test_cly_strcmp_5)
{
    char str1[] = "1234";
    char str2[] = "1235";
    int result;

    result = cly_strcmp(str1, str2);
    cr_assert_eq(result, -1);
}

Test(cly_strcmp, test_cly_strcmp_6)
{
    char *str1 = NULL;
    char str2[] = "1235";
    int result;

    result = cly_strcmp(str1, str2);
    cr_assert_eq(result, -2);
}