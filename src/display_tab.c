/*
** EPITECH PROJECT, 2023
** display_tab
** File description:
** Display tab in lncurse mode
*/

#include "../includes/my.h"

void display_tab(char **map)
{
    for (int i = 0; map[i] != NULL; i++)
            printw("%s\n", map[i]);
}
