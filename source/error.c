/*
** EPITECH PROJECT, 2022
** error_mode
** File description:
** error_file
*/

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

int invalid_map(char *map)
{
    for (int i = 0; map[i] != '\0'; i++)
        if (map[i] != ' ' && map[i] != '#' && map[i]
            != '\n' && map[i] != 'P' && map[i]
            != 'X' && map[i] != 'O')
            return 84;
}

int invalid_file(char *filepath)
{
    if (open(filepath, O_RDONLY) == -1)
        return 84;
}
