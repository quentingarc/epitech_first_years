/*
** EPITECH PROJECT, 2019
** PSU_my_ls_2019
** File description:
** my.h
*/

#ifndef MY_H
#define MY_H

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

typedef struct minishell_s
{
    char **env;
    char *old;
    char *old_pwd;
} minishell_t;

                /*check error*/

minishell_t *create_my_struct(char **env);
int get_first_error(int ac, char **av, minishell_t *shell);

                /*minishell*/

int prepare_my_sh(minishell_t *shell);

                /*lib*/

int my_putstr(char const *str);
int my_putchar(char c);
int my_strcmp(char *str1, char *str2);
char **my_str_to_word_array(char *str);
char **my_str_to_word_array_bis(char *str);
int my_strlen(char const *str);
int nb_letter(char *str);
int my_strcmp(char *str1, char *str2);
char *my_strcat(char *dest, char *src, char c);
int my_strcmpbis(char *str1, char *str2);
char *my_strdupcd(char *str);
int calc_my_str_equal(char *str);
char **my_str_to_word_arrayt(char *str);
char *get_old_pwd(char **env);
char *my_strdupcdr(char *str);
int nb_letterr(char *str);

                /*my_printf*/

void my_flags(char options, va_list(flag));
void option_char(va_list options);
void option_nbr(va_list options);
void option_str(va_list options);
int my_printf(char *str, ...);
int my_put_nbr(int nb);

                /*build_cd*/

int build_cd(minishell_t *shell, char **cmd_modif);

                /*compare*/

char *compare(char *path);
char **compare_bis(minishell_t *shell, char **cmd_modif);

                /*key_board*/

char *prepare_my_env(minishell_t *shell);
char *get_cmd(char **exec, char *str);
void made_env(minishell_t *shell);

                /*made*/

int character_spe(char c);
int nb_word(char *str);
char **position(char *str);
int checkfinish(char *pa);
int array_size(char **str);

                /*my_cd*/

int my_cd(minishell_t *shell);
char **edit_my_env(minishell_t *shell, char *pa);
int my_c_d(minishell_t *shell, char **cmd_modif);
int my_cdfile(minishell_t *shell, char **cmd_modif);
int cd_return(minishell_t *shell, char **cmd_modif);

                /*my_env*/

int takes_env(minishell_t *shell, char **cmd_modif);
char **init_oldpwd(minishell_t *shell, char *pa);

                /*made_ls*/

char *my_strdup(char *str);
int made_ls(char **cmd_modif, minishell_t *shell);

                /*my_unsetenv*/

int supp_env(minishell_t *shell, char **cmd_modif);

#endif /*MY_H*/