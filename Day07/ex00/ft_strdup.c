/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krakharo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/24 23:46:02 by krakharo          #+#    #+#             */
/*   Updated: 2018/10/24 23:46:04 by krakharo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *str)
{
	int		i;
	char	*res;

	i = 0;
	while (*(str + i) != '\0')
	{
		i++;
	}
	res = (char*)malloc(sizeof(*res) * (i + 1));
	*(res + i) = '\0';
	i = 0;
	while (*(str + i) != '\0')
	{
		*(res + i) = *(str + i);
		i++;
	}
	return (res);
}
