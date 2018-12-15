/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krakharo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/30 18:15:04 by krakharo          #+#    #+#             */
/*   Updated: 2018/10/30 18:15:06 by krakharo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int		i;
	int		fl;
	int		sign;

	i = 0;
	fl = 0;
	sign = f(*tab, *(tab + length - 1));
	while (i < (length - 1) && fl == 0)
	{
		if (*(tab + i) * sign < *(tab + i + 1) * sign)
		{
			return (0);
			fl = 1;
		}
		i++;
		if (fl == 1)
		{
			fl = 0;
			i = 0;
		}
	}
	return (1);
}
