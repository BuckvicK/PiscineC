/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krakharo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/24 13:25:47 by krakharo          #+#    #+#             */
/*   Updated: 2018/10/24 13:25:50 by krakharo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (*(str + i) != '\0')
	{
		ft_putchar(*(str + i));
		i++;
	}
	ft_putchar('\n');
}

int		ft_cat_params(char *a, char *b)
{
	int	i;

	i = 0;
	while (*(a + i) != '\0' && *(b + i) != '\0')
	{
		if (*(a + i) > *(b + i))
		{
			return (1);
		}
		else if (*(a + i) < *(b + i))
			return (0);
		i++;
	}
	return (0);
}

void	ft_reset(int *i, int *fl)
{
	*i = 1;
	*fl = 0;
}

int		main(int argc, char **argv)
{
	int		i;
	char	*buff;
	int		fl;

	i = 1;
	fl = 0;
	while (i < argc)
	{
		if (i + 1 != argc && ft_cat_params(*(argv + i), *(argv + i + 1)) == 1)
		{
			buff = *(argv + i + 1);
			*(argv + i + 1) = *(argv + i);
			*(argv + i) = buff;
			fl = 1;
		}
		i++;
		if (i == argc && fl == 1)
			ft_reset(&i, &fl);
	}
	i = 0;
	while (++i < argc)
		ft_putstr(*(argv + i));
	return (0);
}
