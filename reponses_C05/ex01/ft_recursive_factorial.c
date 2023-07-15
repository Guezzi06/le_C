/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguezzi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 07:26:11 by aguezzi           #+#    #+#             */
/*   Updated: 2022/07/20 14:01:51 by aguezzi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
		return (0);
	else
	{
		if (nb == 0 || nb == 1)
			return (1);
		else
			return (nb * ft_recursive_factorial(nb - 1));
	}
}
