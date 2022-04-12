/*
** EPITECH PROJECT, 2019
** PSU_minishell1_2019
** File description:
** my_unsetenv.c
*/

#include "my.h"

char *compare(char *path)
{
    int ind = 0;
    char *save = malloc(sizeof(char *) * my_strlen(path) + 1);

    while (path[ind] != '=') {
        save[ind] = path[ind];
        ind = ind + 1;
    }
    return save;
}

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

int supp_env(minishell_t *shell, char **cmd_modif)
{
    int max = max_env(shell->env);
    int size = max_env(cmd_modif);
    char *new = malloc(sizeof(char *) * 10 + 1);
    char **unsetenv = malloc(sizeof(char *) *(max_env(shell->env) + 2));
    copy_my_array(shell->env, unsetenv);
    if (size == 3) {
        unsetenv[max - 1] = NULL;
        shell->env = malloc(sizeof(char *) * (max_env(unsetenv) + 1));
        copy_my_array(unsetenv, shell->env);
    }
    new = compare(unsetenv[max - 1]);
    if (my_strcmpbis(new, cmd_modif[1]) == 1) {
        unsetenv[max - 1] = NULL;
        shell->env = malloc(sizeof(char *) * (max_env(unsetenv) + 1));
        copy_my_array(unsetenv, shell->env);
    } else {
        unsetenv[max + 1] = NULL;
        shell->env = malloc(sizeof(char *) * (max_env(unsetenv) + 1));
        copy_my_array(unsetenv, shell->env);
    }
    if (size <= 1) {
        my_printf("unsetenv: Too few arguments.\n");
        return 84;
    }
    return 1;
}