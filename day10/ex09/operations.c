/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dshah <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/26 22:00:42 by dshah             #+#    #+#             */
/*   Updated: 2018/03/26 23:07:47 by dshah            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int		ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] || s2[i])
	{
		if (s1[i] - s2[i] == 0)
			i++;
		if (s1[i] - s2[i] < 0)
			return (s1[i] - s2[i]);
		if (s1[i] - s2[i] > 0)
			return (s1[i] - s2[i]);
	}
	return (0);
}

int		ft_sum(int n1, int n2)
{
	return (n1 + n2);
}

int		ft_sub(int n1, int n2)
{
	return (n1 - n2);
}

int		ft_mul(int n1, int n2)
{
	return (n1 * n2);
}

int		ft_div(int n1, int n2)
{
	return (n1 / n2);
}

int		ft_mod(int n1, int n2)
{
	return (n1 % n2);
}
