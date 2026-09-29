/*
** EPITECH PROJECT, 2023
** read_file
** File description:
** Get the content of the file
*/

#include "../includes/hangman.h"

int check_file(char *file)
{
    for (int i = 0; file[i]; i++) {
        if (file[i] == ' ')
            exit (84);
    }
}

char *get_file(char *file)
{
    struct stat s;
    stat(file, &s);
    int len = s.st_size;
    char *buff = malloc(sizeof(char) * (len + 1));
    int fd = open(file, O_RDONLY);
    int rd = read(fd, buff, len);
    if (fd == -1 || rd == -1 || buff[0] == '\0')
        exit (84);
    buff[len] = '\0';
    check_file(buff);
    return buff;
}
