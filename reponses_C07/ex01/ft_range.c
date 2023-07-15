/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguezzi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 10:08:13 by aguezzi           #+#    #+#             */
/*   Updated: 2022/07/25 11:12:40 by aguezzi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int		i;
	int		*tab;

	i = 0;
	tab = NULL;
	if (min >= max)
		return (NULL);
	tab = malloc(sizeof(int) * (max - min + 1));
	if (tab == NULL)
		return (NULL);
	while (i < max - min)
	{
		tab[i] = min + i;
		i++;
	}
	return (tab);
}
