/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dshah <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/26 20:13:44 by dshah             #+#    #+#             */
/*   Updated: 2018/03/26 23:05:54 by dshah            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADER_H
# define HEADER_H

# include <unistd.h>

void	ft_putchar(char c);
void	ft_putnbr(int nb);
int		ft_atoi(char *str);
int		ft_sum(int n1, int n2);
int		ft_sub(int n1, int n2);
int		ft_mul(int n1, int n2);
int		ft_div(int n1, int n2);
int		ft_mod(int n1, int n2);

#endif
