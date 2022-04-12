/*
** EPITECH PROJECT, 2019
** putstr_lib
** File description:
** Lib
*/

#include "my.h"

int my_ls(int ac, char **av)
{
    DIR *ls;
     struct stat dirfile;

    if (ac == 1)
        ls = opendir("./");
    else if (ac == 2 && av[1][0] != '-')
    {
        if (stat(av[1], &dirfile) == -1)
            return (84);
        if (ac == 2 && S_ISDIR(dirfile.st_mode))
            ls = opendir(av[1]);
        else
        {
            my_putstr(av[1]);
            my_putchar('\n');
            return (0);
        }
    }
    my_open(ac, av, ls);
    closedir(ls);
    return (0);
}

int my_open(int ac, char **av, DIR *ls)
{
    if (ls == NULL)
        return (84);
    struct dirent *read = readdir(ls);
    while (read != NULL)
    {
        if (read->d_name[0] != '.')
        {
            my_putstr(read->d_name);
            my_putchar('\n');
        }
        read = readdir(ls);
    }
    return (0);
}