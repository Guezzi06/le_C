/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   putnbr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguezzi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/30 13:27:36 by aguezzi           #+#    #+#             */
/*   Updated: 2022/08/01 17:50:14 by aguezzi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_cont_putnbr(int nb, int i, int j, int v);

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_putnbr(int nb)
{
	int		i;
	int		j;
	int		v;

	j = 1;
	if (nb == -2147483648)
		write(1, "-2147483648", 11);
	else
	{
		if (nb < 0)
		{
			nb *= -1;
			ft_putchar('-');
		}
		v = nb;
		if (nb >= 10)
		{
			i = 1;
			ft_cont_putnbr(nb, i, j, v);
			ft_putchar ((nb % 10) + '0');
		}
		else
			ft_putchar (nb + '0');
	}
}

void	ft_cont_putnbr(int nb, int i, int j, int v)
{
	while (nb / j >= 10)
	{
		i = 1;
		while (v >= 10 * j)
		{
			v = nb / (10 * i);
			i *= 10;
		}
		ft_putchar ((v % 10) + '0');
		j *= 10;
		v = nb;
	}
}
