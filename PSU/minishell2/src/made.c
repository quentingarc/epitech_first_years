/*
** EPITECH PROJECT, 2019
** putchar_lib
** File description:
** Lib
*/

#include "my.h"

int character_spe(char c)
{
    if ((c >= '0' && c <= '9') ||
    (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') ||
    c == '-' || c == '.' || c == '_' || c == '/')
        return (1);
    else
        return (0);
}

int nb_word(char *str)
{
    int ind = 0;
    int word = 0;

    while (str[ind] != '\0') {
        if (character_spe(str[ind]) == 1)
            word += 1;
        while (character_spe(str[ind]) == 1 && str[ind] != '\0')
            ind += 1;
        if (str[ind] != '\0')
            ind += 1;
    }
    return (word);
}

char **position(char *str)
{
    char **tab = malloc(sizeof(char *) * (nb_word(str) + 1));
    int ind = 0;
    int i = 0;
    int x = 0;

    while (ind != nb_word(str)) {
        x = 0;
        while (character_spe(str[i]) == 0)
            i += 1;
        tab[ind] = malloc(sizeof(char) * (my_strlen(str) + 1));
        while (character_spe(str[i]) == 1) {
            tab[ind][x] = str[i];
            x += 1;
            i += 1;
        }
        tab[ind][x] = '\0';
        ind += 1;
    }
    tab[ind] = NULL;
    return (tab);
}

int array_size(char **str)
{
    int i = 0;

    while (str[i] != NULL)
        i = i + 1;
    return (i);
}

int checkfinish(char *pa)
{
    int i = 0;
    int nb = 0;

    while (pa[i] != '\0') {
        if (pa[i] == '/')
        nb += 1;
        i += 1;
    }
    return nb;
}