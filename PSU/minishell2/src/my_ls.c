/*
** EPITECH PROJECT, 2019
** PSU_minishell1_2019
** File description:
** my_ls.c
*/

#include "my.h"

char *my_strdup(char *str)
{
    char *cpy = malloc(sizeof(char) * (my_strlen(str) + 1));
    int i = 0;

    while (str[i] != '\0') {
        cpy[i] = str[i];
        i = i + 1;
    }
    cpy[i] = '\0';
    return (cpy);
}

int made_ls(char **cmd_modif, minishell_t *shell)
{
    pid_t pid;
    char **exec = my_str_to_word_arrayt(prepare_my_env(shell));
    char *cmd = get_cmd(exec, cmd_modif[0]);
    int wstatus;

    cmd_modif[0] = my_strdup(cmd);
    pid = fork();
    if (pid == 0) {
    if (access(cmd_modif[0], F_OK) != -1) {
            execve(cmd_modif[0], &cmd_modif[0], shell->env);
        } else
            return 84;
    } else
        wait(NULL);
    return 1;
}