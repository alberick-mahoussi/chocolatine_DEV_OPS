/*
** EPITECH PROJECT, 2022
** search P
** File description:
** reserach the position of p in map
*/

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "../include/fonction.h"

reck recheck_p(char **str)
{
    reck check;
    for (check.i = 0; str[check.i] != NULL; check.i++) {
        for (check.h = 0; str[check.i][check.h] != '\0'; check.h++) {
            if (str[check.i][check.h] == 'P')
                return check;
        }
    }
}
