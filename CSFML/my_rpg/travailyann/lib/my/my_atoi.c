/*
** EPITECH PROJECT, 2020
** yoyo
** File description:
** jaimelesgow
*/

int my_atoi(char *str)
{
    int x = 0;

    while (*str) {
        if (*str >= '0' && *str <= '9') {
            x *= 10;
            x += *str - '0';
        } else {
            return (x);
        }
        str++;
    }
    return (x);
}