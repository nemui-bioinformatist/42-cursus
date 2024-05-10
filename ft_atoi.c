/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnomura <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/07 20:53:07 by rnomura           #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2024/05/11 02:22:34 by rnomura          ###   ########.fr       */
=======
/*   Updated: 2024/05/08 14:56:20 by rnomura          ###   ########.fr       */
>>>>>>> 4499a6c719ba98ac8de188a8d1c536fbeed16144
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static int	isspace(int c)
{
	if ((9 <= c && c <= 13) || c == 32)
		return (1);
	return (0);
}

int	ft_atoi(const char *str)
{
	int					sign;
	unsigned long long	result;

	sign = 1;
	result = 0;
	while (isspace(*str))
		str++;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sign *= -1;
		str++;
	}
	while (*str && ('0' <= *str && *str <= '9'))
	{
		result = result * 10 + (*str - '0');
		if ((sign < 0) && ((unsigned long long)LONG_MIN < result))
			return ((int)LONG_MIN);
		else if ((sign > 0) && ((unsigned long long)LONG_MAX < result))
			return ((int)LONG_MAX);
		str++;
	}
	return (sign * (int)result);
}
