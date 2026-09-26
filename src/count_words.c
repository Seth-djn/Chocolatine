/*
** EPITECH PROJECT, 2023
** count_words
** File description:
** Count number of words
*/

#include "../includes/hangman.h"

int count_words(char *str, const char *s)
{
    int n = 0;
    char *tab = strtok(str, s);
    while (tab != NULL) {
        n++;
        tab = strtok(NULL, s);
    } return n;
}
