/*
** EPITECH PROJECT, 2022
** row and parameters
** File description:
** listen und understand
*/

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <string.h>
#include "../include/base.h"
#include <ncurses.h>

char *listen(char const *filepath)
{
    int fd = open(filepath, O_RDONLY);
    struct stat st;
    stat(filepath, &st);
    int i = st.st_size;
    char *str = malloc(sizeof(char) * (i + 1));
    int k = read(fd, str, i);
    close(fd);
    return str;
}

int nb_rows(char *str)
{
    int i;
    int save;
    for (i = 0, save = 0; str[i] != '\0'; i++) {
	if (str[i] == '\n')
            save = save + 1;
    }
    save = save + 1;
    return (save);
}

int rows_len(char *str)
{
    for (int i = 0; str[i] != '\0'; i++)
        return (i);
}

void buff_tab(char *buff, char **tab, int a, int b, int i)
{
    while (buff[i] != '\0') {
        if (buff[i] == '\n' || buff[i] == '\0') {
            tab[a][b] = '\0';
            a = a + 1;
            b = 0;
        } else {
            tab[a][b] = buff[i];
            b = b + 1;
        }
        i = i + 1;
    }
    tab[a + 1] = NULL;
}

void buff_to_tab(char *buff, char **tab, int a, int b)
{
    int i = 0;
    buff_tab(buff, tab, a, b, i);
}
