
NAME	= harl
#
SRCS	= main.cpp Harl.cpp
#
OBJS	= $(SRCS:.cpp=.o)
#
CFLAGS	= -Wall -Wextra -Werror -std=c++98
#
CC = c++
#
HEADER =  Harl.h
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



