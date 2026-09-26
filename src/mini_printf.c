/*
** EPITECH PROJECT, 2022
** mini_printf
** File description:
** small printf
*/

#include "../includes/my.h"

int mini_printf(const char *format, ...)
{
    int b = 0, i = 0;
    va_list list;
    va_start(list, format);
    while (format[i] != '\0'){
        if (format[i] == '%'){
            (format[i + 1] == 's') ? my_putstr(va_arg(list, char *)) : 0;
            (format[i + 1] == 'd') ? my_put_nbr(va_arg(list, int)) : 0;
            (format[i + 1] == 'i') ? my_put_nbr(va_arg(list, int)) : 0;
            (format[i + 1] == 'c') ? my_putchar(va_arg(list, int)) : 0;
            (format[i + 1] == '%') ? my_putchar('%') : 0;
            i += 2;
        } else {
            my_putchar(format[i]);
            i += 1;
        }
    }
    va_end(list);
    return 0;
}
