/*
** EPITECH PROJECT, 2019
** CPE_pushswap_2019
** File description:
** my_putchar.c
*/

#include "partage.h"
#include <unistd.h>

void my_putchar(char c)
{
    write (1, &c, 1);
}