/*
** EPITECH PROJECT, 2021
** my_revstr.c
** File description:
** my_revstr.c
*/

#include <stdlib.h>
#include <unistd.h>
#include "../include/fonction.h"

char *my_revstr(char *str)
{
    int x = 0;
    char z;
    int w = my_strlen(str) - 1;
    while (x < w) {
        z = str[x];
        str[x] = str[w];
        str[w] = z;
        x++;
        w--;
    }
    return (str);
}
