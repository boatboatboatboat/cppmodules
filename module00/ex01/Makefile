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

NAME = phonebook

all: $(NAME)

CC = clang++
FLAGS = -Wall -Wextra -Werror -pedantic -std=c++03

$(NAME):
	$(CC) \
		main.cpp \
		Contact.cpp \
		PhoneBook.cpp \
		$(FLAGS) \
		-o $(NAME)

clean:
	rm -f $(NAME)

fclean: clean

re: fclean all
