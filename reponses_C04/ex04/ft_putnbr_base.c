/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguezzi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 15:05:44 by aguezzi           #+#    #+#             */
/*   Updated: 2022/07/19 20:20:00 by aguezzi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_putnbr(int nb, int size, char *base);

void	ft_putchar(char c);

int		verification(int i, int z, char *base);

void	ft_putnbr_base(int nbr, char *base)
{
	int		i;
	int		z;
	int		size;

	i = 0;
	z = 0;
	size = 0;
	while (base[size])
		size++;
	if (verification(i, z, base))
	{
		ft_putnbr(nbr, size, base);
	}
}

int	verification(int i, int z, char *base)
{
	if (base[0] == '\0' || base[1] == '\0')
		return (0);
	while (base[i])
	{
		while (base[z])
		{
			if (base[z] == base[i])
			{
				if (z != i)
					return (0);
			}
			z++;
		}
		if (base[i] == '+' || base[i] == '-')
			return (0);
		if (base[i] < 32 && base[i] > 126)
			return (0);
		i++;
	}
	return (1);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb, int size, char *base)
{
	int		i;
	int		j;
	int		v;

	j = 1;
	ft_cont(nb);
	v = nb;
	if (nb >= size)
	{
		while (nb / j >= size)
		{
			i = 1;
			while (v >= size * j)
			{
				v = nb / (size * (i *= size));
			}
			ft_putchar (base[v]);
			j *= size;
			v = nb;
		}
		ft_putchar (base[v] % 10);
	}
	else
		ft_putchar (base[v]);
}

int	ft_cont(int nb)
{
	if (nb < 0)
	{
		nb *= -1;
		ft_putchar('-');
	}
	return (nb);
}
