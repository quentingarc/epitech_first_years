/*
** EPITECH PROJECT, 2019
** CPE_pushswap_2019
** File description:
** pushswap.c
*/

#include "partage.h"

void sa_swap(struct linkes_list **list)
{
    struct linkes_list *node1 = *list;
    struct linkes_list *node2 = node1->next;

    node1->next = node2->next;
    node1->previous = node2;
    node2->next = node1;
    node2->previous = NULL;
    node1->next->previous = node1;
    *list = node2;
    my_putstr("sa");
}