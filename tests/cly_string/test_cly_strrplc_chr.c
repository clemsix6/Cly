/*
** EPITECH PROJECT, 2022
** Cly
** File description:
** test_cly_strrplc_chr.c
*/

#include "cly_string.h"
#include <criterion/criterion.h>

Test(cly_strrplc_chr, test_cly_strrplc_chr_1)
{
    char str[] = "Hello World";
    char *result;

    result = cly_strrplc_chr(str, 'l', '#');
    cr_assert_str_eq(result, "He##o Wor#d");
    free(result);
}

Test(cly_strrplc_chr, test_cly_strrplc_chr_2)
{
    char str[] = "Hello World";
    char *result;

    result = cly_strrplc_chr(str, 'c', '#');
    cr_assert_str_eq(result, "Hello World");
    free(result);
}

Test(cly_strrplc_chr, test_cly_strrplc_chr_3)
{
    char *str = NULL;
    char *result;

    result = cly_strrplc_chr(str, 'c', '#');
    cr_assert_eq(result, NULL);
}