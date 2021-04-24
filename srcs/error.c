/*
** EPITECH PROJECT, 2021
** error
** File description:
** error gestion functions
*/

#include <string.h>
#include <stdbool.h>
#include <stdlib.h>

bool is_a_value(char str)
{
    if (str < '1' || str > '6')
        return (false);
    return (true);
}

bool comparation(char *order, char *str)
{
    if (strlen(str) <= strlen(order))
        return (false);
    for (int i = 0; order[i]; i++)
        if (order[i] != str[i])
            return (false);
    if (strlen(order) == 4 && order[0] == 'f' &&
        order[1] == 'u' && order[2] == 'l' && order[3] == 'l') {
        if (strlen(str) != 8 || !is_a_value(str[5]) || !is_a_value(str[7])
            || str[4] != '_' || str[6] != '_')
            return (false);
        if (str[5] == str[7])
            return (false);
    }
    else if (strlen(str) - 2 != strlen(order)
             || str[strlen(str) - 2] != '_'
             || !is_a_value(str[strlen(str) - 1]))
        return (false);
    return (true);
}

bool is_a_correct_order(char *str)
{
    char *tab[6] = {"pair", "yams", "three", "four", "full", "straight"};

    for (int i = 0; i < 6; i++)
        if (comparation(tab[i], str)) {
            return (true);
        }
    return (false);
}

int error(int ac, char **av)
{
    if (ac != 7)
        return (0);
    for (int i = 1; i < 6; i++)
        if (strlen(av[i]) != 1 || !is_a_value(av[i][0]))
            return (0);
    if (!is_a_correct_order(av[6]))
        return (0);
    return (1);
}
