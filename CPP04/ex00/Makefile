
NAME	= animals
#
SRCS	= main.cpp source/Cat.cpp source/Dog.cpp source/Animal.cpp source/WrongAnimal.cpp source/WrongCat.cpp
#
OBJS	= $(SRCS:.cpp=.o)
#
CFLAGS	= -Wall -Wextra -Werror -std=c++98
#
CC = c++
#
HEADER =  headers/Cat.h headers/Dog.h headers/Animal.h headers/WrongAnimal.h headers/WrongCat.h
#
.PHONY: all clean fclean re

all:        $(NAME)

$(NAME):    $(OBJS) $(HEADER)
			$(CC) $(CFLAGS) -o $(NAME) $(OBJS)

clean:
			rm -rf $(OBJS)

fclean:		clean
			rm -rf $(NAME)

re:			fclean $(NAME)



