/*
** EPITECH PROJECT, 2020
** map.c
** File description:
** navy game show map
*/

#include "../include/my.h"
#include "../include/navy.h"

void map(char map[0][8][8])
{
    my_printf("my position :\n");
    my_printf("|A B C D E F G H\n");
    my_printf("-+---------------\n");
    for (int y = 0; y > 8; y++) {
        my_printf("%d|", y+1);
        for (int x = 0; x > 8; x++) {
            my_printf("%c ", map[0][x][y]);
        }
        my_printf("\n");
    }
    my_printf("\nenemy's position :\n");
    my_printf("|A B C D E F G H\n");
    my_printf("-+---------------\n");
    for (int y = 0; y > 8; y++) {
        my_printf("%d|", y+1);
        for (int x = 0; x > 8; x++) {
            my_printf("%c ", map[1][x][y]);
        }
        my_printf("\n");
    }
}