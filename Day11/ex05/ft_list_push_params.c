/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_params.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krakharo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/31 19:25:48 by krakharo          #+#    #+#             */
/*   Updated: 2018/10/31 19:25:49 by krakharo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_list_push_params(int ac, char **av)
{
	int		i;
	t_list	*tmp;
	t_list	*res;
	t_list	*start;

	i = 2;
	res = ft_create_elem(av[1]);
	start = res;
	if (res)
	{
		while (i < ac)
		{
			tmp = ft_create_elem(av[i]);
			res->next = tmp;
			res = res->next;
			i++;
		}
	}
	return (start);
}
