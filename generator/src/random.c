/*
** EPITECH PROJECT, 2022
** random
** File description:
** random
*/

#include <unistd.h>
#include <stdlib.h>
#include "../include/generator.h"
#include <sys/stat.h>
#include <fcntl.h>
#include <sys/types.h>
#include <stdio.h>

void kill(map_t *maze)
{
    for (int i = 0; i < maze->y - 1; i += 2)
        for (int j = 0; j != maze->x; j++)
            maze->map[i][j] = VISITED;
    if (maze->perfect == 1)
        for (int i = 1; i < maze->y - 1; i += 2)
            maze->map[i][rand() % maze->x] = VISITED;
    else
        for (int i = 1; i < maze->y - 1; i += 2) {
            maze->map[i][rand() % 4] = VISITED;
            maze->map[i][rand() % 4] = VISITED;
        }
    if (maze->y % 2 == 0)
        maze->map[maze->y - 1][maze->x - 1] = VISITED;
}

void generate(map_t *maze)
{
    perfect_or_not(maze);
    for (int i = 0; i != maze->y - 1; i++)
        printf("%s\n", maze->map[i]);
    printf("%s", maze->map[maze->y - 1]);
}
