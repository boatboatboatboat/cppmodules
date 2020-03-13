# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dpattij <dpattij@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/01/12 06:06:27 by dpattij           #+#    #+#              #
#    Updated: 2020/01/12 08:14:58 by dpattij          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ponytester

all: $(NAME)

$(NAME):
	clang++ \
		main.cpp \
		Pony.cpp \
		-Wall -Wextra -Werror \
		-std=c++98 -pedantic \
		-o $(NAME)

clean:

fclean: clean
	rm -f $(NAME)

re: fclean all
