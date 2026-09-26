/*
** EPITECH PROJECT, 2022
** player.h
** File description:
** player
*/

#ifndef SOKOBAN_H
    #define SOKOBAN_H
    #include <unistd.h>
    #include <stdio.h>
    #include <stdlib.h>
    #include <stdarg.h>
    #include <math.h>
    #include <dirent.h>
    #include <sys/stat.h>
    #include <pwd.h>
    #include <sys/types.h>
    #include <fcntl.h>
    #include <ncurses.h>
    #include "player.h"

int my_putstr(char const *str);
void my_putchar(char c);
int my_put_nbr(int nb);
int *nb_cols(char *str);
int nb_lines(char const *str);
char *get_map(char *file);
int my_strlen(char const *str);
char **two_d_array(char *file);
void free_map(char **map);
void usage(void);
int mini_printf(const char *format, ...);
void display_map(char *str);
void display_tab(char **map);
player_pos player(char **map);
int number_of_o(char *str);
player_pos *get_o(char *file, char **map);
void get_player_pos(char **map);
void move_right(char **map, int key);
void move_left(char **map, int key);
void move_up(char **map, int key);
void move_down(char **map, int key);
void move_player(char **map, int key);
int check_file(char *str);

#endif
