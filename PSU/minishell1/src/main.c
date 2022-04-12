/*
** EPITECH PROJECT, 2019
** PSU_my_ls_2019
** File description:
** main.c
*/

#include "my.h"

int main(int ac, char **av, char **env)
{

    int error = 0;
    minishell_t *shell = malloc(sizeof(minishell_t));

    shell = create_my_struct(env);
    error = get_first_error(ac, av, shell);
    if (error == 84)
        return (84);
    else
        if (prepare_my_sh(shell) == 84)
            return 84;
    return (0);
}