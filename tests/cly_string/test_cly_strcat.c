/*
** EPITECH PROJECT, 2022
** Cly
** File description:
** test_cly_strcat.c
*/

#include "cly_string.h"
#include <criterion/criterion.h>

Test(cly_strcat, test_cly_strcat_1)
{
    char str1[50] = "Hello";
    char str2[] = " World !";
    int ret_code;

    ret_code = cly_strcat(str1, str2);
    cr_assert_str_eq(str1, "Hello World !");
    cr_assert_eq(ret_code, 0);
}

Test(cly_strcat, test_cly_strcat_2)
{
    char str1[50] = "Hello";
    char *str2 = NULL;
    int ret_code;

    ret_code = cly_strcat(str1, str2);
    cr_assert_str_eq(str1, "Hello");
    cr_assert_eq(ret_code, -1);
}

Test(cly_strcat, test_cly_strcat_3)
{
    char *str1 = NULL;
    char str2[] = " World !";
    int ret_code;

    ret_code = cly_strcat(str1, str2);
    cr_assert_str_eq(str2, " World !");
    cr_assert_eq(str1, NULL);
    cr_assert_eq(ret_code, -1);
}

Test(cly_strcat, test_cly_strcat_4)
{
    char *str1 = NULL;
    char *str2 = NULL;
    int ret_code;

    ret_code = cly_strcat(str1, str2);
    cr_assert_eq(str1, NULL);
    cr_assert_eq(str2, NULL);
    cr_assert_eq(ret_code, -1);
}