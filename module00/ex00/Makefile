# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dpattij <dpattij@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/01/12 06:06:27 by dpattij           #+#    #+#              #
#    Updated: 2020/01/12 06:12:25 by dpattij          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = megaphone

CC = clang++
FLAGS = -Wall -Wextra -Werror -pedantic -std=c++03

all: $(NAME)

$(NAME):
	$(CC) megaphone.cpp $(FLAGS) -o $(NAME)

clean:
	rm -f megaphone

fclean: clean

re: fclean all
