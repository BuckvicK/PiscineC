/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_err.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krakharo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/01 22:35:07 by krakharo          #+#    #+#             */
/*   Updated: 2018/11/01 23:31:18 by krakharo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_file.h"

void	ft_print_err(int err)
{
	if (err == ENOENT)
		ft_putstr(2, "No such file or directory\n");
	if (err == EMFILE)
		ft_putstr(2, "Too many open files\n");
	if (err == 13)
		ft_putstr(2, "Permission denied\n");
	if (err == 12)
		ft_putstr(2, "Invalid access code\n");
	if (err == EBADF)
		ft_putstr(2, "Bad file descriptor\n");
	if (err == EINTR)
		ft_putstr(2, "Interrupted system call\n");
	if (err == EIO)
		ft_putstr(2, "Input/output error\n");
}
