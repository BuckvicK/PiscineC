/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krakharo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/25 13:12:22 by krakharo          #+#    #+#             */
/*   Updated: 2018/10/25 13:12:24 by krakharo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_size_params(int argc, char **argv)
{
	int		size;
	int		i;
	int		j;
	char	*tmp;

	size = 0;
	i = 1;
	j = 0;
	while (i < argc)
	{
		tmp = argv[i];
		while (*(tmp + j) != '\0')
		{
			size++;
			j++;
		}
		size++;
		i++;
		j = 0;
	}
	return (size);
}

char	*ft_concat_params(int argc, char **argv)
{
	int		i;
	int		j;
	int		k;
	int		size;
	char	*res;

	size = ft_size_params(argc, argv);
	res = (char *)malloc(sizeof(*res) * (size + 1));
	i = 1;
	j = 0;
	k = 0;
	while (i < argc)
	{
		while (*(argv[i] + j) != '\0')
		{
			res[k] = *(argv[i] + j);
			k++;
			j++;
		}
		j = 0;
		i++;
		if (i != argc)
			res[k++] = '\n';
	}
	return (res);
}
