/*
** EPITECH PROJECT, 2019
** putchar_lib
** File description:
** Lib
*/

//#include "my.h"
#include <unistd.h>

void my_putchar(char c)
{
    write (1, &c, 1);
}