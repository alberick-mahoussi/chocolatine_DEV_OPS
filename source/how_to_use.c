/*
** EPITECH PROJECT, 2022
** man function
** File description:
** explain_of_106
*/

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "../include/fonction.h"

void how_to_play(void)
{
    my_putstr("USAGE\n");
    my_putstr("    ./my_sokoban map\n");
    my_putstr("DESCRIPTION\n");
    my_putstr("     map  file representing the warehouse map, ");
    my_putstr("containing '#' for walls'\n");
    my_putstr("          'P' for the player, 'X' for boxes ");
    my_putstr("and '0' for storage locations.\n");
}
