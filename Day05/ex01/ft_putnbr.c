/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krakharo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/22 16:12:10 by krakharo          #+#    #+#             */
/*   Updated: 2018/10/22 17:47:42 by krakharo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_revstr(char *str, int i)
{
	int		j;
	char	buff;

	j = 0;
	while (j < i / 2)
	{
		buff = str[j];
		str[j] = str[i - j - 1];
		str[i - j++ - 1] = buff;
	}
}

void	ft_putnbr(int nb)
{
	char	str[11];
	int		i;
	int		j;

	i = 0;
	j = 0;
	if (nb == -2147483648 || nb < 0)
	{
		ft_putchar('-');
		ft_putnbr(nb / 10 * -1);
		ft_putchar(nb % 10 * -1 + '0');
		nb = -1 * nb;
		return ;
	}
	if (nb == 0)
		ft_putchar('0');
	while (nb != 0)
	{
		str[i++] = nb % 10 + '0';
		nb = nb / 10;
	}
	ft_revstr(str, i);
	i = 0;
	while (str[i] != '\0')
		ft_putchar(str[i++]);
}
