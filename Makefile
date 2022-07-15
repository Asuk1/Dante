##
## EPITECH PROJECT, 2022
## Makefile
## File description:
## Makefile
##

all:
	make -C generator

clean:
	make clean -C generator/

fclean:
	make fclean -C generator/

re:
	make re -C generator/
