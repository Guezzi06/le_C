/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_advanced_sort_string_tab.c                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguezzi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 13:39:00 by aguezzi           #+#    #+#             */
/*   Updated: 2022/08/02 19:08:10 by aguezzi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_advanced_sort_string_tab(char **tab, int (*cmp)(char *, char *))
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
			if ((*cmp)(tab[i], tab[i + 1]) > 0)
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
	ft_advanced_sort_string_tab(tab, &ft_strcmp);
	while (i < 6)
	{
		printf("%s\n", tab[i]);
		i++;
	}
	return (0);
}*/
