/*
** EPITECH PROJECT, 2022
** Cly
** File description:
** test_cly_strrplc_str.c
*/

#include "cly_string.h"
#include <criterion/criterion.h>

Test(cly_strrplc_str, test_cly_strrplc_str_1)
{
    char str[] = "Hello World";
    char *result;

    result = cly_strrplc_str(str, "World", "Everybody");
    cr_assert_str_eq(result, "Hello Everybody");
    free(result);
}

Test(cly_strrplc_str, test_cly_strrplc_str_2)
{
    char str[] = "abbaababaaaabababababaabbabbaaaaabb";
    char *result;

    result = cly_strrplc_str(str, "ab", "[AB]");
    cr_assert_str_eq(result, "[AB]ba[AB][AB]aaa[AB][AB][AB][AB][AB]a[AB]b[AB]baaaa[AB]b");
    free(result);
}

Test(cly_strrplc_str, test_cly_strrplc_str_3)
{
    char str[] = "";
    char *result;

    result = cly_strrplc_str(str, "ab", "[AB]");
    cr_assert_str_eq(result, "");
    free(result);
}

Test(cly_strrplc_str, test_cly_strrplc_str_4)
{
    char *str = NULL;
    char *result;

    result = cly_strrplc_str(str, "ab", "[AB]");
    cr_assert_eq(result, NULL);
    free(result);
}