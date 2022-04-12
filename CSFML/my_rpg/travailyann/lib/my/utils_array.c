/*
** EPITECH PROJECT, 2019
** day08
** File description:
** 09/10/19
*/

#include <stdlib.h>
int is_alphanum(char c);

static int jump_words(char const *str, int *i)
{
    while (str[*i] != '\0'){
        if ((is_alphanum(str[*i-1]) == 0)
        && (is_alphanum(str[*i]) == 1)) {
            return (*i);
        }
        ++*i;
    }
    return (84);
}

static int jump_worda(char c, char const *str, int *i)
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

void fill_array(char **word_array, char const *str, int x)
{
    int i = 0;
    int j = 0;

    while (word_array[i] != NULL) {
        while (is_alphanum(str[x]) == 1) {
            word_array[i][j] = str[x];
            ++j;
            ++x;
        }
        word_array[i][j] = '\0';
        jump_words(str, &x);
        j = 0;
        ++i;
    }
}

void fill_doubletab(char c, char **word_array, char const *str, int x)
{
    int i = 0;
    int j = 0;

    while (word_array[i] != NULL) {
        while (!((str[x] > 126 || str[x] < 32) || c == str[x])) {
            word_array[i][j] = str[x];
            ++j;
            ++x;
        }
        word_array[i][j] = '\0';
        jump_worda(c, str, &x);
        j = 0;
        ++i;
        
    }
}