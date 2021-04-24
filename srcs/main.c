/*
** EPITECH PROJECT, 2021
** main
** File description:
** main
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "yams.h"

int help()
{
    printf("USAGE\n    ./201yams d1 d2 d3 d4 d5 c\n");
    printf("DESCRIPTION\n");
    printf("    d1\tvalue of the first die (0 if not thrown)\n");
    printf("    d2\tvalue of the second die (0 if not thrown)\n");
    printf("    d3\tvalue of the third die (0 if not thrown)\n");
    printf("    d4\tvalue of the fourth die (0 if not thrown)\n");
    printf("    d5\tvalue of the fifth die (0 if not thrown)\n");
    printf("    c\texpected combination\n");
    exit(0);
}

int main(int ac, char **av)
{
    if (ac == 2 && strcmp("-h", av[1]) == 0)
        help();
    if (!error(ac, av))
        return (84);
    if (strcmp(combination(av[6]), "yams") == 0)
        yams(get_last_nb(av[6]), av);
    if (strcmp(combination(av[6]), "pair") == 0)
        pair(av);
    if (strcmp(combination(av[6]), "three") == 0)
        three(av);
    if (strcmp(combination(av[6]), "four") == 0)
        four(av);
    if (strcmp(combination(av[6]), "full") == 0)
        full(av);
    if (strcmp(combination(av[6]), "straight") == 0)
        if (straight(av) == -1.0)
            return (84);
    return (0);
}
