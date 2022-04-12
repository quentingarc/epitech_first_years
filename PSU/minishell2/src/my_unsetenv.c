/*
** EPITECH PROJECT, 2019
** PSU_minishell1_2019
** File description:
** my_unsetenv.c
*/

#include "my.h"

int max_env(char **truc)
{
    int max = 0;

    while (truc[max] != NULL) {
        max += 1;
    }
    return max;
}

char **copy_my_array(char **env, char **copy)
{
    int i = 0;

    while (env[i] != NULL) {
        copy[i] = my_strdup(env[i]);
        i = i + 1;
    }
    copy[i] = NULL;
    return (copy);
}

void management(int size, int max, minishell_t *shell, char **cmd_modif)
{
    char *new = malloc(sizeof(char *) * 10 + 1);
    char **unsetenv = malloc(sizeof(char *) *(max_env(shell->env) + 2));
    int i = 0;

    unsetenv = compare_bis(shell, cmd_modif);
    shell->env = malloc(sizeof(char *) * (max_env(unsetenv) + 1));
    shell->env = unsetenv;
}

int supp_env(minishell_t *shell, char **cmd_modif)
{
    int max = max_env(shell->env);
    int size = max_env(cmd_modif);

    if (size <= 1) {
        my_printf("unsetenv: Too few arguments.\n");
        return 84;
    }
    management(size, max, shell, cmd_modif);
    return 1;
}