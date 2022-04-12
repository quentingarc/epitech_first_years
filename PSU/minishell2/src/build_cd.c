/*
** EPITECH PROJECT, 2019
** PSU_minishell2_2019
** File description:
** build_cd.c
*/

#include "my.h"

int build_cdb(minishell_t *shell, char **cmd_modif)
{
        if (my_strcmpbis(cmd_modif[0], "cd\n") == 1 &&
    (my_strcmpbis(cmd_modif[1], "-\n") == 1)) {
        if (array_size(cmd_modif) != 2) {
            my_printf("cd: string not in pwd: -\n");
            return 1;
        }
        my_c_d(shell, cmd_modif);
        return 1;
    }
    if (my_strcmpbis(cmd_modif[0], "cd\n") == 1 &&
    array_size(cmd_modif) == 2 && my_strcmpbis(cmd_modif[1], "..\n") == 0) {
        my_cdfile(shell, cmd_modif);
        return 1;
    }
    printf("cvb\n");
    return 0;
}

int build_cd(minishell_t *shell, char **cmd_modif)
{
    if (my_strcmpbis(cmd_modif[0], "cd\n") == 1 &&
    my_strcmp(cmd_modif[1], "..\n") == 1) {
    printf("zefgh\n");
        if (array_size(cmd_modif) != 2) {
            my_printf("cd: string not in pwd: ..\n");
            return 1;
        }
        cd_return(shell, cmd_modif);
        return 1;
    }
    if (my_strcmpbis(cmd_modif[0], "cd\n") == 1 &&
    array_size(cmd_modif) == 1) {
        my_cd(shell);
        return 1;
    }
    if (build_cdb(shell, cmd_modif) == 1)
        return 1;
    return 0;
}