/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dshah <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/20 12:04:03 by dshah             #+#    #+#             */
/*   Updated: 2018/03/20 23:40:33 by dshah            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

int		ft_base_size(char *base)
{
	int i;
	int z;

	i = 0;
	if (base[i] == '\0' || base[i + 1] == '\0')
		return (0);
	while (base[i])
	{
		z = i + 1;
		if (!((base[i] >= 'a' && base[i] <= 'z')
			|| (base[i] >= 'A' && base[i] <= 'Z')
			|| (base[i] >= '0' && base[i] <= '9')))
			return (0);
		while (base[z])
			if (base[i] == base[z++])
				return (0);
		i++;
	}
	return (i);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	i;
	int size;
	int n[10];

	size = ft_base_size(base);
	if (size < 0 || size > 16)
		return ;
	if (nbr < 0)
	{
		nbr = -nbr;
		ft_putchar('-');
	}
	i = 0;
	while (nbr)
	{
		n[i] = nbr % size;
		nbr = nbr / size;
		i++;
	}
	while (i > 0)
		ft_putchar(base[n[--i]]);
}
