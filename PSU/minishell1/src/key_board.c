/*
** EPITECH PROJECT, 2019
** PSU_minishell1_2019
** File description:
** key_board.c
*/

#include "my.h"

char *prepare_my_env(minishell_t *shell)
{
    int ind = 0;
    char *pa = NULL;

    while (shell->env[ind] != NULL) {
        if (my_strcmp(shell->env[ind], "PATH") == 0)
            break;
        ind = ind + 1;
    }
    pa = my_strdup(shell->env[ind]);
    return pa;
}

char *get_cmd(char **exec, char *str)
{
    int i = 0;
    char *get = NULL;

    while (exec[i] != NULL) {
        get = my_strcat(exec[i], str, '/');
        if (access(get, F_OK) == 0)
            return (get);
        i = i + 1;
    }
    return (get);
}

void made_env(minishell_t *shell)
{
    int ind = 0;

    while (shell->env[ind] != NULL) {
        my_printf("%s\n", shell->env[ind]);
        ind += 1;
    }
}