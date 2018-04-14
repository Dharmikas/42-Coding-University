/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_antidote.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dshah <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/23 13:12:14 by dshah             #+#    #+#             */
/*   Updated: 2018/03/23 14:00:20 by dshah            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_antidote(int i, int j, int k)
{
	if (i > j)
	{
		if (i > k)
			return (k);
		if (j > k)
			return (j);
		else
			return (i);
	}
	else
	{
		if (i > k)
			return (i);
		if (j > k)
			return (k);
		else
			return (j);
	}
}
