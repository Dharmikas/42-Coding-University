/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dshah <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/14 21:49:52 by dshah             #+#    #+#             */
/*   Updated: 2018/03/15 23:13:13 by dshah            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

void	ft_display(int n)
{
	int first;
	int second;

	if (n < 9)
	{
		ft_putchar('0');
		ft_putchar(n + 48);
	}
	else
	{
		first = n % 10;
		second = n / 10;
		ft_putchar(second + 48);
		ft_putchar(first + 48);
	}
}

void	ft_print_comb2(void)
{
	int i;
	int j;

	i = 0;
	while (i <= 98)
	{
		j = i + 1;
		while (j <= 99)
		{
			ft_display(i);
			ft_putchar(' ');
			ft_display(j++);
			if (i < 98)
			{
				ft_putchar(',');
				ft_putchar(' ');
			}
		}
		i = i + 1;
	}
}
