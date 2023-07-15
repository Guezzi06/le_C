/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguezzi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 12:15:56 by aguezzi           #+#    #+#             */
/*   Updated: 2022/07/20 14:11:11 by aguezzi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int		i;

	i = 5;
	if (nb < 2)
		return (0);
	if (nb % 2 == 0 || nb % 3 == 0)
		return (0);
	while (i * i <= nb && i <= 46424)
	{
		if (nb % i == 0 || nb % (i + 2) == 0)
			return (0);
		i += 6;
	}
	if (nb % 46427 == 0 || nb % 46429 == 0)
		return (0);
	if (i * i == nb)
		return (0);
	return (1);
}

int	ft_find_next_prime(int nb)
{
	if (nb <= 2)
		return (2);
	while (ft_is_prime(nb) == 0)
	{
		nb++;
	}
	return (nb);
}
