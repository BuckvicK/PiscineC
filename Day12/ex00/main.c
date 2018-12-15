/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krakharo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/01 13:35:21 by krakharo          #+#    #+#             */
/*   Updated: 2018/11/01 13:35:57 by krakharo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_file.h"

int	main(int argc, char **argv)
{
	int		fd;

	if (argc > 2)
	{
		ft_putstr(2, "Too many arguments.\n");
		return (1);
	}
	if (argc < 2)
	{
		ft_putstr(2, "File name missing.\n");
		return (1);
	}
	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
	{
		return (1);
	}
	ft_display_file(fd);
	if (close(fd) == -1)
	{
		return (1);
	}
	return (0);
}
