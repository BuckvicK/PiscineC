/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krakharo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/30 16:34:18 by krakharo          #+#    #+#             */
/*   Updated: 2018/10/30 16:34:21 by krakharo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		*ft_sort(int *tab, int length)
{
	int		i;
	int		fl;
	int		tmp;

	i = 0;
	fl = 0;
	while (i < (length - 1) && fl == 0)
	{
		if (*(tab + i) > *(tab + i + 1))
		{
			tmp = *(tab + i);
			*(tab + i) = *(tab + i + 1);
			*(tab + i + 1) = tmp;
			fl = 1;
		}
		i++;
		if (fl == 1)
		{
			fl = 0;
			i = 0;
		}
	}
	return (tab);
}

int		*ft_map(int *tab, int length, int (*f)(int))
{
	int		i;
	int		*res;

	res = ft_sort(tab, length);
	i = -1;
	while (++i < 7)
		f(*(res + i));
	return (res);
}
