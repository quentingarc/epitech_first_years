/*
** EPITECH PROJECT, 2019
** PSU_minishell2_2019
** File description:
** compare.c
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

char **clean(char **unsetenv)
{
    char **unsetenvb = malloc(sizeof(char *) *(40));
    int i = 0;
    int ind = 0;

    while (unsetenv[i] != NULL) {
        if (my_strcmpbis(unsetenv[i], " \n") == 0) {
            unsetenvb[ind] = unsetenv[i];
            ind += 1;
        }
        i += 1;
    }
    return unsetenvb;
}

char **compare_bis(minishell_t *shell, char **cmd_modif)
{
    int ind = 0;
    int i = 0;
    char **unsetenv = malloc(sizeof(char *) *(40));

    while (shell->env[ind] != NULL) {
        unsetenv[ind] = shell->env[ind];
        ind += 1;
    }
    while (unsetenv[i] != NULL) {
        if (my_strcmp(unsetenv[i], cmd_modif[1]) == 0) {
            unsetenv[i] = "\0";
        }
        i += 1;
    }
    unsetenv = clean(unsetenv);
    return unsetenv;
}