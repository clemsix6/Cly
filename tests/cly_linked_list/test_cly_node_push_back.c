/*
** EPITECH PROJECT, 2022
** Cly
** File description:
** test_cly_node_push_back.c
*/

#include "cly_linked_list.h"
#include <criterion/criterion.h>
#include <stdio.h>

Test(cly_node_push_back, test_cly_node_push_back_1)
{
    node_t *null_node = NULL;
    node_t **list = &null_node;
    char str1[] = "One";
    char str2[] = "Two";
    char str3[] = "Three";
    char str4[] = "Four";

    cly_node_push_back(list, str1);
    cly_node_push_back(list, str2);
    cly_node_push_back(list, str3);
    cly_node_push_back(list, str4);

    cr_assert_str_eq((*list)->value, str1);
    cr_assert_str_eq((*list)->next->value, str2);
    cr_assert_str_eq((*list)->next->next->value, str3);
    cr_assert_str_eq((*list)->next->next->next->value, str4);

    cly_node_destroy(list);
}
