/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguezzi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 20:02:27 by aguezzi           #+#    #+#             */
/*   Updated: 2022/07/26 14:33:51 by aguezzi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int		i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

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
	chaine = malloc(sizeof(char) * size + 1);
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

struct	s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	t_stock_str	*s;
	int			i;

	s = NULL;
	i = 0;
	s = malloc(sizeof(t_stock_str) * (ac + 1));
	if (s == NULL)
		return (NULL);
	while (i < ac)
	{
		s[i].size = ft_strlen(av[i]);
		s[i].str = av[i];
		s[i].copy = ft_strdup(av[i]);
		i++;
	}
	s[i].size = 0;
	s[i].str = 0;
	s[i].copy = 0;
	return (s);
}
