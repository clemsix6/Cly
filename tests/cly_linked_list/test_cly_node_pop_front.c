/*
** EPITECH PROJECT, 2022
** Cly
** File description:
** test_cly_node_pop_front.c
*/

#include "cly_linked_list.h"
#include <criterion/criterion.h>
#include <stdio.h>

Test(cly_node_pop_front, test_cly_node_pop_front_1)
{
    node_t *null_node = NULL;
    node_t **list = &null_node;
    node_t *popped;
    char str1[] = "One";
    char str2[] = "Two";
    char str3[] = "Three";
    char str4[] = "Four";

    cly_node_push_front(list, str1);
    cly_node_push_front(list, str2);
    cly_node_push_front(list, str3);
    cly_node_push_front(list, str4);

    popped = cly_node_pop_front(list);

    cr_assert_str_eq(popped->value, str4);
    cr_assert_str_eq((*list)->value, str3);
    cr_assert_str_eq((*list)->next->value, str2);
    cr_assert_str_eq((*list)->next->next->value, str1);

    cly_node_destroy(list);
    free(popped);
}

Test(cly_node_pop_front, test_cly_node_pop_front_2)
{
    node_t *null_node = NULL;
    node_t **list = &null_node;
    node_t *popped;
    char str1[] = "One";

    cly_node_push_front(list, str1);
    popped = cly_node_pop_front(list);

    cr_assert_str_eq(popped->value, str1);
    cr_assert_eq((*list), NULL);

    cly_node_destroy(list);
    free(popped);
}

Test(cly_node_pop_front, test_cly_node_pop_front_3)
{
    node_t **list = NULL;
    node_t *popped;

    popped = cly_node_pop_front(list);
    cr_assert_eq(popped, NULL);

    cly_node_destroy(list);
}