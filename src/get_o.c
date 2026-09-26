/*
** EPITECH PROJECT, 2023
** get_o
** File description:
** Get the 'O' positions
*/

#include "../includes/my.h"

int number_of_o(char *str)
{
    int nb = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == 'O')
            nb += 1;
    }
    return nb;
}

player_pos *get_o(char *file, char **map)
{
    int nb = number_of_o(file);
    int a = 0; int j = 0;
    player_pos *pos = malloc(sizeof(player_pos) * nb);
    for (int i = 0; map[i] != NULL; i++){
        for (int j = 0; map[i][j] != '\0'; j++) {
            (map[i][j] == 'O') ?
                pos[a].x = j, pos[a].y = i, a++ : 0;
        }
    }
    return (pos);
}
