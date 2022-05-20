# ************************************************************************** #
#                                                                            #
#                                                        :::      ::::::::   #
#   Makefile                                           :+:      :+:    :+:   #
#                                                    +:+ +:+         +:+     #
#   By: eveiled <eveiled@student.21-school.ru>     +#+  +:+       +#+        #
#                                                +#+#+#+#+#+   +#+           #
#   Created: 2021/12/22 14:34:55 by eveiled           #+#    #+#             #
#   Updated: 202#   Updated: 2021/12/22 14:35:13 by eveiled          ###   ########.fr       #                                                              #
# ************************************************************************** #

NAME	= megaphone
#
SRCS	= megaphone.cpp
#
OBJS	= $(SRCS:.cpp=.o)
#
CFLAGS	= -Wall -Wextra -Werror
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

