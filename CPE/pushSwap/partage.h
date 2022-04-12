/*
** EPITECH PROJECT, 2019
** quentingarcia
** File description:
** my.h
*/

#ifndef MY_H
#define MY_H
#include <stdlib.h>
#include <stdio.h>

struct linkes_list
{
    int data;
    struct linkes_list *next;
    struct linkes_list *previous;
};
struct linkes_list *mails(int ac, char **av);
int my_pushswap(int ac, char **av);
int main(int ac, char **av);
int my_getnbr(char const *str);
void my_putchar(char c);
int my_put_nbr(int nb);
void create_list(struct linkes_list **list, int nb);
int my_putstr(char const *str);
void sa_swap(struct linkes_list **list);
#endif /*MY_H*/