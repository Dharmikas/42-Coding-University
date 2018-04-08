/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dshah <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/19 20:29:14 by dshah             #+#    #+#             */
/*   Updated: 2018/03/19 21:23:10 by dshah            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		check_lower(char l)
{
	if (l >= 97 && l <= 122)
		return (1);
	return (0);
}

int		check_upper(char u)
{
	if (u >= 65 && u <= 90)
		return (1);
	return (0);
}

int		check_other(char o)
{
	if (o >= 97 && o <= 122)
		return (1);
	if (o >= 65 && o <= 90)
		return (1);
	if (o >= 48 && o <= 57)
		return (1);
	return (0);
}

char	*ft_strcapitalize(char *str)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (str[i])
	{
		if (check_lower(str[i]) && j == 0)
			str[i] = str[i] - 32;
		else if (check_upper(str[i]) && j == 1)
			str[i] = str[i] + 32;
		if (!check_other(str[i]))
			j = 0;
		else
			j = 1;
		i++;
	}
	return (str);
}
