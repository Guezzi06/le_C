/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguezzi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/30 13:29:29 by aguezzi           #+#    #+#             */
/*   Updated: 2022/08/01 19:22:00 by aguezzi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	add(int a, int b)
{
	return (a + b);
}

int	sous(int a, int b)
{
	return (a - b);
}

int	div(int a, int b)
{
	if (b == 0)
	{
		write(1, "Stop : division by zero\n", 24);
		return (0);
	}
	return (a / b);
}

int	mult(int a, int b)
{
	return (a * b);
}

int	mod(int a, int b)
{
	if (b == 0)
	{
		write(1, "Stop : modulo by zero\n", 22);
		return (0);
	}
	return (a % b);
}
