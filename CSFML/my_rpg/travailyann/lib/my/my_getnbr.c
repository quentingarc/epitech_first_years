/*
** EPITECH PROJECT, 2019
** day04
** File description:
** 03/10/19
*/

int my_getnbr(char const *str)
{
    int i = 0;
    int j = 0;
    unsigned int nb = 0;
    int signe = 1;

    while (str && str[i] != '\0' && (str[i] < '0' || str[i] > '9')
        && ((str && str[i] != '-') || (str && str[i] != '+')))
        ++i;
    if (i > 0 && ((str && str[i-1] == '-') || (str && str[i-1] == '+')))
        j = (i > 0 ? 0 : i - 1);
    while ((str && str[j] == '-') || (str && str[j] == '+')) {
        if (str && str[j] == '-')
            signe = signe * (-1);
        --j;
    } while (str && str[i] >= '0' && (str && str[i] <= '9')) {
        nb = nb * 10;
        nb = nb + (str[i] - '0');
        ++i;
        if (nb > 2147483647 && (signe > 0 || nb != 2147483648))
            return (0);
    } return (nb * signe);
}
