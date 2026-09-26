/*
** EPITECH PROJECT, 2022
** my_put_nbr
** File description:
** Put number
*/

#include "../includes/my.h"

int my_put_nbr(int nb)
{
    int i = 1;
    if (nb < 0) {
        my_putchar('-');
        nb = - nb;
    }
    while ((nb / i ) > 9){
        i *= 10;
    }
    while (i >= 1) {
        my_putchar((nb / i) + '0');
        nb %= i;
        i /= 10;
    }
    return 0;
}
