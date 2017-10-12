# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lkaser <lkaser@student.42.us.org>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/04/20 13:52:57 by lkaser            #+#    #+#              #
#    Updated: 2017/10/12 15:43:15 by lkaser           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME = libft.a
LIST = *ft*

SRC = $(addsuffix .c, $(LIST))
OBJ = $(addsuffix .o, $(LIST))

CFLAGS = -Wall -Wextra -Werror -I includes/

all: $(NAME)

$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)

$(OBJ): $(SRC)
	gcc $(CFLAGS) -c $(SRC)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME) test

re:	fclean all

.PHONY: clean fclean all re
