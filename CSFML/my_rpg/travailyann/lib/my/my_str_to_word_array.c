/*
** EPITECH PROJECT, 2019
** day08
** File description:
** 09/10/19
*/

#include <stdlib.h>

int is_alphanum(char c);

int count_words(char const *str)
{
    int i = 1;
    int j = 0;

    if (str == NULL) {
        return (0);
    }
    while (str[i] != '\0') {
        if ((is_alphanum(str[i-1]) == 0) &&
        (is_alphanum(str[i]) == 1)) {
            ++j;
        }
        ++i;
    }
    return (j+1);
}

int jump_words(char const *str, int *i)
{
    if (str == NULL) {
        return (0);
    }
    while (str[*i] != '\0'){
        ++*i;
        if ((is_alphanum(str[*i-1]) == 0) &&
        (is_alphanum(str[*i]) == 1)) {
            return (*i);
        }
    }
    return (84);
}

int count_chars(char const *str, int *i)
{
    int j = 0;

    if (str == NULL) {
        return (0);
    }
    while (is_alphanum(str[*i]) == 1 && str[*i] != '\0') {
        ++*i;
        ++j;
    }
    return (j);
}

char **my_malloc(char const *str)
{
    int i = 0;
    int j = 0;
    char **word_array =
    malloc(sizeof(char *) * (count_words(str) + 1));

    if (word_array == NULL)
        return (NULL);
    if (is_alphanum(str[0]) == 0)
        jump_words(str, &i);
    while (j < count_words(str)) {
        word_array[j] = malloc(sizeof(char) * (count_chars(str, &i)+ 1));
        if (word_array[j] == NULL)
            return (NULL);
        jump_words(str, &i);
        ++j;
    }
    word_array[j] = NULL;
    return (word_array);
}

char **my_str_to_word_array(char const *str)
{
    char **word_array = my_malloc(str);
    int i = 0;
    int j = 0;
    int x = 0;

    if (is_alphanum(str[x]) == 0)
        jump_words(str, &x);
    while (word_array[i] != NULL) {
        while (str[x] != '\0' && is_alphanum(str[x]) == 1) {
            word_array[i][j] = str[x];
            ++j;
            ++x;
        }
        word_array[i][j] = '\0';
        jump_words(str, &x);
        j = 0;
        ++i;
    }
    return (word_array);
}
