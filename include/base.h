/*
** EPITECH PROJECT, 2022
** sokoban function
** File description:
** all_function_of_sokoban
*/

#include "fonction.h"

void how_to_play(void);
int file_exist(int fd);
char *listen(char const *filepath);
int nb_rows(char *str);
int rows_len(char *str);
int test_char(char c);
void buff_tab(char *buff, char **tab, int a, int b, int i);
void buff_to_tab(char *buff, char **tab, int a, int b);
char *mem_for_cols(char *buff, char **tab, int i);
char **stock_in_to_array(char *str);
char **recap(int ac, char **av);
void display_tab(char **str);
reck recheck_p(char **str);
void move_down(int g, reck pos, char **str);
void move_up(int g, reck pos, char **str);
void move_left(int g, reck pos, char **str);
void move_right(int g, reck pos, char **str);
void move_up_o(int g, reck pos, char **map, int **mal);
void move_down_o(int g, reck pos, char **map, int **mal);
void move_right_o(int g, reck pos, char **str, int **mal);
void move_left_o(int g, reck pos, char **str, int **mal);
int succees(char **str);
int failure_game(reck s, char **str);
int **o_find(char **str);
int invalid_map(char *map);
int invalid_file(char *filepath);
