/*
** EPITECH PROJECT, 2023
** free_map
** File description:
** Free 2D arrays
*/

#include <stdlib.h>

void free_tab(char **map)
{
    for (int f = 0; map[f] != NULL; f++)
        free(map[f]);
    free(map);
}
