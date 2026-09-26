/*
** EPITECH PROJECT, 2023
** check_file
** File description:
** Check if the file is empty or invalid
*/

#include "../includes/my.h"

int check_file(char *str)
{
    struct stat s;
    stat(str, &s);
    char *content;
    int fd = open(str, O_RDONLY);
    content = malloc(sizeof(char) * (s.st_size + 1));
    int rd = read(fd, content, (s.st_size + 1));
    if (rd == 0 || rd == -1)
        return 1;
    close(fd);
}
