/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_file.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krakharo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/01 14:32:23 by krakharo          #+#    #+#             */
/*   Updated: 2018/11/01 23:25:47 by krakharo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_FILE_H
# define FT_FILE_H

# include <sys/types.h>
# include <unistd.h>
# include <fcntl.h>
# include <errno.h>
# include <sys/stat.h>

void		ft_putchar(int target, char c);
void		ft_putstr(int target, char *str);
void		ft_cat(int fd, char *prog, char *file);
void		ft_display_files(int argc, char **argv);
void		ft_print_err(int err);

#endif
