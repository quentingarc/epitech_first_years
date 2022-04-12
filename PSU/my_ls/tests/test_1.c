/*
** EPITECH PROJECT, 2019
** PSU_my_ls_2019
** File description:
** main.c
*/

#include<criterion/criterion.h>
#include <criterion/redirect.h>
#include "my.h"
//Test(my_strlen, valid_test);

void redirect_all_stdout(void)
{
    cr_redirect_stdout();
    cr_redirect_stderr();
}

Test(my_ls, ls_a_dir, .init = redirect_all_stdout)
{
    char *str[2] = {"./my_ls", "include"};
    my_ls(2, str);
    cr_assert_stdout_eq_str("my.h\n");
}

Test(my_ls, ls_a_file, .init = redirect_all_stdout)
{
    char *str[2] = {"./my_ls", "Makefile"};
    my_ls(2, str);
    cr_assert_stdout_eq_str("Makefile\n");
}

Test(my_open, open_null, .init = redirect_all_stdout)
{
    char *str[2] = {"./my_ls", "src"};
    int error = my_open(2, str, NULL);
    cr_assert_eq(error, 84);
}