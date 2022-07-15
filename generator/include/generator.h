/*
** EPITECH PROJECT, 2022
** generator
** File description:
** generator
*/

#ifndef GENERATOR_H
    #define GENERATOR_H
    #define VISITED  '*'
    #define UNVISITED  ' '
    #define WALL  'X'

typedef struct map_s {
    char **map;
    int x;
    int y;
    int perfect;
    int imperfect;
}map_t;

void parse_the_map(map_t *maze, int ac, char **av);
int check_coordinal(int ac, char **av);
int error_handling(int ac, char **av);
int check_maze(int ac, char **av);
int path(map_t *maze, int x, int y);
void kill(map_t *maze);
void perfect_or_not(map_t *perf);
void parse_the_map(map_t *maze, int ac, char **av);

#endif
