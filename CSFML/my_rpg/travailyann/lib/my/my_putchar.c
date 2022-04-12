/*
** EPITECH PROJECT, 2019
** day07
** File description:
** 08/10/19
*/

#include <unistd.h>

void my_putchar(char c)
{
    write(1, &c, 1);
}
