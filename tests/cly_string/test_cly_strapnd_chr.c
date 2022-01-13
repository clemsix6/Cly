/*
** EPITECH PROJECT, 2022
** Cly
** File description:
** test_cly_strapnd_chr.c
*/

#include "cly_string.h"
#include <criterion/criterion.h>

Test(cly_strapnd_chr, test_cly_strapnd_chr_1)
{
    char str[] = "Hell";
    char *result;
    char c = 'o';

    result = cly_strapnd_chr(str, c);
    cr_assert_str_eq(result, "Hello");
}

Test(cly_strapnd_chr, test_cly_strapnd_chr_2)
{
    char *str = NULL;
    char *result;
    char c = 'o';

    result = cly_strapnd_chr(str, c);
    cr_assert_str_eq(result, "o");
}
