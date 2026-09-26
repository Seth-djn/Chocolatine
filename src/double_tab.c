/*
** EPITECH PROJECT, 2022
** 2D_arrays
** File description:
** Put buffer in 2D array
*/

#include "../includes/my.h"

char *get_map(char *file)
{
    struct stat s;
    stat(file, &s);
    char *content;
    int fd = open(file, O_RDONLY);
    content = malloc(sizeof(char) * (s.st_size + 1));
    int rd = read(fd, content, (s.st_size));
    content[s.st_size] = '\0';
    close(fd);
    return (content);
}

char **two_d_array(char *file)
{
    int i = 0, j = 0, k = 0, m;
    int lines = nb_lines(file);
    int *cols = nb_cols(file);
    char **map = malloc(sizeof(char*) * lines + 1);
    for (m = 0; m < lines; m++) {
        int s = cols[m];
        map[m] = malloc(sizeof(char) * s);
    } free(cols);
    while (file[k] != '\0') {
        if (file[k] == '\n' || file[k] == '\0') {
            map[i][j] = '\0';
            i++; j = 0; k++;
        } else {
            map[i][j] = file[k];
            k++; j++;
        }
    } map[i] = NULL;
    return map;
}

void free_map(char **map)
{
    int f;
    for (f = 0; map[f] != NULL; f++)
        free(map[f]);
    free(map);
}
