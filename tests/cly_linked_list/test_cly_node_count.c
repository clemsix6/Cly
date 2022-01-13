/*
** EPITECH PROJECT, 2022
** Cly
** File description:
** test_cly_node_count.c
*/

#include "cly_linked_list.h"
#include <criterion/criterion.h>
#include <stdio.h>

Test(cly_node_count, test_cly_node_count_1)
{
    node_t *null_node = NULL;
    node_t **list = &null_node;
    char str1[] = "One";
    char str2[] = "Two";
    char str3[] = "Three";
    char str4[] = "Four";
    int count;

    cly_node_push_back(list, str1);
    cly_node_push_back(list, str2);
    cly_node_push_back(list, str3);
    cly_node_push_back(list, str4);

    count = cly_node_count(list);
    cr_assert_eq(count, 4);

    cly_node_destroy(list);
}

Test(cly_node_count, test_cly_node_count_2)
{
    node_t *null_node = NULL;
    node_t **list = &null_node;
    int count;

    count = cly_node_count(list);
    cr_assert_eq(count, 0);

    cly_node_destroy(list);
}

Test(cly_node_count, test_cly_node_count_3)
{
    node_t *null_node = NULL;
    node_t **list = &null_node;
    char str1[] = "One";
    int count;

    cly_node_push_back(list, str1);
    count = cly_node_count(list);
    cr_assert_eq(count, 1);

    cly_node_destroy(list);
}

Test(cly_node_count, test_cly_node_count_4)
{
    node_t **list = NULL;
    int count;

    count = cly_node_count(list);
    cr_assert_eq(count, -1);
    cly_node_destroy(list);
}