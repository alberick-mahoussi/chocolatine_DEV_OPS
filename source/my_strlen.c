/*
** EPITECH PROJECT, 2021
** my_strlen.c
** File description:
** my_strlen.c
*/

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int my_strlen(char const *str)
{
    int i = 0;
    for (i = 0; str[i] != '\0'; i++);
    return (i);
}
