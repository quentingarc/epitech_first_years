/*
** EPITECH PROJECT, 2019
** day08
** File description:
** 09/10/19
*/

#include <stdlib.h>
#include "my.h"

static int jump_words(char c, char const *str, int *i)
{
    while (str[*i] != '\0') {
        if ((((str[*i-1] > 126 || str[*i-1] < 32) || (c == str[*i-1]))
        && !((str[*i] > 126 || str[*i] < 32) || (c == str[*i])))) {
            return (*i);
        }
        ++*i;
    }
    return (84);
}

static int count_words(char c, char const *str)
{
    int i = 1;
    int j = 0;

    if ((str[i-1] > 126 || str[i-1] < 32 || c == str[i-1])) {
        jump_words(c, str, &i);
        ++i;
    }
    while (str[i] != '\0') {
        if (((str[i-1] > 126 || str[i-1] < 32) || (c == str[i-1]))
        && !((str[i] > 126 || str[i] < 32) || (c == str[i]))) {
            ++j;
        }
        ++i;
    }
    return (j+1);
}

static int count_chars(char c, char const *str, int *i)
{
    int j = 0;

    while (!((str[*i] > 126 || str[*i] < 32)
    || c == str[*i]) && str[*i] != '\0') {
        ++*i;
        ++j;
    }
    return (j);
}

static char **my_malloc(char c, char const *str)
{
    int i = 0;
    int j = 0;
    char **word_array =
    malloc(sizeof(char*) * (count_words(c, str) + 1));

    if (word_array == NULL)
        return (NULL);
    if (((str[0] > 126 || str[0] < 32) || c == str[0])) {
        ++i;
        jump_words(c, str, &i);
    }
    while (j < count_words(c, str)) {
        word_array[j] = malloc(sizeof(char) * (count_chars(c, str, &i) + 1));
        if (word_array[j] == NULL)
            return (NULL);
        jump_words(c, str, &i);
        ++j;
    }
    word_array[j] = NULL;
    return (word_array);
}

char **my_doubletab(char c, char const *str)
{
    char **word_array = NULL;
    int x = 0;

    if (!str || !(word_array = my_malloc(c, str))) {
        return (NULL);
    }
    if (((str[x] > 126 || str[x] < 32) || c == str[x])) {
        ++x;
        jump_words(c, str, &x);
    }
    fill_doubletab(c, word_array, str, x);
    return (word_array);
}
