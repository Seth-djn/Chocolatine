/*
** EPITECH PROJECT, 2023
** is_number
** File description:
** Check is it's a number
*/

#include "../includes/hangman.h"

int is_number(char *str)
{
    for (int i = 0; str[i]; i++) {
        if (str[i] < 48 && str[i] > 57)
            exit (84);
    }
}
