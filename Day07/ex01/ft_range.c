/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krakharo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/24 23:55:27 by krakharo          #+#    #+#             */
/*   Updated: 2018/10/24 23:55:28 by krakharo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int *res;
	int	i;

	i = -1;
	if (min >= max)
		return (NULL);
	res = (int*)malloc(sizeof(*res) * (max - min));
	while (*(res + ++i) < max - 1)
	{
		i++;
		*(res + i) = min++;
	}
	return (res);
}
