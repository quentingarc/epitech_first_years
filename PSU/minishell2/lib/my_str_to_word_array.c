/*
** EPITECH PROJECT, 2019
** my
** File description:
** my_str_to_word_array.c
*/

#include "my.h"

char **my_str_to_word_array(char *str)
{
    int x = 0;
    int y = 0;
    int i = 5;
    int len = my_strlen(str);
    char **board = malloc(sizeof(char *) * len + 1);

    while (str[i] != '\0')
    {
        x = 0;
        board[y] = malloc(sizeof(char *) * len + 1);
        while (str[i] != '=' && str[i] != ':' && board[y] != NULL) {
            board[y][x] = str[i];
            i = i + 1;
            x = x + 1;
        }
        y = y + 1;
        i = i + 1;
    }
    board[calc_my_str_equal(str) + 1] = NULL;
    return (board);
}

int calc_my_str_equal(char *str)
{
    int i = 0;
    int ind = 0;

    while (str[i] != '\0')
    {
        if (str[i] == ':')
            ind = ind + 1;
        i++;
    }
    return (ind);
}

char **my_str_to_word_array_bis(char *str)
{
    int x = 0;
    int y = 0;
    int i = 4;
    int len = my_strlen(str);
    char **board = malloc(sizeof(char *) * len + 1);

    while (str[i] != '\0')
    {
        x = 0;
        board[y] = malloc(sizeof(char *) * len + 1);
        while (str[i] != '=' && str[i] != ':' && board[y] != NULL) {
            board[y][x] = str[i];
            i = i + 1;
            x = x + 1;
        }
        y = y + 1;
        i = i + 1;
    }
    board[calc_my_str_equal(str) + 1] = NULL;
    return (board);
}

char **my_str_to_word_arrayt(char *str)
{
    int x = 0;
    int y = 0;
    int i = 5;
    int len = my_strlen(str);
    char **board = malloc(sizeof(char *) * len + 1);
    while (str[i] != '\0')
    {
        x = 0;
        board[y] = malloc(sizeof(char *) * len + 1);
        while (str[i] != '=' && str[i] != ':' && str[i] != '\0' &&
        board[y] != NULL) {
            board[y][x] = str[i];
            i = i + 1;
            x = x + 1;
        }
        y = y + 1;
        i = i + 1;
    }
    board[calc_my_str_equal(str) + 1] = NULL;
    return (board);
}

char *get_old_pwd(char **env)
{
    int i = -1;
    int j = 7;
    int inc = 0;
    char *path;

    while (env[++i])
        if (env[i][0] == 'O' && env[i][1] == 'L'
        && env[i][2] == 'D' && env[i][3] == 'P'){
            if ((path = malloc(sizeof(char) *
            (my_strlen(env[i] + 7) + 1))) == NULL)
                return (0);
            while (env[i][j]){
                path[inc++] = env[i][j++];
            }
            path[inc] = 0;
        }
    return (path);
}