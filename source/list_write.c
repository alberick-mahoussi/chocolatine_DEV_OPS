/*
** EPITECH PROJECT, 2022
** list and reproduction]
** File description:
** listen and reproduction of the arrays
*/

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <string.h>
#include "../include/base.h"

int test_file(char *tab)
{
    if (tab == NULL) {
        return (84);
    }
}

char *mem_for_cols(char *buff, char **tab, int i)
{
    tab[i] = malloc(sizeof(tab) * (rows_len(buff) + 1));
    if (tab[i] == NULL)
        return NULL;
}

char **stock_in_to_array(char *str)
{
    test_file(str);
    char **col = malloc(sizeof(char *) * (nb_rows(str) + 2));
    int k = 0;
    int i = nb_rows(str);
    while (k < i) {
        mem_for_cols(str, col, k);
        k = k + 1;
    }
    buff_to_tab(str, col, 0, 0);
    return col;
}

char **recap(int ac, char **av)
{
    char *array = listen(av[1]);
    if (invalid_map(array) == 84)
        return NULL;
    char **maps = stock_in_to_array(array);
    return maps;
}
