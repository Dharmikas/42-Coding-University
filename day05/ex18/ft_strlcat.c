/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dshah <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/20 10:10:18 by dshah             #+#    #+#             */
/*   Updated: 2018/03/20 23:06:55 by dshah            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int i;
	unsigned int len;
	unsigned int src_len;

	i = 0;
	len = 0;
	while (dest[len] && len < size)
		len++;
	i = len;
	while (src[len - i] && len + 1 < size)
	{
		dest[len] = src[len - 1];
		len++;
	}
	if (i < size)
		dest[size] = '\0';
	src_len = 0;
	while (src[src_len] != '\0')
		src_len++;
	return (i + src_len);
}
