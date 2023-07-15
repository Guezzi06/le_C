/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguezzi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/29 19:18:59 by aguezzi           #+#    #+#             */
/*   Updated: 2022/08/02 19:04:46 by aguezzi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_map(int *tab, int length, int (*f)(int))
{
	int	i;
	int	*fct;

	i = 0;
	fct = malloc(sizeof(int) * length);
	if (fct == 0)
		return (0);
	while (i < length)
	{
		fct[i] = (*f)(tab[i]);
		i++;
	}
	return (fct);
}
