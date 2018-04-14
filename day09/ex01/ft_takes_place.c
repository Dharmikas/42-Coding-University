/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_takes_place.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dshah <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/23 00:01:50 by dshah             #+#    #+#             */
/*   Updated: 2018/03/23 10:20:49 by dshah            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_time(int hour)
{
	return ((hour >= 12 && hour <= 13) ? "P.M" : "A.M.");
}

void	ft_takes_place(int hour)
{
	if (hour < 0 || hour > 23)
		return ;
	printf("THE FOLLOWING TAKES PLACE BETWEEN ");
	printf("%d", (hour % 12 == 0) ? 12 : (hour % 12));
	printf(".00 %s", ft_time(hour));
	hour++;
	printf(" AND %d", (hour % 12 == 0) ? 12 : (hour % 12));
	printf(".00 %s\n", ft_time(hour));
}
