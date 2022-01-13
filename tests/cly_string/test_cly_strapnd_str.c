/*
** EPITECH PROJECT, 2022
** Cly
** File description:
** test_cly_append_string.c
*/

#include "cly_string.h"
#include <criterion/criterion.h>

Test(cly_append_string, test_cly_append_string_1)
{
    char str1[] = "Hello";
    char str2[] = " World";
    char *result;

    result = cly_strapnd_str(str1, str2);
    cr_assert_str_eq(result, "Hello World");
    free(result);
}

Test(cly_append_string, test_cly_append_string_2)
{
    char str1[] = "Hello";
    char str2[] = " World";
    char str3[] = " !!!!";
    char *result_1;
    char *result_2;

    result_1 = cly_strapnd_str(str1, str2);
    cr_assert_str_eq(result_1, "Hello World");
    result_2 = cly_strapnd_str(result_1, str3);
    cr_assert_str_eq(result_2, "Hello World !!!!");
    free(result_1);
    free(result_2);
}

Test(cly_append_string, test_cly_append_string_3)
{
    char str1[] = "Hello";
    char str2[] = "";
    char *result;

    result = cly_strapnd_str(str1, str2);
    cr_assert_str_eq(result, "Hello");
    free(result);
}

Test(cly_append_string, test_cly_append_string_4)
{
    char *str1 = NULL;
    char str2[] = "World";
    char *result;

    result = cly_strapnd_str(str1, str2);
    cr_assert_str_eq(result, "World");
    free(result);
}

Test(cly_append_string, test_cly_append_string_5)
{
    char str1[] = "Hello";
    char *str2 = NULL;
    char *result;

    result = cly_strapnd_str(str1, str2);
    cr_assert_str_eq(result, "Hello");
    free(result);
}