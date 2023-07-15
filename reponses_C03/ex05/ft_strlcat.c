/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguezzi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 11:59:03 by aguezzi           #+#    #+#             */
/*   Updated: 2022/07/23 08:12:27 by aguezzi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlength(char *dest)
{
	unsigned int	taille_dest;

	taille_dest = 0;
	while (dest[taille_dest] != '\0')
		taille_dest++;
	return (taille_dest);
}

void	ft_strncat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] && i < (size - 1))
	{
		dest[i] = src[j];
		j++;
		i++;
	}
	dest[i] = '\0';
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	taille_origin_dest;

	i = 0;
	j = 0;
	taille_origin_dest = ft_strlength(dest);
	j = ft_strlength(src);
	if (size < 1)
		return (ft_strlength(src));
	else if (size > taille_origin_dest)
	{
		ft_strncat(dest, src, size);
		i = ft_strlength((dest + 0));
	}
	if (size > taille_origin_dest)
		return (taille_origin_dest + j);
	return (j + size);
}
