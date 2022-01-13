/*
** EPITECH PROJECT, 2022
** Cly
** File description:
** test_cly_dyn_strnapnd_str.c
*/

#include "cly_string.h"
#include <criterion/criterion.h>

Test(cly_dyn_strnapnd_str, test_cly_dyn_strnapnd_str_1)
{
    char *str1 = NULL;
    char str2[] = "Hello World";

    cly_dyn_strnapnd_str(&str1, str2, 5);
    cr_assert_str_eq(str1, "Hello");
    free(str1);
}

Test(cly_dyn_strnapnd_str, test_cly_dyn_strnapnd_str_2)
{
    char *str = NULL;

    cly_dyn_strnapnd_str(&str, "Hello", 2);
    cly_dyn_strnapnd_str(&str, " World", 3);

    cr_assert_str_eq(str, "He Wo");
    free(str);
}