/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krakharo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/22 18:41:43 by krakharo          #+#    #+#             */
/*   Updated: 2018/10/23 14:32:13 by krakharo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	i;
	int	res;
	int sign;

	i = -1;
	res = 0;
	sign = 1;
	while (*(str + ++i) != '\0')
	{
		while (*str == '0' || (*str >= 9 && *str <= 13) || *str == ' ')
			str++;
		if (*str == '-')
		{
			sign = -1;
			str++;
		}
		else if (*str == '+')
			str++;
		if (*(str + i) >= '0' && *(str + i) <= '9')
			res = res * 10 + *(str + i) - '0';
		else
			return (res);
	}
	return (res * sign);
}
