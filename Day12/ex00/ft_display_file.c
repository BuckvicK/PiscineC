/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krakharo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/01 14:52:39 by krakharo          #+#    #+#             */
/*   Updated: 2018/11/01 14:52:53 by krakharo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_file.h"

void	ft_display_file(int fd)
{
	char	buf;

	while (read(fd, &buf, 1))
	{
		ft_putchar(1, buf);
	}
	ft_putchar(1, '\n');
}
