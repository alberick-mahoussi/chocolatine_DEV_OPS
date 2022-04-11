/*
** EPITECH PROJECT, 2022
** check_position
** File description:
** check_position
*/

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "../include/base.h"

int recup(char **str)
{
    int n = 0;
    for (int i = 0; str[i] != NULL; i++)
        for (int f = 0; str[i][f] != '\0'; f++)
            if (str[i][f] == 'O')
                n = n + 1;
    return n;
}

int **s(char **str)
{
    int v = recup(str);
    int **oo = malloc(sizeof(int *) * (v + 1));
    for (int a = 0; a != v; a++)
        oo[a] = malloc(sizeof(int) * (3));
    return oo;
}

int **o_find(char **str)
{
    int **oo = s(str);
    int i = 0;
    int f = 0;
    int n = 0;
    for (i = 0; str[i] != NULL; i++)
        for (f = 0; str[i][f] != '\0'; f++)
            if (str[i][f] == 'O') {
                oo[n][0] = i;
                oo[n][1] = f;
                n++;
            }
    return oo;
}
