/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguezzi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 12:21:34 by aguezzi           #+#    #+#             */
/*   Updated: 2022/07/25 11:14:13 by aguezzi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int		i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strcat(char *dest, char *src)
{
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (dest[i])
		i++;
	while (src[j])
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}

int	calcul_len(int size, char **strs, char *sep, int len)
{
	int		i;

	i = 0;
	while (i < size)
	{
		len += ft_strlen(strs[i]);
		if (i != size - 1)
			len += ft_strlen(sep);
		i++;
	}
	return (len);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		len;
	char	*chaine;
	char	*str;

	i = 0;
	len = 0;
	chaine = NULL;
	str = malloc(sizeof(char));
	if (size == 0)
		return (str);
	len = calcul_len(size, strs, sep, len);
	chaine = malloc(sizeof(char) * len);
	if (chaine == NULL)
		return (NULL);
	while (i < size)
	{
		ft_strcat(chaine, strs[i]);
		if (i != size - 1)
			ft_strcat(chaine, sep);
		i++;
	}
	return (chaine);
}
