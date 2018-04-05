/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dshah <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/16 11:40:40 by dshah             #+#    #+#             */
/*   Updated: 2018/03/16 13:26:19 by dshah            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int sign;
	int numb;
	int count;

	sign = 1;
	numb = 0;
	count = 0;
	while (str[count] == ' ' || str[count] == '\n' || str[count] == '\t'
		|| str[count] == '\f' || str[count] == '\v' || str[count] == '\r')
		count++;
	if (str[count] == '-' || str[count] == '+')
	{
		if (str[count] == '-')
			sign = -1;
		count = count + 1;
	}
	while (str[count] != '\0' && (str[count] >= 48 && str[count] < 58))
	{
		numb = numb * 10 + ((int)str[count] - 48);
		count = count + 1;
	}
	return (numb * sign);
}
