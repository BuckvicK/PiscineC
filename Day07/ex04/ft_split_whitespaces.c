/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krakharo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/25 14:51:08 by krakharo          #+#    #+#             */
/*   Updated: 2018/10/25 23:32:44 by krakharo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int		ft_check_sep(char c, char *sep)
{
	int	i;

	i = -1;
	while (*(sep + ++i) != '\0')
		if (*(sep + i) == c)
			return (1);
	return (0);
}

// int		*ft_gword(char *str, char *sep, int n)
// {
// 	int	z;

// 	z = 0;
// 	sep = " \t\n";
// 	if (z != n)
// 	{
// 		z++;
// 	}
// 	return (0);
// }

int		ft_wordlen(char *str/*, int n*/)
{
	char 	*sep;
	int		skip;

	sep = " \t\n";
	skip = 0;
	while (ft_check_sep(*(str + skip), sep) == 1)
		skip++;
	// char	*sep;
	// int		start;

	// start = n;
	// if (ft_check_sep(*(str + start), sep))
	// {
	// 	while (ft_check_sep(*(str + start), sep) == 1)
	// 		start++;
	// }
	// else
	// {
	// 	// while (ft_check_sep(*(str + start), sep) == 0)
	// 	// 	start++;
	// }
	return (skip);
}

// int		ft_nword(*str, n)
// {
// 	int	i;
// 	int	x;
// 	int	fl;

// 	i = 0;
// 	x = 0;
// 	fl = 0;
// 	while (ft_check_sep(*(str + i++), " \t\n") == 0 && fl != 2)
// 	{
// 		fl = 1;

// 	}
// 	return (x);
// }

int		ft_count_word(char *str, char *sep)
{
	int		i;
	int		count;
	int		fl;

	i = 0;
	count = 0;
	fl = 0;
	while (*(str + i) != '\0')
	{
		if (ft_check_sep(*(str + i), sep) == 0)
		{
			if (*(str + i++) != '\0' && fl == 0)
			{
				count++;
				fl = 1;
			}
		}
		else
		{
			fl = 0;
			while (ft_check_sep(*(str + i), sep))
				i++;
		}
	}
	return (count);
}

char	**ft_split_whitespaces(char *str)
{
	char	**res;
	char	*s;
	int		i;
	int		start;
	int		end;

	i = -1;
	s = " \t\n";
	start = 0;
	end = 0;
	res = (char**)malloc(sizeof(**res) * (ft_count_word(str, s) + 1));
	str = str + ft_wordlen(str);
	printf("FUNC:%s\n", str);
	// while (*(str + end + 1) != '\0')
	// {
	// 	start = ft_wordlen(str, end);
	// 	end = ft_wordlen(str, start);
	// 	printf("%d\n", end - start);
	// }
	// while (++i <= ft_count_word(str, s))
	// {	
	// 	start = ft_wordlen();
	// 	*(res + i) = (char*)malloc(sizeof(*res) * (ft_wordlen(str + start, i)) + 1);
	// }
	// i = 0;
	// while (++i < ft_count_word(str, s))
	// {

	// }
	// *(*(res) + i) = '\0';
	return (res);
}
