/*
** EPITECH PROJECT, 2022
** get_lines
** File description:
** Get number of lines of map
*/

#include "../includes/my.h"

int nb_lines(char const *str)
{
    int number = 0;
    for (int i = 0; str[i] != '\0'; i++){
        if (str[i] == '\n')
            number += 1;
    }
    return (number);
}
