/*
** EPITECH PROJECT, 2022
** parameters of mouvements
** File description:
** contains_of_mouvement_parameters
*/

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <ncurses.h>
#include "../include/base.h"

void move_down(int g, reck pos, char **str)
{
    if (str[pos.i + 1][pos.h] == ' ' && g == KEY_DOWN) {
        char c = str[pos.i + 1][pos.h];
        str[pos.i + 1][pos.h] = str[pos.i][pos.h];
        str[pos.i][pos.h] = c;
    } else if (str[pos.i + 1][pos.h] == 'X' &&  \
    str[pos.i + 2][pos.h] == ' ' && g == KEY_DOWN) {
    char c = str[pos.i + 2][pos.h];
    str[pos.i + 2][pos.h] = str[pos.i + 1][pos.h];
    str[pos.i + 1][pos.h] = c;
    c = str[pos.i + 1][pos.h];
    str[pos.i + 1][pos.h] = str[pos.i][pos.h];
    str[pos.i][pos.h] = c;
    }
    refresh();
}

void move_up(int g, reck pos, char **str)
{
    if (str[pos.i - 1][pos.h] == ' ' && g == KEY_UP) {
        char c = str[pos.i - 1][pos.h];
        str[pos.i - 1][pos.h] = str[pos.i][pos.h];
        str[pos.i][pos.h] = c;
    } else if (str[pos.i - 1][pos.h] == 'X' && \
    str[pos.i - 2][pos.h] == ' ' && g == KEY_UP) {
    char c = str[pos.i - 2][pos.h];
    str[pos.i - 2][pos.h] = str[pos.i - 1][pos.h];
    str[pos.i - 1][pos.h] = c;
    c = str[pos.i - 1][pos.h];
    str[pos.i - 1][pos.h] = str[pos.i][pos.h];
    str[pos.i][pos.h] = c;
    }
    refresh();
}

void move_left(int g, reck pos, char **str)
{
    if (str[pos.i][pos.h + 1] == ' ' && g == KEY_RIGHT) {
        char c = str[pos.i][pos.h + 1];
        str[pos.i][pos.h + 1] = str[pos.i][pos.h];
	str[pos.i][pos.h] = c;
    } else if (str[pos.i][pos.h + 1] == 'X' && \
    str[pos.i][pos.h + 2] == ' ' && g == KEY_RIGHT) {
    char c = str[pos.i][pos.h + 2];
    str[pos.i][pos.h + 2] = str[pos.i][pos.h + 1];
    str[pos.i][pos.h + 1] = c;
    c = str[pos.i][pos.h + 1];
    str[pos.i][pos.h + 1] = str[pos.i][pos.h];
    str[pos.i][pos.h] = c;
    }
    refresh();
}

void move_right(int g, reck pos, char **str)
{
    if (str[pos.i][pos.h - 1] == ' ' && g == KEY_LEFT) {
        char c = str[pos.i][pos.h - 1];
	str[pos.i][pos.h - 1] = str[pos.i][pos.h];
	str[pos.i][pos.h] = c;
    } else if (str[pos.i][pos.h - 1] == 'X' &&          \
    str[pos.i][pos.h - 2] == ' ' && g == KEY_LEFT) {
    char c = str[pos.i][pos.h - 2];
    str[pos.i][pos.h - 2] = str[pos.i][pos.h - 1];
    str[pos.i][pos.h - 1] = c;
    c = str[pos.i][pos.h - 1];
    str[pos.i][pos.h - 1] = str[pos.i][pos.h];
    str[pos.i][pos.h] = c;
    }
    refresh();
}
