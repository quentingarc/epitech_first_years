/*
** EPITECH PROJECT, 2019
** lib_strlen
** File description:
** Lib
*/

#include "my.h"

int my_strlen(char const *str)
{
    int i = 0;

    while (str[i] != '\0') {
        i = i + 1;
    }
    return (i);
}

int nb_letter(char *str)
{
    int ind = 0;
    int letter = 1;
    while (str[ind] != '=') {
        letter += 1;
        ind += 1;
    }
    return letter;
}

char *my_strdupcd(char *str)
{
    char *cpy = malloc(sizeof(char) * (my_strlen(str) + 1));
    int i = nb_letter(str);
    int x = 0;

    while (str[i] != '\0') {
        cpy[x] = str[i];
        i = i + 1;
        x += 1;
    }
    cpy[i] = '\0';
    return (cpy);
}

int nb_letterr(char *str)
{
    int y = my_strlen(str);
    int letter = my_strlen(str);

    while (str[y] != '/') {
        y -= 1;
        letter -= 1;
    }
    return letter;
}

char *my_strdupcdr(char *str)
{
    char *cpy = malloc(sizeof(char) * (nb_letterr(str) + 1));
    int i = 4;
    int x = 0;
    int y = 0;

    while (i != nb_letterr(str)) {
        cpy[x] = str[i];
        i += 1;
        x += 1;
    }
    if (my_strcmpbis(cpy, "PWD=\n") == 1)
        cpy = "/\0";
    else
        cpy[i] = '\0';
    return (cpy);
}