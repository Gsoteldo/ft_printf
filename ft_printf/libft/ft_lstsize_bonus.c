/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsoteldo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 18:05:07 by gsoteldo          #+#    #+#             */
/*   Updated: 2023/09/28 18:05:19 by gsoteldo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int		i;

	i = 0;
	if (lst == 0)
		return (0);
	while (lst != 0)
	{
		lst = lst->next;
		i++;
	}
	return (i);
}
