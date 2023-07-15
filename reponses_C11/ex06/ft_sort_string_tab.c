/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_string_tab.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguezzi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 12:43:29 by aguezzi           #+#    #+#             */
/*   Updated: 2022/08/02 19:07:10 by aguezzi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' || s2[i] != '\0')
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}

void	ft_sort_string_tab(char **tab)
{
	int		i;
	int		j;
	char	*save;

	i = 0;
	j = 0;
	save = 0;
	while (tab[j + 1] != 0)
	{
		while (tab[i + 1] != 0)
		{
			if (ft_strcmp(tab[i], tab[i + 1]) > 0)
			{
				save = tab[i];
				tab[i] = tab[i + 1];
				tab[i + 1] = save;
			}
			i++;
		}
		i = 0;
		j++;
	}
}
/*int	main(void)
{
	int		i;
	char	*tab[6] = {"garage", "abcde", "2345", "joli", "/,..45", NULL};

	i = 0;
	ft_sort_string_tab(tab);
	while (i < 6)
	{
		printf("%s\n", tab[i]);
		i++;
	}
	return (0);
}*/
