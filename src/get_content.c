/*
** EPITECH PROJECT, 2023
** get_args
** File description:
** Put all the arguments in a 2D array
*/

#include "../includes/hangman.h"

char **get_content(char *str, const char *delim)
{
    char *copy = strdup(str);
    int lines = count_words(copy, delim); free(copy);
    char **arg = malloc(sizeof(char *) * (lines + 1));
    char *tab = strtok(str, delim);
    int i = 0;
    while (tab != NULL) {
        arg[i] = strdup(tab);
        tab = strtok(NULL, delim);
        i += 1;
    }
    arg[i] = NULL;
    return arg;
}
