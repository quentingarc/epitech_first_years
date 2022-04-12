/*
** EPITECH PROJECT, 2019
** PSU_minishell1_2019
** File description:
** minishell.c
*/

#include "my.h"

int build_env(minishell_t *shell, char **cmd_modif)
{
    if (my_strcmpbis(cmd_modif[0], "env\n") == 1) {
        made_env(shell);
        return (1);
    }
    if (my_strcmpbis(cmd_modif[0], "setenv\n") == 1) {
        if (array_size(cmd_modif) <= 3)
            takes_env(shell, cmd_modif);
        else
            my_printf("setenv: Too many arguments.\n");
        return 1;
    }
    if (my_strcmpbis(cmd_modif[0], "unsetenv\n") == 1) {
        supp_env(shell, cmd_modif);
        return 1;
    }
    return (0);
}

int my_builtin(minishell_t *shell, char **cmd_modif)
{
    int since = 0;

    if (build_cd(shell, cmd_modif) == 1)
        return 1;
    else if (build_cd(shell, cmd_modif) == 2)
        return 0;
    if (my_strcmpbis(cmd_modif[0], "exit\n") == 1)
        exit(0);
    if (cmd_modif[0] == NULL)
        return (1);
    if (build_env(shell, cmd_modif) == 1)
        return 1;
    if (made_ls(cmd_modif, shell) == 1)
        return (1);
    return (0);
}

int prepare_my_sh(minishell_t *shell)
{
    size_t bufsize = 44;
    int back = 1;
    char *cmd = (char *)malloc(bufsize * sizeof(char));
    char **cmd_modif = NULL;

    while (1)
    {
        my_putstr("\033[1;32m➜ \033[1;36m~\033[0m");
        if (getline(&cmd, &bufsize, stdin) == EOF)
            break;
        cmd_modif = position(cmd);
        if (my_builtin(shell, cmd_modif) == 0)
            back = 0;
        if (back == 0) {
            write(1, cmd, my_strlen(cmd) - 1);
            my_printf(": Command not found.\n");
            back = 1;
            return 84;
        }
    } return (0);
}