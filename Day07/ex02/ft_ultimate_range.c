/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krakharo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/25 12:46:15 by krakharo          #+#    #+#             */
/*   Updated: 2018/10/25 12:46:17 by krakharo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;

	i = -1;
	if (min >= max)
	{
		*range = (NULL);
		return (0);
	}
	*range = (int*)malloc(sizeof(**range) * (max - min));
	while (*(*range + i) < max - 1)
	{
		i++;
		*(*range + i) = min++;
	}
	return (i);
}
