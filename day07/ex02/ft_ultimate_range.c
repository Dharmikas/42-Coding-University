/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dshah <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/21 20:09:23 by dshah             #+#    #+#             */
/*   Updated: 2018/03/21 20:59:17 by dshah            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int i;
	int *size;

	size = (int*)malloc(sizeof(int) * (max - min));
	i = 0;
	if (min >= max)
	{
		*range = 0;
		return (0);
	}
	while (min < max)
	{
		size[i] = min;
		min++;
		i++;
	}
	*range = size;
	return (i);
}
