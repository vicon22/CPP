
NAME	= brain
#
SRCS	= main.cpp
#
OBJS	= $(SRCS:.cpp=.o)
#
CFLAGS	= -Wall -Wextra -Werror -std=c++98
#
CC = c++
#
.PHONY: all clean fclean re

all:        $(NAME)

$(NAME):    $(OBJS)
			$(CC) $(CFLAGS) -o $(NAME) $(OBJS)

clean:
			rm -rf $(OBJS)

fclean:		clean
			rm -rf $(NAME)

re:			fclean $(NAME)



