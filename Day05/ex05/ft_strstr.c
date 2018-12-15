/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krakharo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/22 22:28:25 by krakharo          #+#    #+#             */
/*   Updated: 2018/10/22 22:28:49 by krakharo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strstr(char *str, char *to_find)
{
	int i;
	int k;

	k = 0;
	i = 0;
	while (*(str + i) != '\0')
	{
		if (*(str + i) == *(to_find))
		{
			to_find++;
			k++;
		}
		else
		{
			to_find = to_find - k;
			i = i - k;
			k = 0;
		}
		if (*to_find == '\0')
		{
			return (str + i - k + 1);
		}
		i++;
	}
	return (0);
}
