/*
** EPITECH PROJECT, 2022
** the sokoban_game
** File description:
** the game
*/

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <ncurses.h>
#include "../include/base.h"

char **check(char **ste, char **er)
{
    for (int i = 0; ste[i] != NULL; i++) {
        for (int d = 0; ste[i][d] != '\0'; d++) {
            er[i][d] = ste[i][d];
        }
    }
}

void option(int f, reck st, char **str, char **sec, int **o)
{
    while (1) {
        display_tab(str);
        st = recheck_p(str);
        f = getch();
        move_down(f, st, str);
        move_up(f, st, str);
        move_left(f, st, str);
        move_right(f, st, str);
        move_up_o(f, st, str, o);
        move_down_o(f, st, str, o);
        move_right_o(f, st, str, o);
        move_left_o(f, st, str, o);
        succees(str);
        if (f == 32) {
            clear();
            check(sec, str);
        }
        refresh();
    }
}

int take(char **str, char **sec)
{
    reck st;
    int **o;
    int i = 0;
    int f = 0;
    initscr();
    start_color();
    noecho();
    cbreak();
    init_pair(2, COLOR_RED, COLOR_BLACK);
    keypad(stdscr, TRUE);
    attron(COLOR_PAIR(2));
    o = o_find(str);
    option(f, st, str, sec, o);
    endwin();
    return (0);
}

int main(int ac, char **av)
{
    if (ac == 2 && my_strcmp(av[1], "-h") == 0)
        how_to_play();

    if (invalid_file(av[1]) == 84)
        return 84;
    if (ac == 2) {
        char **qwert = recap(ac, av);
        char **sec = recap(ac, av);
        if (qwert == NULL || sec == NULL)
            return 84;
        else
            take(qwert, sec);
    }
    else
        return (84);
}
