# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lkaser <lkaser@student.42.us.org>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/04/20 13:52:57 by lkaser            #+#    #+#              #
#    Updated: 2017/09/18 12:20:42 by lkaser           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME = libft
LIST = *ft*

SRC = $(addsuffix .c, $(LIST))
OBJ = $(addsuffix .o, $(LIST))

CFLAGS = -c -Wall -Wextra -Werror

all: $(NAME)

$(NAME):
	gcc $(CFLAGS) $(SRC)
	ar rcs libft.a $(OBJ)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME).a

re: fclean all

