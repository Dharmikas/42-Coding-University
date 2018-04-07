/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dshah <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/16 15:24:09 by dshah             #+#    #+#             */
/*   Updated: 2018/03/17 12:28:32 by dshah            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_factorial(int nb)
{
	int n;

	n = 1;
	if (nb == 0 || nb == 1)
		return (n);
	else if (nb >= 2 && nb <= 12)
	{
		while (nb >= 1)
		{
			n = n * nb--;
		}
		return (n);
	}
	else if (nb <= -1)
	{
		return (0);
	}
	return (0);
}
