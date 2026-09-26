/*
** EPITECH PROJECT, 2022
** my_sokoban
** File description:
** The game
*/

#include "../includes/my.h"

int sokoban(char **map, char *str)
{
    char *file = get_map(str);
    int nb = number_of_o(file);
    player_pos *pos = get_o(file, map);
    initscr(); curs_set(false);
    keypad(stdscr, TRUE); noecho();
    display_map(str);
    refresh();
    while (1) {
        int ch = getch();
        if (ch == 32)
            break;
        clear(); move_player(map, ch);
        for (int i = 0; i < nb; i++) {
            (map[pos[i].y][pos[i].x] == ' ') ?
                map[pos[i].y][pos[i].x] = 'O' : 0;
        } display_tab(map);
        refresh();
    } endwin();
    return 0;
}

int main(int ac, char **av)
{
    char *buff = get_map(av[1]);
    char **map = two_d_array(buff);
    int fd = open(av[1], O_RDONLY);
    if (ac == 2 && av[1][0] == '-' && av[1][1] == 'h')
        usage();
    if (fd == -1 && ac == 2)
        return 84;
    else if (ac == 2 && fd != -1)
        sokoban(map, av[1]);
    else {
        return 84;
    }
    free(buff);
    free_map(map);
}
