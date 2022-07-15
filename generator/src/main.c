/*
** EPITECH PROJECT, 2022
** main
** File description:
** main
*/

#include <unistd.h>
#include <stdlib.h>
#include "../include/generator.h"
#include <sys/stat.h>
#include <fcntl.h>
#include <sys/types.h>
#include <stdio.h>

int main(int ac, char **av)
{
    map_t *maze = malloc(sizeof(map_t));

    if (maze == NULL)
        return (NULL);
    if (error_handling(ac, av))
        return (84);
    parse_the_map(maze, ac, av);
    srand(time(0));
    generate(maze);
    return 0;
}
