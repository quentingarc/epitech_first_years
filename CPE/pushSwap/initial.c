/*
** EPITECH PROJECT, 2019
** CPE_pushswap_2019
** File description:
** initial.c
*/

#include "partage.h"

int my_pushswap(int ac, char **av)
{
    struct linkes_list *list_l_a = mails(ac, av);
    struct linkes_list *list_l_b = NULL;

    sa_swap(&list_l_a);
    my_putchar('\n');
    while (list_l_a != NULL)
    {
        my_put_nbr(list_l_a->data);
        my_putchar('\n');
        list_l_a = list_l_a->next;
    }
    return 0;
}

struct linkes_list *mails(int ac, char **av)
{
    struct linkes_list *list = NULL;
    int cmpt = ac - 1;

    while (cmpt != 0)
    {
        create_list(&list, my_getnbr(av[cmpt]));
        cmpt = cmpt - 1;
    }
    return (list);
}

void create_list(struct linkes_list **list, int nb)
{
    if (*list == NULL)
    {
        struct linkes_list *solo = malloc(sizeof(struct linkes_list));
        solo->data = nb;
        solo->next = NULL;
        solo->previous = NULL;
        *list = solo;
    }
    else
    {
        struct linkes_list *many = malloc(sizeof(struct linkes_list));
        many->data = nb;
        many->next = *list;
        many->previous = NULL;
        (*list)->previous = many;
        *list = many;
    }
}


