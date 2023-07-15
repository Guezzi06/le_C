/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguezzi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 07:34:47 by aguezzi           #+#    #+#             */
/*   Updated: 2022/07/26 09:09:03 by aguezzi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <unistd.h>

void				ft_cont(int nb, int i, int j, int v);

struct	s_stock_str	*ft_strs_to_tab(int ac, char **av);

void	ft_putchar(char c)
{
	write(1, &c, 1);
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
			ft_cont(nb, i, j, v);
			ft_putchar ((nb % 10) + '0');
		}
		else
			ft_putchar (nb + '0');
	}
}

void	ft_cont(int nb, int i, int j, int v)
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

int	ft_strlen(char *str)
{
	int		i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

void	ft_show_tab(struct s_stock_str *par)
{
	int		i;

	i = 0;
	while (par[i].str != 0)
	{
		write(1, par[i].str, ft_strlen(par[i].str));
		write(1, "\n", 1);
		ft_putnbr(par[i].size);
		write(1, "\n", 1);
		write(1, par[i].copy, ft_strlen(par[i].copy));
		write(1, "\n", 1);
		i++;
	}
}

/*int main(void)
{
	char *av[4] = {"Bernard", "pi-+8];", "border", "anticonstitutionnellement"};
	t_stock_str *structure = ft_strs_to_tab(4, av);
	ft_show_tab(structure);
	return (0);
}*/
