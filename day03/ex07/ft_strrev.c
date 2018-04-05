/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dshah <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/15 18:58:45 by dshah             #+#    #+#             */
/*   Updated: 2018/03/16 14:17:31 by dshah            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strrev(char *str)
{
	int		length;
	int		i;
	char	rev;

	i = 0;
	length = ft_strlen(str);
	while (length - 1 > i)
	{
		rev = str[i];
		str[i] = str[length - 1];
		str[length - 1] = rev;
		length--;
		i++;
	}
	return (str);
}
