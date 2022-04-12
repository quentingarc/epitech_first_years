/*
** EPITECH PROJECT, 2019
** CPE_lemin_2019
** File description:
** algor.c
*/

#include "my.h"

typedef struct s_link {
    int name;
    int start;
    int end;
    char *list;
}link_t;

typedef struct s_recup {
    char visited;
    link_t *link;
    struct recup_s *next;
}recup_t;

int dijkstra(void)
{
    recup_t *list;
    recup_t *tmp = list;
    recup_t *start = NULL;
    recup_t *end = NULL;

    while (tmp->next != NULL)
    {
        if (tmp->spe == 1) {
            start = tmp;
        }
        if (tmp->spe == -1) {
            end = tmp;
        }
        tmp = tmp->next;
    }
    recup_t *current = start;

    while (toute casse non visité)
    {
        link_t *tmp = current->link;

        while (tmp->next != NULL) {
            recup_t *found = find_cell_by_name(tmp->name);
            if (current->value + 1 < found->value) {
                found->value = current->value + 1;
            }
        }
        tmp = tmp->next;
        current->visited = 1;
        current = find_unvisited_cell(list);
    }
    recup_t *out = init(end);
    while (out->name != start->name)
        while (out->link)
            recup_t *recup = find_cend_by_name(link->name);
        recup_t *min;
        add(&out, min);
    return 0;
}
