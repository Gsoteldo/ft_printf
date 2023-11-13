/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printpointer.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsoteldo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 18:15:16 by gsoteldo          #+#    #+#             */
/*   Updated: 2023/11/13 18:15:18 by gsoteldo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

void ft_printhexapointer(unsigned long long n, int *total)
{
	int aux;
	if (n >= 16)
	{
		ft_printhexapointer(n / 16, total);
		aux = *total;
		if (aux == -1)
		{
			*total = -1;
			return ;
		}
		ft_printhexapointer(n % 16, total);
		aux = *total;
		if (aux == -1)
		{
			*total = -1;
			return ;
		}
	}
	else
	{
		if (n <= 9)
			ft_printchar(n + '0', total);
		else
			ft_printchar(n - 10 + 'a', total);
	}
}

void	ft_printpointer(unsigned long long pointer, int *total)
{
	int aux;
	ft_printstring("0x", total);
			aux = *total;
		if (aux == -1)
		{
			*total = -1;
			return ;
		}
	ft_printhexapointer(pointer, total);
			aux = *total;
		if (aux == -1)
		{
			*total = -1;
			return ;
		}
}
