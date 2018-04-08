/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dshah <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/19 21:48:13 by dshah             #+#    #+#             */
/*   Updated: 2018/03/19 21:54:55 by dshah            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		check_is_numeric(char c)
{
	if (c >= 48 && c <= 57)
		return (1);
	return (0);
}

int		ft_str_is_numeric(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (!(check_is_numeric(str[i])))
			return (0);
		i++;
	}
	return (1);
}
