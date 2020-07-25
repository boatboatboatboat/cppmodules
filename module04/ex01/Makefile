# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dpattij <dpattij@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/01/12 06:06:27 by dpattij           #+#    #+#              #
#    Updated: 2020/01/12 08:28:37 by dpattij          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ex01

all: $(NAME)

$(NAME):
	clang++ \
		main.cpp \
		AWeapon.cpp \
		PlasmaRifle.cpp \
		Enemy.cpp \
		PowerFist.cpp \
		SuperMutant.cpp \
		Character.cpp \
		RadScorpion.cpp \
		-Wall -Wextra -Werror \
		-std=c++03 -pedantic \
		-o $(NAME)

clean:

fclean: clean
	rm -f $(NAME)

re: fclean all
