/*
** EPITECH PROJECT, 2021
** my_putchar.c
** File description:
** my_putchar.c
*/
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void my_putchar(char c)
{
    write(1, &c, 1);
}
