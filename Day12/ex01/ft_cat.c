/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cat.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krakharo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/01 17:38:27 by krakharo          #+#    #+#             */
/*   Updated: 2018/11/01 23:25:39 by krakharo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_file.h"

void	ft_err(char *prog, char *file)
{
	ft_putstr(2, prog);
	ft_putstr(2, ": ");
	ft_putstr(2, file);
	ft_putstr(2, ": ");
	ft_print_err(errno);
}

void	ft_cat(int fd, char *prog, char *file)
{
	char	buf;

	while (read(fd, &buf, 1))
	{
		ft_putchar(1, buf);
	}
	ft_putchar(1, '\n');
	if (errno != 0)
		ft_err(prog, file);
}

int		ft_strcmp(char *s1, char *s2)
{
	while (*s1 == *s2 && *s1 != '\0' && *s2 != '\0')
	{
		s1++;
		s2++;
	}
	if (*s1 == '\0' && *s2 == '\0')
		return (1);
	return (0);
}

void	ft_display_files(int argc, char **argv)
{
	int		fd;
	int		j;

	j = 0;
	while (++j < argc)
	{
		if (ft_strcmp(argv[j], "-"))
		{
			ft_cat(0, argv[0], argv[j]);
			continue ;
		}
		fd = open(argv[j], O_RDONLY);
		if (fd == -1)
		{
			ft_err(argv[0], argv[j]);
			continue ;
		}
		ft_cat(fd, argv[0], argv[j]);
		if (close(fd) == -1)
		{
			ft_err(argv[0], argv[j]);
			continue ;
		}
		errno = 0;
	}
}
