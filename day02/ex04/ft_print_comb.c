/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dshah <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/14 17:55:06 by dshah             #+#    #+#             */
/*   Updated: 2018/03/15 23:02:44 by dshah            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

void	ft_print_comb(void)
{
	int loop[3];

	loop[0] = 48;
	while (loop[0] < 58)
	{
		loop[1] = loop[0] + 1;
		while (loop[1] < 58)
		{
			loop[2] = loop[1] + 1;
			while (loop[2] < 58)
			{
				ft_putchar(loop[0]);
				ft_putchar(loop[1]);
				ft_putchar(loop[2]);
				if (!(loop[0] == 55 && loop[1] == 56 && loop[2]++ == 57))
				{
					ft_putchar(',');
					ft_putchar(' ');
				}
				loop[2]++;
			}
			loop[1]++;
		}
		loop[0]++;
	}
}
