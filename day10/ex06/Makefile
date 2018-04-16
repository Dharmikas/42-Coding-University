# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dshah <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/03/26 22:56:15 by dshah             #+#    #+#              #
#    Updated: 2018/03/26 22:59:46 by dshah            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = do_op

OUT = do-op

SRC = main.c operations.c

all: $(NAME)

$(NAME):
	gcc -Wall -Wextra -Werror $(SRC) -o $(OUT)

clean:
	/bin/rm -f $(OUT)

fclean:
	/bin/rm -f $(OUT)

re: fclean all
