/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_integer_table.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dshah <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/05 11:40:40 by dshah             #+#    #+#             */
/*   Updated: 2018/04/05 13:26:19 by dshah            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

void	brainfuck(char *str)
{
	int	tab[2048];
	int	*ptr;
	int loopcount;

	loopcount = 0;
	ptr = tab;
	while (*str)
	{
		if (*str == '>')
			ptr++;
		else if (*str == '<')
			ptr--;
		if (*str == '+')
			++(*ptr);
		else if (*str == '-')
			--(*ptr);
		else if (*str == '.')
			write(1, ptr, 1);
		else if (*str == '[' && *ptr == 0)
		{
			loopcount = 1;
			while (loopcount != 0)
			{
				str++;
				if (*str == ']')
					--loopcount;
				if (*str == '[')
					++loopcount;
			}
		}
		else if (*str == ']' && *ptr != 0)
		{
			loopcount = 1;
			while (loopcount != 0)
			{
				str--;
				if (*str == '[')
					--loopcount;
				if (*str == ']')
					++loopcount;
			}
		}
		str++;
	}
}

int     main(int argc, char **argv)
{
	if (argc == 2)
		brainfuck(argv[1]);
	else
		write(1,"\n", 1);
	return (0);
}
