/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do-op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguezzi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/30 12:58:13 by aguezzi           #+#    #+#             */
/*   Updated: 2022/08/03 19:11:38 by aguezzi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_prototypes.h"

int	erreur_op(void)
{
	ft_putnbr(0);
	write(1, "\n", 1);
	return (1);
}

void	init(int (*f[])(int, int))
{
	f[0] = &add;
	f[1] = &sous;
	f[2] = &mult;
	f[3] = &div;
	f[4] = &mod;
}

int	ft_operateur(char signe)
{
	if (signe == '+')
		return (0);
	else if (signe == '-')
		return (1);
	else if (signe == '*')
		return (2);
	else if (signe == '/')
		return (3);
	else if (signe == '%')
		return (4);
	return (-1);
}

int	main(int argc, char **argv)
{
	int	nb1;
	int	nb2;
	int	operateur;
	int	resultat;
	int	(*f[5])(int, int);

	init((f));
	if (argc != 4)
		return (1);
	if (ft_strlen(argv[2]) != 1)
		if (erreur_op() == 1)
			return (1);
	nb1 = ft_atoi(argv[1]);
	nb2 = ft_atoi(argv[3]);
	operateur = ft_operateur(argv[2][0]);
	if (operateur == -1)
		if (erreur_op() == 1)
			return (1);
	resultat = (f[operateur](nb1, nb2));
	if ((operateur == 3 || operateur == 4) && nb2 == 0)
		return (1);
	ft_putnbr(resultat);
	write(1, "\n", 1);
	return (0);
}
