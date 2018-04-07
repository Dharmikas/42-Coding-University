/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dshah <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/17 12:09:13 by dshah             #+#    #+#             */
/*   Updated: 2018/03/17 20:04:21 by dshah            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_prime(int nb)
{
	int prime;

	prime = 2;
	while (nb % prime != 0)
	{
		if (prime > nb)
			break ;
		prime++;
	}
	if (prime == nb)
		return (1);
	else
		return (0);
}
