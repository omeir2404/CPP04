NAME	= ex02

CC		= c++ -Wall -Werror -Wextra -std=c++98

SRC	= main.cpp AAnimal.cpp Dog.cpp Cat.cpp WrongAnimal.cpp WrongCat.cpp Brain.cpp



all:	$(NAME)

$(NAME):
	$(CC) $(SRC) -o $(NAME)

clean:		
	rm -f $(OBJ)

run:	re
			./$(NAME)

runMem:		re
			valgrind --leak-check=full --show-leak-kinds=all --log-file=val.log ./$(NAME)

fclean:		clean
			rm -f $(NAME) val.log

re:			fclean $(NAME)

.PHONY:	all clean fclean re