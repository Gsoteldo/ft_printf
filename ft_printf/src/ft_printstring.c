/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printstring.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsoteldo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 18:14:00 by gsoteldo          #+#    #+#             */
/*   Updated: 2023/11/13 18:14:02 by gsoteldo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"
/*
void	ft_printstring(char *str, int *total)
{
	if (str == NULL)
	{
		write(1, "(null)", 6);
		*total = *total +6;
		return ;
	}
	write(1, str, ft_strlen(str));
	*total = *total +ft_strlen(str);
}
*/

void	ft_printstring(char *str, int *total)
{
	int i;
	
	i = 0;
	if (str == NULL)
	{
		i = write(1, "(null)", 6);
		if (i == -1)
		{
			*total = -1;
			return ;
		}
		*total = *total + 6;
		return ;
	}
	i = write(1, str, ft_strlen(str));
	if (i == -1)
	{
		*total = -1;
		return ;
	}
	*total = *total +ft_strlen(str);
}
