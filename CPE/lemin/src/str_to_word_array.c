/*
** EPITECH PROJECT, 2019
** CPE_lemin_2019
** File description:
** str_to_word_array.c
*/

#include "my.h"

char *cpy_piece_to_array(char *piece, int inc, int len)
{
    int cpy = 0;
    char *new = malloc(sizeof(char) * (len + 1));

    if (new == NULL || piece == NULL)
        return (NULL);
    while (piece[inc] != '\n' && piece[inc] != '\0')
    {
        new[cpy] = piece[inc];
        cpy = cpy + 1;
        inc = inc + 1;
    }
    new[cpy] = '\0';
    return (new);
}

char **piece_to_array(char *piece)
{
    int cy = 0;
    int cx = 0;
    int inc = 0;
    char **tetri = malloc(sizeof(char *) * my_strlen_custom(piece) + 1);

    if (piece == NULL)
        return (NULL);
    while (piece[inc] != '\0') {
        tetri[cy] = cpy_piece_to_array(piece, inc, 60);
        if (tetri[cy] == NULL)
            return (NULL);
        while (piece[inc] != '\n' && piece[inc] != '\0')
            inc = inc + 1;
        inc = inc + 1;
        cy = cy + 1;
    }
    tetri[cy] = NULL;
    return (tetri);
}