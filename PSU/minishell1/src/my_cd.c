/*
** EPITECH PROJECT, 2019
** PSU_minishell1_2019
** File description:
** my_cd.c
*/

#include "my.h"

int my_cd(minishell_t *shell)
{
    int ind = 0;
    char *pa = NULL;
    char current[159];
    size_t len = 159;

    getcwd(current, len);
    shell->old = my_strdup(current);

    while (shell->env[ind] != NULL) {
        if (my_strcmp(shell->env[ind], "HOME") == 0)
            break;
        ind = ind + 1;
    }
    pa = my_strdupcd(shell->env[ind]);
    chdir(pa);
    shell->old = my_strdup(current);
    shell->old_pwd = my_strdup(current);
    edit_my_env(shell, my_strcat("PWD", pa, '='));
    return (1);
}

char **edit_my_env(minishell_t *shell, char *pa)
{
    int ind = 0;

    while (shell->env[ind] != NULL) {
        if (my_strcmp(shell->env[ind], "PWD") == 0)
            break;
        ind = ind + 1;
    }
    shell->env[ind] = pa;
    return shell->env;
}

int my_c_d(minishell_t *shell, char **cmd_modif)
{
    char current[159];
    size_t len = 159;

    getcwd(current, len);
    if (cmd_modif[1][0] == '-')
        chdir(shell->old_pwd);
    edit_my_env(shell, my_strcat("PWD", shell->old_pwd, '='));
    shell->old_pwd = my_strdup(current);
    return 1;
}

int my_cdfile(minishell_t *shell, char **cmd_modif)
{
    char current[159];
    size_t len = 159;
    int ind = 4;
    char *pa = NULL;

    getcwd(current, len);
    while (shell->env[ind] != NULL) {
        if (my_strcmp(shell->env[ind], "PWD") == 0)
            break;
        ind += 1;
    }
    pa = my_strdupcd(shell->env[ind]);
    pa = my_strcat(pa, cmd_modif[1], '/');
    if (chdir(pa) != 0)
        my_printf("%s: Not a directory.\n", cmd_modif[1]);
    edit_my_env(shell, my_strcat("PWD", pa, '='));
        shell->old = my_strdup(current);
        shell->old_pwd = my_strdup(current);
    return 1;
}

int cd_return(minishell_t *shell, char **cmd_modif)
{
    char current[159];
    size_t len = 159;
    int ind = 4;
    char *pa = NULL;

    getcwd(current, len);
    while (shell->env[ind] != NULL) {
        if (my_strcmp(shell->env[ind], "PWD") == 0)
            break;
        ind += 1;
    }
    pa = my_strdupcdr(shell->env[ind]);
    chdir(pa);
    edit_my_env(shell, my_strcat("PWD", pa, '='));
        shell->old = my_strdup(current);
        shell->old_pwd = my_strdup(current);

    return 0;
}