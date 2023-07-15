/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguezzi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 16:11:33 by aguezzi           #+#    #+#             */
/*   Updated: 2022/07/29 12:12:34 by aguezzi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
#include <stdlib.h>

int	len_word(char *str, char *charset)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while ((charset[i] && *str) || (charset[0] == '\0' && *str))
	{
		if (*str == charset[i])
		{
			return (j);
		}
		i++;
		if (charset[i] == '\0' || charset[0] == '\0')
		{
			j++;
			str++;
			i = 0;
		}
	}
	return (j);
}

int	separator(char *str, char *charset)
{
	int	i;

	i = 0;
	while (charset[i])
	{
		if (str[0] == charset[i])
			return (1);
		i++;
	}
	return (0);
}

int	count_nb_chaine(char *str, char *charset, int i, int j)
{
	int	nb;
	int	sep;

	nb = 0;
	while (str[i])
	{
		sep = 0;
		while (charset[j])
		{
			if (str[i] == charset[j])
			{
				i++;
				sep++;
				j = -1;
			}
			j++;
		}
		j = 0;
		if ((i == 0 && sep == 0) || (i != 0 && sep > 0 && str[i]))
			nb++;
		if (str[i] != '\0')
			i++;
	}
	return (nb);
}

char	*ft_strdup(char *src, int size)
{
	int		i;
	char	*chaine;

	i = 0;
	chaine = NULL;
	chaine = malloc(sizeof(char) * (size + 1));
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

char	**ft_split(char *str, char *charset)
{
	int		i;
	int		j;
	int		nb_mots;
	char	**split;

	i = 0;
	j = 0;
	split = NULL;
	nb_mots = count_nb_chaine(str, charset, i, j);
	split = malloc(sizeof(char *) * (nb_mots + 1));
	while (i < nb_mots)
	{
		while (*str && separator(str, charset))
			str++;
		j = len_word(str, charset);
		split[i] = ft_strdup(str, j);
		str += j;
		j = 0;
		i++;
	}
	split[i] = 0;
	return (split);
}

/*int main(void)
{
	int i = 0;
	char a[] = "ais-gvdj-cn  shcbd--ss-GYb4X6hncd-skncdiygU007309_k";
	char b[] = "";
	char **split = ft_split(a, b);
	while (i < 1)
	{
		printf("%s\n", split[i]);
		i++;
	}
	free(split);
	return (0);
}*/
