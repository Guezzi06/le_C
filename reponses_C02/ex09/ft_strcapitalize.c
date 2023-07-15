/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguezzi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 18:21:30 by aguezzi           #+#    #+#             */
/*   Updated: 2022/07/18 11:04:32 by aguezzi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str);

char	*ft_strcapitalize(char *str)
{
	int		i;

	i = 0;
	ft_strlowcase(str);
	if (str[i] >= 'a' && str[i] <= 'z')
		str[i] -= 32;
	i++;
	while (str[i] != '\0')
	{
		if ((str[i - 1] >= 'a' && str[i - 1] <= 'z') == 0)
		{
			if ((str[i - 1] >= 'A' && str[i - 1] <= 'Z') == 0)
			{
				if ((str[i - 1] >= '0' && str[i - 1] <= '9') == 0)
				{
					if (str[i] >= 'a' && str[i] <= 'z')
						str[i] -= 32;
				}
			}
		}
		i++;
	}
	return (str);
}

char	*ft_strlowcase(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] += 32;
		}
		i++;
	}
	return (str);
}
