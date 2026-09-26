/*
** EPITECH PROJECT, 2023
** hangman
** File description:
** Header
*/

#ifndef HANG_H
    #define HANG_H
    #include <stdio.h>
    #include <stdlib.h>
    #include <string.h>
    #include <unistd.h>
    #include <fcntl.h>
    #include <sys/stat.h>
    #include <time.h>

int count_words(char *str, const char *delim);
char *get_file(char *file);
void free_tab(char **map);
char **get_content(char *str, const char *delim);
int is_number(char *str);

#endif
