/*
** EPITECH PROJECT, 2022
** get_player_pos
** File description:
** Get the player position
*/

#include "../includes/my.h"

player_pos player(char **map)
{
    player_pos pos;
    pos.x = 0; pos.y = 0;
    for (int i = 0; map[i] != NULL; i++){
        for (int j = 0; map[i][j] != '\0'; j++){
            (map[i][j] == 'P') ? pos.x = j, pos.y = i : 0;
        }
    }
    return (pos);
}
