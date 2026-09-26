/*
** EPITECH PROJECT, 2022
** get_columns
** File description:
** Get number of map's columns
*/

#include "../includes/my.h"

int *nb_cols(char *str)
{
    int *tab = malloc(sizeof(int) * nb_lines(str));
    int number = 0;
    int a = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        number += 1;
        if (str[i] == '\n') {
            tab[a] = number;
            a++;
            number = 0;
        }
    }
    return (tab);
}
