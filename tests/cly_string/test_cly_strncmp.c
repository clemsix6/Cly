/*
** EPITECH PROJECT, 2022
** Cly
** File description:
** test_cly_strncmp.c
*/

#include "cly_string.h"
#include <criterion/criterion.h>

Test(cly_strncmp, test_cly_strncmp_1)
{
    char str1[] = "Hello";
    char str2[] = "Hello";
    int result;

    result = cly_strncmp(str1, str2, 3);
    cr_assert_eq(result, 0);
}

Test(cly_strncmp, test_cly_strncmp_2)
{
    char str1[] = "Helllllll";
    char str2[] = "Hello";
    int result;

    result = cly_strncmp(str1, str2, 3);
    cr_assert_eq(result, 0);
}

Test(cly_strncmp, test_cly_strncmp_3)
{
    char str1[] = "Helo";
    char str2[] = "Hello";
    int result;

    result = cly_strncmp(str1, str2, 4);
    cr_assert_eq(result, 1);
}

Test(cly_strncmp, test_cly_strncmp_4)
{
    char str1[] = "Helo";
    char *str2 = NULL;
    int result;

    result = cly_strncmp(str1, str2, 4);
    cr_assert_eq(result, -2);
}
