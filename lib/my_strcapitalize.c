/*
** EPITECH PROJECT, 2019
** strcapitalize
** File description:
** lib
*/

#include "my.h"
#include <stdio.h>

char *my_strcapitalize(char *str) {
    int i = 0;

    while (str[i] != '\0') {
        if (str[i] >= 65 && str[i] <= 90) {
            str[i] = str[i] - 32;
        }
        return (str);
        if (str[i - 1] == ' ')
        {
            str[i] = str[i] - 32;
            i = i + 1;
        }
        return (str);
    }
}
