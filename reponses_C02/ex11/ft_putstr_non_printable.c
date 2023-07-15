/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguezzi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/17 10:48:06 by aguezzi           #+#    #+#             */
/*   Updated: 2022/07/18 17:18:33 by aguezzi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_cont(int hexa1, int hexa2, char c);

void	ft_putstr_non_printable(char *str)
{
	int		i;
	int		hexa1;
	int		hexa2;

	i = 0;
	while (str[i])
	{
		if (str[i] == 127)
			write(1, "\\7f", 3);
		else if (str[i] >= 0 && str[i] <= 31)
		{
			write(1, "\\", 1);
			hexa1 = str[i] % 16;
			hexa2 = hexa1 - 10;
			if (str[i] <= 15)
				write(1, "0", 1);
			else if (str[i] <= 31)
				write(1, "1", 1);
			ft_cont(hexa1, hexa2, str[i]);
		}
		else
			write (1, &str[i], 1);
		i++;
	}
}

void	ft_cont(int hexa1, int hexa2, char c)
{
	if (hexa1 <= 9)
	{
		c = hexa1 + 48;
		write(1, &c, 1);
	}
	else
	{
		c = hexa2 + 97;
		write(1, &c, 1);
	}
}
