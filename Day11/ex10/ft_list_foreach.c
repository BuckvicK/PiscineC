/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_foreach.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krakharo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/31 22:58:45 by krakharo          #+#    #+#             */
/*   Updated: 2018/10/31 22:58:46 by krakharo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_foreach_if(t_list *begin_list, void (*f)(void*),
	void *data_ref, int (*cmp)(void*, void*))
{
	if (begin_list != 0)
	{
		while (begin_list)
		{
			if ((*cmp)(begin_list->data, data_ref) == 0)
				(*f)(begin_list->data);
			begin_list = begin_list->next;
		}
	}
}
