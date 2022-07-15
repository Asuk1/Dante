/*
** EPITECH PROJECT, 2022
** error
** File description:
** error
*/

#include "../include/generator.h"

int check_coordinal(int ac, char **av)
{
    int x = atoi(av[1]);
    int y = atoi(av[2]);

    for (int i = 1; i != ac; i++)
        for (int j = 0; av[i][j] != '\0'; j++)
            if ((av[i][j] < '0' || av[i][j] > '9')) {
                write(2, "It's not a number\n", 18);
                return (84);
            }
    if (x == 0 || y == 0) {
        write(2, "The dimension is not zero\n", 18);
        return (84);
    }
    return (0);
}

int check_maze(int ac, char **av)
{
    int x = atoi(av[1]);
    int y = atoi(av[2]);

    for (int i = 1; i != ac - 1; i++)
        for (int j = 0; av[i][j] != '\0'; j++)
            if ((av[i][j] < '0' && av[i][j] > '9')) {
                write(2, "It's not a number\n", 18);
                return (84);
            }
    if (x == 0 || y == 0) {
        write(2, "The dimension is not zero\n", 26);
        return (84);
    }
    if (ac == 3 && strcmp(av[3], "perfect") == 0) {
        write(2, "The third arg must be perfect\n", 30);
        return (84);
    }
    return (0);
}

int error_handling(int ac, char **av)
{
    if (ac < 3) {
        write (2, "Not enough arg\n", 15);
        return (84);
    }
    if (ac > 4) {
        write (2, "Too much arg\n", 14);
        return (84);
    }
    if (ac == 3)
        return (check_coordinal(ac, av));
    else
        return (check_maze(ac, av));
}
