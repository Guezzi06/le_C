/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguezzi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 18:54:30 by aguezzi           #+#    #+#             */
/*   Updated: 2022/07/22 12:23:21 by aguezzi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	ft_strlen(char *str)
{
	int		i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' || s2[i] != '\0')
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		if (s1[i] == '\0')
			return (-s2[i]);
		if (s2[i] == '\0')
			return (s1[i]);
		i++;
	}
	return (0);
}

void	ft_sort_int_tab(char *tab[], int size)
{
	int		i;
	int		j;
	char	*save;

	i = 1;
	j = 1;
	save = NULL;
	while (j < size)
	{
		while (i < size)
		{
			if (ft_strcmp(tab[i], tab[i + 1]) > 0)
			{
				save = tab[i];
				tab[i] = tab[i + 1];
				tab[i + 1] = save;
			}
			i++;
		}
		i = 1;
		j++;
	}
}

int	main(int argc, char *argv[])
{
	int		i;
	int		j;

	i = 1;
	j = 0;
	ft_sort_int_tab(argv, argc - 1);
	while (i < argc)
	{
		write(1, argv[i], ft_strlen(argv[i]));
		write(1, "\n", 1);
		i++;
	}
	return (0);
}
