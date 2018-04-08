/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dshah <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/19 22:02:53 by dshah             #+#    #+#             */
/*   Updated: 2018/03/19 22:44:05 by dshah            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		upper_case(char c)
{
	if (c >= 65 && c <= 90)
		return (1);
	return (0);
}

int		ft_str_is_uppercase(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (!(upper_case(str[i])))
			return (0);
		i++;
	}
	return (1);
}
