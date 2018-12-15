/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_at.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krakharo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/31 20:59:34 by krakharo          #+#    #+#             */
/*   Updated: 2018/10/31 20:59:35 by krakharo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>

int		ft_list_size(t_list *begin_list)
{
	int	i;

	i = 0;
	while (begin_list)
	{
		begin_list = begin_list->next;
		i++;
	}
	return (i);
}

t_list	*ft_list_at(t_list *begin_list, unsigned int nbr)
{
	t_list				*res;
	unsigned int		i;

	i = 1;
	res = NULL;
	if (nbr != 0 && nbr <= ft_list_size(begin_list))
	{
		res = begin_list;
		while (i < nbr)
		{
			res = res->next;
			i++;
		}
	}
	else
		return (res);
	return (res);
}
