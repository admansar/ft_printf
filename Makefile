NAME = libftprintf.a

SRC = ${wildcard *.c}

OBJ = ${SRC:.c=.o}

all : $(NAME)

$(NAME) : $(OBJ)
		ar rcs $(NAME) $(OBJ)

clean :
	rm -rf $(OBJ)

fclean : clean
	rm -rf $(NAME)

re : fclean all
