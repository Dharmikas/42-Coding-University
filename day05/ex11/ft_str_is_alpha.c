/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dshah <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/19 21:33:17 by dshah             #+#    #+#             */
/*   Updated: 2018/03/19 21:46:29 by dshah            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		check_if_alpha(char c)
{
	if (c >= 65 && c <= 90)
		return (1);
	if (c >= 97 && c <= 122)
		return (1);
	return (0);
}

int		ft_str_is_alpha(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (!(check_if_alpha(str[i])))
			return (0);
		i++;
	}
	return (1);
}
