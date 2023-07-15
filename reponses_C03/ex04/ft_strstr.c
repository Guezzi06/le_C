/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguezzi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 09:35:03 by aguezzi           #+#    #+#             */
/*   Updated: 2022/07/23 08:13:36 by aguezzi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_verif(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (to_find[j])
	{
		if (str[i] == to_find[j])
			j++;
		i++;
	}
	if (i == j)
		return (1);
	return (0);
}

char	*ft_strstr(char *str, char *to_find)
{
	int		i;

	i = 0;
	if (to_find[0] == '\0')
		return (str);
	while (str[i])
	{
		if (str[i] == to_find[0])
		{
			if (ft_verif(&str[i], &to_find[0]))
				return (&str[i]);
		}
		i++;
	}
	return (0);
}
