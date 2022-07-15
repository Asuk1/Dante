/*
** EPITECH PROJECT, 2022
** hunt
** File description:
** hunt
*/

#include <unistd.h>
#include <stdlib.h>
#include "generator.h"
#include <sys/stat.h>
#include <fcntl.h>
#include <sys/types.h>
#include <stdio.h>

void perfect_or_not(map_t *perfect)
{
    int i = 0;

    if (perfect->y % 2 == 1)
        for (; i != perfect->x; i++)
            perfect->map[perfect-> y - 1][i] = VISITED;
    kill(perfect);
}
