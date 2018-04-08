/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dshah <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/19 16:10:33 by dshah             #+#    #+#             */
/*   Updated: 2018/03/19 16:45:14 by dshah            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n);

int		main(void)
{
	char src[] = "42";
	char dest[] = "Coding?";
	char dest2[] = "Coding?";

	printf("%s\n", strncpy(dest, src, 2));

	printf("%s\n", ft_strncpy(dest2, src, 2));
	return (0);
}
