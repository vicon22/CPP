# ************************************************************************** #
#                                                                            #
#                                                        :::      ::::::::   #
#   Makefile                                           :+:      :+:    :+:   #
#                                                    +:+ +:+         +:+     #
#   By: eveiled <eveiled@student.21-school.ru>     +#+  +:+       +#+        #
#                                                +#+#+#+#+#+   +#+           #
#   Created: 2021/12/22 14:34:55 by eveiled           #+#    #+#             #
#   Updated: 202#   Updated: 2021/12/22 17:02:29 by eveiled          ###   ########.fr       #                                                              #
# ************************************************************************** #

NAME	= phonebook
#
SRCS	= phonebook.cpp contact.cpp main.cpp
#
OBJS	= $(SRCS:.cpp=.o)
#
CFLAGS	= -Wall -Wextra -Werror
#
CC = c++
#
HEADER =  phonebook.hpp contact.hpp
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

