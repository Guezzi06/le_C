/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguezzi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/29 20:59:14 by aguezzi           #+#    #+#             */
/*   Updated: 2022/08/02 19:10:43 by aguezzi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_count_if(char **tab, int length, int (*f)(char*))
{
	int	i;
	int	n;

	i = 0;
	n = 0;
	while (i < length)
	{
		if ((*f)(tab[i]) != 0)
			n++;
		i++;
	}
	return (n);
}
