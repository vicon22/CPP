
NAME	= bureaucrats
#
SRCS	= main.cpp models/Bureaucrat.cpp forms/Form.cpp forms/PresidentialPardonForm.cpp forms/RobotomyRequestForm.cpp forms/ShrubberyCreationForm.cpp
#
OBJS	= $(SRCS:.cpp=.o)
#
CFLAGS	= -Wall -Wextra -Werror -std=c++98
#
CC = c++
#
HEADER =  models/Bureaucrat.hpp forms/Form.hpp forms/PresidentialPardonForm.h forms/RobotomyRequestForm.h forms/ShrubberyCreationForm.h
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



