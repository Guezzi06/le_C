/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguezzi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 10:52:36 by aguezzi           #+#    #+#             */
/*   Updated: 2022/07/14 13:55:39 by aguezzi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_continue(char b[], char a[], char esp, char e[]);

void	ft_continue2(char a[]);

void	ft_print_comb2(void)
{
	char	a[2];
	char	b[2];
	char	esp;
	char	e[2];
	int		i;

	a[0] = '0';
	a[1] = '0';
	b[0] = '0';
	b[1] = '0';
	esp = ' ';
	e[0] = ',';
	e[1] = ' ';
	i = 0;
	while (i < 9999)
	{
		ft_continue(b, a, esp, e);
		i++;
	}
}

void	ft_continue(char b[], char a[], char esp, char e[])
{
	if (((b[0] == a[0] && b[1] > a[1]) || b[0] > a[0]))
	{
		write(1, a, 2);
		write(1, &esp, 1);
		write(1, b, 2);
		if ((a[0] == '9' && a[1] == '8' && b[0] == '9' && b[1] == '9') == 0)
		{
			write(1, e, 2);
		}
	}
	b[1]++;
	if (b[1] == ':')
	{
		b[1] = '0';
		b[0]++;
	}
	if (b[0] == ':')
	{
		b[0] = '0';
		a[1]++;
	}
	ft_continue2(a);
}

void	ft_continue2(char a[])
{
	if (a[1] == ':')
	{
		a[1] = '0';
		a[0]++;
	}
}
