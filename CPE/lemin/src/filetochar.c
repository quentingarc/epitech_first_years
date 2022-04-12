/*
** EPITECH PROJECT, 2019
** CPE_lemin_2019
** File description:
** file.c
*/

#include "my.h"

int print_input(char **test)
{
    int i = 0;

    while (test[i] != NULL){
        my_printf("%s\n", test[i]);
        i = i + 1;
    }
    return (0);
}

char *getline_file(void)
{
    size_t size = 10;
    char *stock = malloc(sizeof(char) * size + 1);
    char *new = "\0";

    while (getline(&stock, &size, stdin) != -1)
    {
        new = my_strcat(new, stock);
        if (new == NULL)
            return (NULL);
    }
    return (new);
}

char *my_strcat(char *dest, char const *src)
{
    int i = 0;
    int j = 0;
    int dest_len = my_strlen(dest);
    int src_len = my_strlen(src);
    char *res = malloc(sizeof(char) * (dest_len + src_len) + 1);

    if (dest != NULL){
        while (dest[i] != '\0') {
            res[i] = dest[i];
            i = i + 1;
        }
    }
    while (src[j] != '\0'){
        res[i] = src[j];
        i = i + 1;
        j = j + 1;
    }
    res[i] = '\0';
    return (res);
}