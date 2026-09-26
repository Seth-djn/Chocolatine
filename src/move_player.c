/*
** EPITECH PROJECT, 2022
** move_player
** File description:
** Move the Player
*/

#include "../includes/my.h"

void move_right(char **map, int key)
{
    player_pos pos = player(map);
    if (map[pos.y][pos.x + 1] == ' ') {
        map[pos.y][pos.x + 1] = 'P';
        map[pos.y][pos.x] = ' ';
    } if (map[pos.y][pos.x + 1] == 'X' && map[pos.y][pos.x + 2] == ' ') {
        map[pos.y][pos.x + 1] = 'P'; map[pos.y][pos.x + 2] = 'X';
        map[pos.y][pos.x] = ' ';
    } if (map[pos.y][pos.x] == 'P' && map[pos.y][pos.x + 1] == 'X'
        && map[pos.y][pos.x + 2] == 'O') {
        map[pos.y][pos.x] = ' '; map[pos.y][pos.x + 1] = 'P';
        map[pos.y][pos.x + 2] = 'X';
    } if (map[pos.y][pos.x + 1] == 'O'){
        map[pos.y][pos.x + 1] = 'P';
        map[pos.y][pos.x] = ' ';
    }
}

void move_left(char **map, int key)
{
    player_pos pos = player(map);
    if (map[pos.y][pos.x - 1] == ' ') {
        map[pos.y][pos.x - 1] = 'P';
        map[pos.y][pos.x] = ' ';
    } if (map[pos.y][pos.x - 1] == 'X' && map[pos.y][pos.x - 2] == ' ') {
        map[pos.y][pos.x - 1] = 'P'; map[pos.y][pos.x - 2] = 'X';
        map[pos.y][pos.x] = ' ';
    } if (map[pos.y][pos.x - 1] == 'X' && map[pos.y][pos.x - 2] == ' '
        && map[pos.y][pos.x - 3] == 'O') {
        map[pos.y][pos.x - 2] = 'P'; map[pos.y][pos.x - 3] = 'X';
        map[pos.y][pos.x - 1] = ' '; map[pos.y][pos.x] = ' ';
    } if (map[pos.y][pos.x] == 'P' && map[pos.y][pos.x - 1] == 'X'
        && map[pos.y][pos.x - 2] == 'O') {
        map[pos.y][pos.x] = ' '; map[pos.y][pos.x - 1] = 'P';
        map[pos.y][pos.x - 2] = 'X';
    } if (map[pos.y][pos.x - 1] == 'O') {
        map[pos.y][pos.x - 1] = 'P';
        map[pos.y][pos.x] = ' ';
    }
}

void move_up(char **map, int key)
{
    player_pos pos = player(map);
    if (map[pos.y - 1][pos.x] == ' ') {
        map[pos.y - 1][pos.x] = 'P';
        map[pos.y][pos.x] = ' ';
    } if (map[pos.y - 1][pos.x] == 'X' && map[pos.y - 2][pos.x] == ' ') {
        map[pos.y - 1][pos.x] = 'P'; map[pos.y - 2][pos.x] = 'X';
        map[pos.y][pos.x] = ' ';
    } if (map[pos.y][pos.x] == 'P' && map[pos.y - 1][pos.x] == 'X'
        && map[pos.y - 2][pos.x] == 'O') {
        map[pos.y][pos.x] = ' '; map[pos.y - 1][pos.x] = 'P';
        map[pos.y - 2][pos.x] = 'X';
    } if (map[pos.y - 1][pos.x] == 'O') {
        map[pos.y - 1][pos.x] = 'P';
        map[pos.y][pos.x] = ' ';
    }
}

void move_down(char **map, int key)
{
    player_pos pos = player(map);
    if (map[pos.y + 1][pos.x] == ' '){
        map[pos.y + 1][pos.x] = 'P';
        map[pos.y][pos.x] = ' ';
    } if (map[pos.y + 1][pos.x] == 'X' && map[pos.y + 2][pos.x] == ' '){
        map[pos.y + 1][pos.x] = 'P'; map[pos.y + 2][pos.x] = 'X';
        map[pos.y][pos.x] = ' ';
    } if (map[pos.y][pos.x] == 'P' && map[pos.y + 1][pos.x] == 'X'
        && map[pos.y + 2][pos.x] == 'O'){
        map[pos.y][pos.x] = ' '; map[pos.y + 1][pos.x] = 'P';
        map[pos.y + 2][pos.x] = 'X';
    } if (map[pos.y + 1][pos.x] == 'O') {
        map[pos.y + 1][pos.x] = 'P';
        map[pos.y][pos.x] = ' ';
    }
}

void move_player(char **map, int key)
{
    if (key == KEY_RIGHT)
        move_right(map, key);
    if (key == KEY_LEFT)
        move_left(map, key);
    if (key == KEY_UP)
        move_up(map, key);
    if (key == KEY_DOWN)
        move_down(map, key);
}
