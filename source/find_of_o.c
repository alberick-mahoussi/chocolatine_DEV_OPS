/*
** EPITECH PROJECT, 2022
** locate o
** File description:
** search o in map
*/

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <ncurses.h>
#include "../include/base.h"

void move_up_o(int g, reck pos, char **str, int **mal)
{
    if (str[pos.i - 1][pos.h] == 'O' && g == KEY_UP) {
        str[pos.i - 1][pos.h] = 'P';
        str[pos.i][pos.h] = ' ';
    } else if (str[pos.i - 1][pos.h] == 'X' && \
    str[pos.i - 2][pos.h] == 'O' && g == KEY_UP) {
    str[pos.i - 2][pos.h] = str[pos.i - 1][pos.h];
    str[pos.i - 1][pos.h] = str[pos.i][pos.h];
    str[pos.i - 1][pos.h] = ' ';
    }
    for (int i = 0; mal[i] != NULL; i++)
        if (str[mal[i][0]][mal[i][1]] == ' ')
            str[mal[i][0]][mal[i][1]] = 'O';
    refresh();
}

void move_down_o(int g, reck pos, char **str, int **mal)
{
    if (str[pos.i + 1][pos.h] == 'O' && g == KEY_DOWN) {
        str[pos.i + 1][pos.h] = str[pos.i][pos.h];
        str[pos.i][pos.h] = ' ';
    } else if (str[pos.i + 1][pos.h] == 'X' && \
    str[pos.i + 2][pos.h] == 'O' && g == KEY_DOWN) {
    str[pos.i + 2][pos.h] = str[pos.i + 1][pos.h];
    str[pos.i + 1][pos.h] = str[pos.i][pos.h];
    str[pos.i + 1][pos.h] = ' ';
    }
    for	(int i = 0; mal[i] != NULL; i++)
        if (str[mal[i][0]][mal[i][1]] == ' ')
            str[mal[i][0]][mal[i][1]] = 'O';
    refresh();
}

void move_right_o(int g, reck pos, char **str, int **mal)
{
    if (str[pos.i][pos.h + 1] == 'O' && g == KEY_RIGHT) {
        str[pos.i][pos.h + 1] = 'P';
        str[pos.i][pos.h] = ' ';
    } else if (str[pos.i][pos.h + 1] == 'X' && \
    str[pos.i][pos.h + 2] == 'O' && g == KEY_RIGHT) {
    str[pos.i][pos.h + 2] = str[pos.i][pos.h + 1];
    str[pos.i][pos.h + 1] = str[pos.i][pos.h];
    str[pos.i][pos.h] = ' ';
    }
    for (int i = 0; mal[i] != NULL; i++)
        if (str[mal[i][0]][mal[i][1]] == ' ')
            str[mal[i][0]][mal[i][1]] = 'O';
    refresh();
}

void move_left_o(int g, reck pos, char **str, int **mal)
{
    if (str[pos.i][pos.h - 1] == 'O' && g == KEY_LEFT) {
        str[pos.i][pos.h - 1] = 'P';
        str[pos.i][pos.h] = ' ';
    } else if (str[pos.i][pos.h - 1] == 'X' && \
    str[pos.i][pos.h - 2] == 'O' && g == KEY_LEFT) {
    str[pos.i][pos.h - 2] = str[pos.i][pos.h - 1];
    str[pos.i][pos.h - 1] = str[pos.i][pos.h];
    str[pos.i][pos.h] = ' ';
    }
    for (int i = 0; mal[i] != NULL; i++)
        if (str[mal[i][0]][mal[i][1]] == ' ')
            str[mal[i][0]][mal[i][1]] = 'O';
    refresh();
}
