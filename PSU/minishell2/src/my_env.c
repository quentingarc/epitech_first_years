/*
** EPITECH PROJECT, 2019
** PSU_minishell1_2019
** File description:
** my_env.c
*/

#include "my.h"

char **edit_my_unsetenv(minishell_t *shell, char *pa)
{
    int ind = 0;
    int in = 0;

    while (shell->env[ind] != NULL) {
        ind = ind + 1;
    }
    shell->env[ind] = pa;
    shell->env[ind + 1] = NULL;
    return shell->env;
}

int my_str_isalphanumeric(char *str)
{
    int i = 0;

    while (str[i] != '\0'){
        if ((str[i] >= 'a' && str[i] <= 'z') ||
        (str[i] >= 'A' && str[i] <= 'Z'))
            i = i + 1;
        else
            return (0);
    }
    return (1);
}

char *madee_env(minishell_t *shell, char **cmd_modif)
{
    char *result = malloc(sizeof(char *) * 39 + 2);
    int i = 1;
    int y = 0;
    int x = 0;

    while (cmd_modif[i] != NULL) {
        while (cmd_modif[i][x] != '\0') {
            result[y] = cmd_modif[i][x];
            x += 1;
            y += 1;
        }
        if (cmd_modif[i + 1] != NULL || array_size(cmd_modif) == 2) {
            result[y] = '=';
            y += 1;
        }
        i += 1;
        x = 0;
    }
    return result;
}

int takes_env(minishell_t *shell, char **cmd_modif)
{
    char *result = malloc(sizeof(char *) * 39 + 2);

    if (cmd_modif[1] == NULL) {
        made_env(shell);
        return 1;
    }
    if (my_str_isalphanumeric(cmd_modif[1]) == 0) {
        my_printf("setenv: Variable name must begin with a letter.\n");
        return 84;
    }
    result = madee_env(shell, cmd_modif);
    edit_my_unsetenv(shell, result);
    return 1;
}

char **init_oldpwd(minishell_t *shell, char *pa)
{
    int ind = 0;

    while (shell->env[ind] != NULL) {
        if (my_strcmp(shell->env[ind], "OLDPWD") == 0)
            break;
        ind = ind + 1;
    }
    shell->env[ind] = pa;
    return shell->env;
}