/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dshah <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/16 11:35:59 by dshah             #+#    #+#             */
/*   Updated: 2018/03/19 15:07:25 by dshah            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_atoi(char *str);

int main(void)
{
	char str[] = "-41-12";
	int a;

	a = ft_atoi(str);
	printf("%d\n",a);
	printf("%d\n", ft_atoi("---Mile_with"));
	printf("\n");
	printf("%d\n", ft_atoi("---Mile_with123"));
	printf("%d\n", atoi("---Mile_with123"));
	printf("\n");
	printf("%d\n", ft_atoi("+Mile_with?0-123"));
	
	printf("%d\n", ft_atoi("+Mile_with_52"));
	printf("%d\n", atoi("+Mile_with_52"));
	return (0);
}
