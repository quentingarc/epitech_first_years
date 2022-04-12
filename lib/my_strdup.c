/*
** EPITECH PROJECT, 2019
** my
** File description:
** my_str_cmp.c
*/

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

int