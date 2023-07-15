/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguezzi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 09:54:23 by aguezzi           #+#    #+#             */
/*   Updated: 2022/07/25 11:12:15 by aguezzi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int		size;
	int		i;
	char	*chaine;

	size = 0;
	i = 0;
	chaine = NULL;
	while (src[size])
		size++;
	chaine = malloc(sizeof(char) * size);
	if (chaine == NULL)
		return (NULL);
	while (i < size)
	{
		chaine[i] = src[i];
		i++;
	}
	chaine[i] = '\0';
	return (chaine);
}
