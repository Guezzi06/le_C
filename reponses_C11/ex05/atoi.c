/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   atoi.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguezzi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/30 13:24:35 by aguezzi           #+#    #+#             */
/*   Updated: 2022/08/01 17:38:00 by aguezzi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	ft_isspace(char c)
{
	if (!(c == '\t' || c == '\n' || c == '\v'))
	{
		if (!(c == '\f' || c == '\r' || c == ' '))
			return (0);
	}
	return (1);
}

int	ft_cont(int i, int c, int nbr, char *str);

int	ft_atoi(char *str)
{
	int		i;
	int		c;
	int		nbr;

	i = 0;
	c = 0;
	nbr = 0;
	return (ft_cont(i, c, nbr, str));
}

int	ft_cont(int i, int c, int nbr, char *str)
{
	while (ft_isspace (str[i]))
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			c++;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		nbr = nbr * 10 + (str[i] - 48);
		i++;
	}
	if (c % 2 == 1)
		nbr = nbr * -1;
	return (nbr);
}
