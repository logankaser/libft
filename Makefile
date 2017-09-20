# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lkaser <lkaser@student.42.us.org>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/04/20 13:52:57 by lkaser            #+#    #+#              #
#    Updated: 2017/09/19 14:07:11 by lkaser           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME = libft
LIST = *ft*

SRC = $(addsuffix .c, $(LIST))
OBJ = $(addsuffix .o, $(LIST))

CFLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME):
	gcc $(CFLAGS) -c $(SRC)
	ar rcs libft.a $(OBJ)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f libft.a test

re: fclean all

test: fclean all
	gcc $(CFLAGS) libft.a test.c -o test
	./test
