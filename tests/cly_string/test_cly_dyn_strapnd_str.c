/*
** EPITECH PROJECT, 2022
** Cly
** File description:
** test_cly_dyn_strapnd_str.c
*/

#include "cly_string.h"
#include <criterion/criterion.h>

Test(cly_dyn_strapnd_str, test_cly_dyn_strapnd_str_1)
{
    char *str = NULL;

    cly_dyn_strapnd_str(&str, "Hello");
    cly_dyn_strapnd_str(&str, " ");
    cly_dyn_strapnd_str(&str, "World");
    cly_dyn_strapnd_str(&str, " ");
    cly_dyn_strapnd_str(&str, "!!!!");

    cr_assert_str_eq(str, "Hello World !!!!");
    free(str);
}