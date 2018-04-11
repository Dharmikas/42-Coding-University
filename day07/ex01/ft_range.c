/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dshah <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/21 19:52:38 by dshah             #+#    #+#             */
/*   Updated: 2018/03/21 20:07:06 by dshah            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int i;
	int *j;

	if (min >= max)
		return (NULL);
	i = 0;
	j = (int*)malloc(sizeof(int) * (max - min));
	while (min < max)
	{
		j[i] = min;
		min++;
		i++;
	}
	return (j);
}
