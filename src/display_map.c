/*
** EPITECH PROJECT, 2022
** display_map
** File description:
** Display the map
*/

#include "../includes/my.h"

void display_map(char *str)
{
    char *buff = get_map(str);
    char **final = two_d_array(buff);
    for (int i = 0; final[i] != NULL; i++)
        printw("%s\n", final[i]);
    free_map(final);
    free(buff);
}
