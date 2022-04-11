/*
** EPITECH PROJECT, 2022
** print_map
** File description:
** display map in the ncurse
*/

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <ncurses.h>

void display_tab(char **str)
{
    clear();
    start_color();
    init_pair(1, COLOR_BLACK, COLOR_WHITE);
    for (int i = 0; str[i] != NULL; i++) {
        printw(str[i]);
        printw("\n");
    }
    refresh();
}
