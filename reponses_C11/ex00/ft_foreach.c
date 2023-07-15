/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_foreach.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguezzi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 16:38:31 by aguezzi           #+#    #+#             */
/*   Updated: 2022/08/02 14:45:25 by aguezzi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>

void	ft_afficher(int i)
{
	printf("%d ", i);
}*/
void	ft_foreach(int *tab, int length, void (*f)(int))
{
	int	i;

	i = 0;
	while (i < length)
	{
		(*f)(tab[i]);
		i++;
	}
}
/*int main(void)
{
	int i = 0;
	int tab[20] = {0};
	while (i < 20)
	{
		tab[i] = i;
		i++;
	}
	ft_foreach(tab, 20, &ft_afficher);
}*/
