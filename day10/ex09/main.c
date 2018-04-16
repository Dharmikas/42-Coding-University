/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dshah <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/26 19:55:11 by dshah             #+#    #+#             */
/*   Updated: 2018/03/26 23:09:52 by dshah            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"
#include "ft_opp.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		ft_putchar('-');
		ft_putchar('2');
		ft_putnbr(147483648);
		return ;
	}
	if (nb < 0)
	{
		ft_putchar('-');
		nb = -nb;
	}
	if (nb >= 10)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	else
		ft_putchar(nb + 48);
}

int	ft_usage(int a, int b)
{
	(void)a;
	(void)b;
	ft_putstr("error : only [ ");
	while (ft_strcmp(g_opptab[a].oper, '') != 0)
	{
		ft_putstr(g_opptab[a].oper);
		ft_putchar(' ');
		a++;
	}
	ft_putstr("] are accepted.\n");
	return (0);
}

int		ft_atoi(char *str)
{
	int sign;
	int numb;
	int count;

	sign = 1;
	numb = 0;
	count = 0;
	while (str[count] == ' ' || str[count] == '\n' || str[count] == '\t' ||
			str[count] == '\f' || str[count] == '\v' || str[count] == '\r')
		count++;
	if (str[count] == '-' || str[count] == '+')
	{
		if (str[count] == '-')
			sign = -1;
		count = count + 1;
	}
	while (str[count] >= 48 && str[count] < 58)
	{
		numb = numb * 10 + ((int)str[count] - 48);
		count = count + 1;
	}
	return (numb * sign);
}

int		ft_calculate(int n1, char *d, int n2)
{
	int i;

	i = 0;
	if (*d == '+' || *d == '-' || *d == '*' || *d == '/' || *d == '%')
	{
		while (i < 5)
		{
			if (g_opptab[i].oper == *d)
				return (g_opptab[i].f(n1, n2));
			i++;
		}
	}
	else
		ft_usage(n1, n2);
	return (0);
}

int		main(int argc, char **argv)
{
	int		numb1;
	int		numb2;
	char	*operator;

	if (argc != 4)
		return (0);
	numb1 = ft_atoi(argv[1]);
	numb2 = ft_atoi(argv[3]);
	operator = argv[2];
	if (numb2 == 0 && *operator == '/')
	{
		write(1, "Stop : division by zero\n", 24);
		return (0);
	}
	if (numb2 == 0 && *operator == '%')
	{
		write(1, "Stop : modulo by zero\n", 22);
		return (0);
	}
	ft_putnbr(ft_calculate(numb1, operator, numb2));
	ft_putchar('\n');
	return (0);
}
