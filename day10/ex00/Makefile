# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dshah <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/03/26 14:24:28 by dshah             #+#    #+#              #
#    Updated: 2018/03/26 19:44:08 by dshah            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRCS = srcs/ft_putchar.c srcs/ft_putstr.c srcs/ft_strcmp.c \
	   srcs/ft_strlen.c srcs/ft_swap.c

INCLUDES = includes/

OUT = ft_putchar.o ft_putstr.o ft_strcmp.o ft_strlen.o ft_swap.o

all: $(NAME)

$(NAME): 	
	gcc -c -Wall -Wextra -Werror $(SRCS) -I $(INCLUDES)
	ar rc $(NAME) $(OUT)
	ranlib $(NAME)

clean: 
	/bin/rm -f $(OUT)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
