/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_prototypes.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguezzi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/01 16:57:51 by aguezzi           #+#    #+#             */
/*   Updated: 2022/08/01 20:20:49 by aguezzi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PROTOTYPES_H
# define FT_PROTOTYPES_H

int		ft_strlen(char *str);
int		ft_isspace(char c);
int		ft_cont(int i, int c, int nbr, char *str);
int		ft_atoi(char *str);
int		add(int a, int b);
int		sous(int a, int b);
int		div(int a, int b);
int		mult(int a, int b);
int		mod(int a, int b);
void	ft_cont_putnbr(int nb, int i, int j, int v);
void	ft_putchar(char c);
void	ft_putnbr(int nb);

#endif
