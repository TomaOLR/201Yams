/*
** EPITECH PROJECT, 2021
** yams.h
** File description:
** yams.h
*/

#ifndef YAMS_H_
#define YAMS_H_

#include <stdbool.h>

//error
bool is_a_value(char str);
bool comparation(char *order, char *str);
bool is_a_correct_order(char *str);
int error(int ac, char **av);

//parser
int get_last_nb(char *str);
int *get_two_last_nb(char *str);
char *combination(char *str);

//yams
void yams(int num, char **av);
void pair(char **av);
void three(char **av);
void four(char **av);
void full(char **av);

//straight
int correc_nb(char **av, int start);
float six_straight(char **av);
float five_straight(char **av);
float straight(char **av);

#endif /* YAMS_H_ */
