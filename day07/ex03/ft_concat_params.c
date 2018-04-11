/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dshah <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/21 21:01:38 by dshah             #+#    #+#             */
/*   Updated: 2018/03/21 22:04:25 by dshah            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		size_of_arguments(int argc, char **argv)
{
	int numb;
	int i;
	int j;

	i = 1;
	numb = 0;
	while (i < argc)
	{
		j = 0;
		while (argv[i][j])
		{
			numb++;
			j++;
		}
		i++;
	}
	if (argc > 2)
		numb = numb + argc - 2;
	return (numb);
}

char	*ft_concat_params(int argc, char **argv)
{
	int		i;
	int		j;
	int		k;
	char	*str;

	str = (char*)malloc(sizeof(char) * size_of_arguments(argc, argv) + 1);
	i = 1;
	k = 0;
	while (i < argc)
	{
		j = 0;
		while (argv[i][j])
			str[k++] = argv[i][j++];
		if (i < argc - 1)
			str[k++] = '\n';
		i++;
	}
	str[k] = '\0';
	return (str);
}
