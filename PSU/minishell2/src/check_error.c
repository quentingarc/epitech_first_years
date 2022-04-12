/*
** EPITECH PROJECT, 2019
** PSU_minishell1_2019
** File description:
** check_error.c
*/

#include "my.h"

int get_first_error(int ac, char **av, minishell_t *shell)
{
    if (ac != 1)
        return 84;
    return (0);
}

minishell_t *create_my_struct(char **env)
{
    minishell_t *shell = malloc(sizeof(minishell_t));

    if (shell == NULL)
        return (NULL);
    shell->env = env;
    shell->old = NULL;
    shell->old_pwd = get_old_pwd(env);
    return (shell);
}