/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_reverse.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krakharo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/31 21:21:26 by krakharo          #+#    #+#             */
/*   Updated: 2018/10/31 21:21:29 by krakharo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>

void	ft_list_reverse(t_list **begin_list)
{
	t_list	*current;
	t_list	*second;
	t_list	*res;

	current = *begin_list;
	res = NULL;
	while (current)
	{
		second = current->next;
		current->next = res;
		res = current;
		current = second;
	}
	*begin_list = res;
}
