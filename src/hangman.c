/*
** EPITECH PROJECT, 2023
** hangman
** File description:
** The game loop
*/

#include "../includes/hangman.h"

int if_exists(char *str, char c, char *star)
{
    int i = 0, n = 0;
    while (str[i]) {
        (str[i] == c) ? (star[i] = c, n++) : 0;
        i++;
    } return n;
}

int still_stars(char *star)
{
    int i = 0;
    while (star[i]) {
        if (star[i] == '*')
            return 1;
        i++;
    } return 0;
}

char *fill_of_stars(char *str)
{
    char *star = malloc(sizeof(char) * (strlen(str) + 1));
    int i = 0;
    while (str[i]) {
        star[i] = '*'; i++;
    } star[i] = '\0';
    return star;
}

void hangman(char *line, int tries)
{
    char *str = NULL;
    char *star = fill_of_stars(line);
    size_t len = 0;
    while (tries > 0 && still_stars(star) == 1) {
        printf("%s\n", star);
        printf("Tries: %d\n\n", tries);
        printf("Your letter: ");
        (getline(&str, &len, stdin) == -1) ? free(star), free(str), exit(0) : 0;
        if (str[0] == 10) continue;
        (if_exists(line, str[0], star) == 0) ?
            printf("%c: is not in this word\n", str[0]), tries-- : 0;
    } if (still_stars(star) == 1) {
        printf("%s\n", star); printf("Tries: %d\n", tries);
        printf("\nYou lost!\n");
        return;
    } printf("%s\n", star); printf("Tries: %d\n", tries);
    printf("\nCongratulations!\n"); free(star); free(str);
}

int main(int ac, char **av)
{
    srand(time(NULL));
    if (ac == 2) {
        char *file = get_file(av[1]); char *c = strdup(file);
        int n = count_words(c, "\n"); free(c);
        int i = rand() % (n); int tries = 10;
        char **tab = get_content(file, "\n");
        hangman(tab[i], tries);
        free_tab(tab); free(file);
    } else if (ac == 3 && atoi(av[2]) >= 1) {
        is_number(av[2]);
        char *file = get_file(av[1]); char *c = strdup(file);
        int n = count_words(c, "\n"); free(c);
        int i = rand() % (n); int tries = atoi(av[2]);
        char **tab = get_content(file, "\n");
        hangman(tab[i], tries);
        free_tab(tab); free(file);
    } else
        return 84;
    return 0;    
}


