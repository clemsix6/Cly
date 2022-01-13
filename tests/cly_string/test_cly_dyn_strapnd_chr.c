/*
** EPITECH PROJECT, 2022
** Cly
** File description:
** test_cly_dyn_strapnd_chr.c
*/

#include "cly_string.h"
#include <criterion/criterion.h>

Test(cly_dyn_strapnd_chr, test_cly_dyn_strapnd_chr_1)
{
    char *str = NULL;

    cly_dyn_strapnd_chr(&str, 'a');
    cly_dyn_strapnd_chr(&str, 'b');
    cly_dyn_strapnd_chr(&str, 'c');
    cly_dyn_strapnd_chr(&str, 'd');

    cr_assert_str_eq(str, "abcd");
    free(str);
}

Test(cly_dyn_strapnd_chr, test_cly_dyn_strapnd_chr_2)
{
    char *str = malloc(4);
    cly_strcpy(str, "ABC");
    str[3] = 0;

    cly_dyn_strapnd_chr(&str, 'a');
    cly_dyn_strapnd_chr(&str, 'b');
    cly_dyn_strapnd_chr(&str, 'c');
    cly_dyn_strapnd_chr(&str, 'd');

    cr_assert_str_eq(str, "ABCabcd");
    free(str);
}