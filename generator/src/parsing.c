/*
** EPITECH PROJECT, 2022
** parsing
** File description:
** parsing
*/

#include <unistd.h>
#include <stdlib.h>
#include "../include/generator.h"
#include <sys/stat.h>
#include <fcntl.h>
#include <sys/types.h>

void parse_the_map(map_t *maze, int ac, char **av)
{
    if (ac == 3)
        maze->perfect = 0;
    else
        maze->perfect = 1;
    maze->x = atoi(av[1]);
    maze->y = atoi(av[2]);
    maze->map = malloc(sizeof(char *) * maze->y);
    for (int i = 0; i != maze->y; i++) {
        maze->map[i] = malloc(sizeof(char) * maze->x);
        for (int j = 0; j != maze->y; j++)
            maze->map[i][j] = WALL;
        maze->map[i][maze->x] = '\0';
    }
}
