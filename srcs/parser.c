/*
** EPITECH PROJECT, 2021
** parser
** File description:
** functions
*/

#include <string.h>
#include <stdlib.h>

int get_last_nb(char *str)
{
    char *tab = malloc(sizeof(char) * 2);

    tab[0] = str[strlen(str) - 1];
    tab[1] = '\0';
    return (atoi(tab));
}

int *get_two_last_nb(char *str)
{
    int *list = malloc(sizeof(int) * 2);
    char *tab = malloc(sizeof(char) * 2);
    char *tab2 = malloc(sizeof(char) * 2);

    tab[0] = str[strlen(str) - 1];
    tab[1] = '\0';
    tab2[0] = str[strlen(str) - 3];
    tab2[1] = '\0';
    list[0] = atoi(tab);
    list[1] = atoi(tab2);
    return (list);
}

char *combination(char *str)
{
    int i = 0;
    char *cmb = NULL;

    for (i = 0; str[i] != '_'; i += 1);
    cmb = malloc(sizeof(char) * i + 1);
    for (i = 0; str[i] != '_'; i += 1)
        cmb[i] = str[i];
    return (cmb);
}
