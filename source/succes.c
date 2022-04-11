/*
** EPITECH PROJECT, 2022
** condition of win
** File description:
** explain how to win game
*/

#include <stdio.h>
#include <stdlib.h>
#include <ncurses.h>
#include "../include/base.h"

int succees(char **str)
{
    int ch;
    int i;
    int h;
    int f = 0;
    for (i = 0; str[i] != NULL; i++) {
        for (h = 0; str[i][h] != '\0'; h++) {
            if (str[i][h] == 'O')
                f = f + 1;
        }
    }
    if (f == 0) {
        refresh();
        endwin();
        exit (0);
    }
}

int failure_game(reck pos, char **str)
{
    int f = succees(str);
    if (str[pos.i][pos.h - 1] == 'X' && str[pos.i][pos.h - 2] == '#' && \
    str[pos.i + 1][pos.h - 1] == '#' && f > 0 ) {
        endwin();
        exit(1);
    } else if (str[pos.i][pos.h - 1] == 'X' && str[pos.i - 2][pos.h]
    == '#' && str[pos.i - 1][pos.h - 1] == '#' && f > 0) {
        endwin();
        exit(1);
    }

    if (str[pos.i][pos.h - 1] == 'X' && str[pos.i][pos.h - 2] == '#' && \
        str[pos.i + 1][pos.h - 1] == '#' && str[pos.i][pos.h] == '#') {
        endwin();
        exit(1);
    }
}
