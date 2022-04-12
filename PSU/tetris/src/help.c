/*
** EPITECH PROJECT, 2020
** PSU_tetris_2019
** File description:
** help
*/

#include "tetris.h"

void helper(char **av)
{
    my_printf("Usage %s [options]\n", av[0]);
    my_printf("Options:\n");
    my_printf("--help   Display this help\n");
    my_printf("-L --level={num} Start Tetris at level num (def: 1)\n");
    my_printf("-l --key-left={K} Move the tetrimino LEFT using the K key ");
    my_printf("(def: left arrow)\n");
    my_printf("-r --key-right={K} Move the tetrimino RIGHT using the K key ");
    my_printf("(def: right arrow)\n");
    my_printf("-t --key-turn={K} TURN the tetrimino clockwise 90d using the ");
    my_printf("K key(def: toparrow)\n");
    my_printf("-d --key-drop={K} DROP the tetrimino using the K key ");
    my_printf("(def: down arrow)\n");
    my_printf("-q --key-quit={K} QUIT the game using\
the K key (def: ‘q’ key)\n");
    my_printf("-p --key-pause={K} PAUSE/RESTART the game using the K key ");
    my_printf("(def: space bar)\n");
    my_printf("--map-size={row,col} Set the numbers of rows and columns of ");
    my_printf("the map (def: 20,10)\n");
    my_printf("-w --without-next Hide next tetrimino (def: false)\n");
    my_printf("-D --debug  Debug mode (def: false)\n");
}