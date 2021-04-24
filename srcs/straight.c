/*
** EPITECH PROJECT, 2021
** straight
** File description:
** functions
*/

#include "../include/yams.h"
#include <stdio.h>
#include <stdlib.h>

int correct_nb(char **av, int start)
{
    int nb = 0;
    bool tmp = false;

    for (int j = 1 + start; j < 6 + start; j++) {
        for (int i = 1; i < 6; i++)
            if (atoi(av[i]) == j)
                tmp = true;
        if (tmp)
            nb++;
        tmp = false;
    }
    return (nb);
}

float six_straight(char **av)
{
    int well_placed = correct_nb(av, 1) + 1;
    float res = 1.0;

    for (; well_placed != 6; well_placed++)
        res *= 1.0 / 6.0;

    printf("Chances to get a %d straight: %.2f%%\n", get_last_nb(av[6]),
           res * 100);
    return (res);
}

float five_straight(char **av)
{
    int well_placed = correct_nb(av, 0) + 1;
    float res = 1.0;

    for (; well_placed != 6; well_placed++)
        res *= 1.0 / 6.0;

    printf("Chances to get a %d straight: %.2f%%\n", get_last_nb(av[6]),
           res * 100);
    return (res);
}

float straight(char **av)
{
    if (get_last_nb(av[6]) == 6)
        return (six_straight(av));
    if (get_last_nb(av[6]) == 5)
        return (five_straight(av));
    return (-1.0);
}
