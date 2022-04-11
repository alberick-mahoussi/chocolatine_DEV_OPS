##
## EPITECH PROJECT, 2021
## Makefile
## File description:
## Makefile
##

SRC     =	source/my_putchar.c	\
		source//my_putstr.c	\
		source/how_to_use.c	\
		source/my_strcmp.c	\
		source/my_strlen.c	\
		source/my_revstr.c	\
		source/under_st.c	\
		source/list_write.c	\
		source/check_p.c	\
		source/mouvement.c	\
		source/find_of_o.c	\
		source/print.c	\
		source/o_number_and_position.c	\
		source/error.c	\
		source/succes.c	\
		source/sobokan.c

OBJ	=	$(SRC:.c=.o)

NAME	=	my_sokoban

all :	$(NAME)

$(NAME):	$(OBJ)
	gcc -o $(NAME) -lncurses -g3 $(OBJ)

clean :
	rm -f $(OBJ)

fclean :clean
	rm -f $(NAME)

re :	fclean all
