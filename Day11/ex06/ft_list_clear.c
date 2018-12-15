/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_clear.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krakharo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/31 20:30:24 by krakharo          #+#    #+#             */
/*   Updated: 2018/10/31 20:30:25 by krakharo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>

void			ft_list_clear(t_list **begin_list)
{
	t_list *current;
	t_list *current_next;

	current = *begin_list;
	while (current)
	{
		current_next = current->next;
		free(current);
		current = current_next;
	}
	*begin_list = NULL;
}
