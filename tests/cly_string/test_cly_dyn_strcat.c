/*
** EPITECH PROJECT, 2022
** Cly
** File description:
** test_cly_dyn_strcat.c
*/

#include "cly_string.h"
#include <criterion/criterion.h>

Test(cly_dyn_strcat, test_cly_dyn_strcat_1)
{
    char str1[] = "Hello";
    char str2[] = " World !";
    char *result;

    result = cly_dyn_strcat(str1, str2);
    cr_assert_str_eq(result, "Hello World !");
}

Test(cly_dyn_strcat, test_cly_dyn_strcat_2)
{
    char str1[] = "Hello";
    char *str2 = NULL;
    char *result;

    result = cly_dyn_strcat(str1, str2);
    cr_assert_eq(result, NULL);
}

Test(cly_dyn_strcat, test_cly_dyn_strcat_3)
{
    char *str1 = NULL;
    char str2[] = " World !";
    char *result;

    result = cly_dyn_strcat(str1, str2);
    cr_assert_eq(result, NULL);
}

Test(cly_dyn_strcat, test_cly_dyn_strcat_4)
{
    char *str1 = NULL;
    char *str2 = NULL;
    char *result;

    result = cly_dyn_strcat(str1, str2);
    cr_assert_eq(result, NULL);
}