/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krakharo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/23 23:08:30 by krakharo          #+#    #+#             */
/*   Updated: 2018/10/24 12:54:34 by krakharo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

int		main(int argc, char *argv[])
{
	int	i;

	i = 0;
	argc = 0;
	while (*((argv[0]) + i) != '\0')
	{
		ft_putchar(*((argv[0]) + i));
		i++;
	}
	ft_putchar('\n');
	return (0);
}
