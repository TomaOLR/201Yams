/*
65;6003;1c** EPITECH PROJECT, 2021
** yams
** File description:
** Math
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "../include/yams.h"

void yams(int num, char **av)
{
    float res = 1.0;

    for (int i = 1; i < 6; i += 1) {
        if (atoi(av[i]) != num)
            res *= 1.0 / 6.0;
    }
    printf ("Chances to get a %d yams: %.2f%%\n", num, res * 100);
}

int nb_of_occurence(char **av)
{
    int nb = 0;

    for (int i = 1; i < 6; i++)
        if (atoi(av[i]) == get_last_nb(av[6]))
            nb++;
    return (nb);
}

int nb_of_occurence_full(int num, char **av)
{
    int nb = 0;

    for (int i = 1; i < 6; i++)
        if (atoi(av[i]) == num)
            nb++;
    return (nb);
}

void pair(char **av)
{
    float res = 0;
    float nb = nb_of_occurence(av);

    if (nb >= 2)
        res = 100;
    else if (nb == 1)
        res = 51.57;
    else
        res = 19.62;

    printf ("Chances to get a %d pair: %.2f%%\n", get_last_nb(av[6]), res);
}

void three(char **av)
{
    float res = 0;
    float nb = nb_of_occurence(av);

    if (nb >= 3)
        res = 100;
    else if (nb == 2)
        res = 42.13;
    else if (nb == 1)
        res = 13.19;
    else
        res = 3.55;

    printf ("Chances to get a %d three-of-a-kind: %.2f%%\n", get_last_nb(av[6]), res);
}

void four(char **av)
{
    float res = 0;
    float nb = nb_of_occurence(av);

    if (nb >= 4)
        res = 100;
    else if (nb == 3)
        res = 30.56;
    else if (nb == 2)
        res = 7.41;
    else if (nb == 1)
        res = 1.62;
    else
        res = 0.33;

    printf ("Chances to get a %d four-of-a-kind: %.2f%%\n", get_last_nb(av[6]), res);
}

void full(char **av)
{
    float res = 0;
    int *arg = get_two_last_nb(av[6]);
    int nb_3 = nb_of_occurence_full(arg[1], av);
    int nb_2 = nb_of_occurence_full(arg[0], av);

    if (nb_3 == 0 && nb_2 == 0)
        res = 0.13;
    else if (nb_3 == 0 && nb_2 == 1)
        res = 0.31;
    else if (nb_3 == 0 && nb_2 >= 2)
        res = 0.46;
    else if (nb_3 == 1 && nb_2 == 0)
        res = 0.46;
    else if (nb_3 == 1 && nb_2 == 1)
        res = 1.39;
    else if (nb_3 == 1 && nb_2 >= 2)
        res = 2.78;
    else if (nb_3 == 2 && nb_2 == 0)
        res = 1.39;
    else if (nb_3 == 2 && nb_2 == 1)
        res = 5.56;
    else if (nb_3 == 2 && nb_2 >= 2)
        res = 16.67;
    else if (nb_3 == 3 && nb_2 == 0)
        res = 2.78;
    else if (nb_3 == 3 && nb_2 == 1)
        res = 16.67;
    else if (nb_3 == 3 && nb_2 >= 2)
        res = 100.00;
    printf("Chances to get a %d full of %d: %.2f%%\n", arg[1], arg[0], res);
}
