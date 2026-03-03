# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: oamairi <oamairi@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/03/03 11:51:37 by oamairi           #+#    #+#              #
#    Updated: 2026/03/03 14:05:55 by oamairi          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	ex01

CC		=	c++

CFLAGS	=	-Wall -Wextra -Werror -std=c++98

SRCS	=	Zombie.cpp zombieHorde.cpp main.cpp

OBJS	=	$(SRCS:.cpp=.o)

%.o: %.cpp
	$(CC) $(CFLAGS) -c $< -o $@

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re:	fclean all

.PHONY:	all clean fclean re
