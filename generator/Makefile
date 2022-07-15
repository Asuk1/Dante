##
## EPITECH PROJECT, 2022
## Makefile
## File description:
## Makefile
##

NAME =		generator

IDIR =		include/
IDIR_MY =	./include

CC =		gcc
CFLAGS +=	-I $(IDIR) -I $(IDIR_MY)
CFLAGS +=	-Wall -Wextra -w -g3

SRCS_DIR =	src/
SRCS_FILES =	error_handling.c \
				hunt.c \
				main.c \
				parsing.c \
				random.c \

SRCS =			$(addprefix $(SRCS_DIR), $(SRCS_FILES))

OBJS =			$(SRCS:.c=.o)
RM =			rm -f

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) -o $(NAME) $(OBJS) $(CFLAGS)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
