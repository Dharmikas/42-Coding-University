/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_spy.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dshah <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/23 15:19:55 by dshah             #+#    #+#             */
/*   Updated: 2018/03/23 16:27:57 by dshah            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *s)
{
	int i;

	i = 0;
	while (s[i])
	{
		write(1, &s[i], 1);
		i++;
	}
}

char	*ft_strlowcase(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 65 && str[i] <= 90)
			str[i] = str[i] + 32;
		i++;
	}
	return (str);
}

int		ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] || s2[i])
	{
		if (s1[i] - s2[i] == 0)
			i++;
		if (s1[i] - s2[i] < 0)
			return (s1[i] - s2[i]);
		if (s1[i] - s2[i] > 0)
			return (s1[i] - s2[i]);
	}
	return (0);
}

void	ft_is_present(char *str)
{
	char *president;
	char *bauer;
	char *attack;

	president = "president";
	bauer = "bauer";
	attack = "attack";
	if (ft_strcmp(str, president) == 0)
		ft_putstr("Alert!!!\n");
	if (ft_strcmp(str, bauer) == 0)
		ft_putstr("Alert!!!\n");
	if (ft_strcmp(str, attack) == 0)
		ft_putstr("Alert!!!\n");
}

int		main(int argc, char **argv)
{
	int		i;
	int		j;
	int		k;
	char	str[1000];

	i = 1;
	while (i < argc)
	{
		j = 0;
		k = 0;
		while (argv[i][j])
		{
			if (argv[i][j] != ' ')
			{
				str[k] = argv[i][j];
				k++;
			}
			j++;
		}
		str[j] = '\0';
		ft_strlowcase(str);
		ft_is_present(str);
		i++;
	}
	return (0);
}
