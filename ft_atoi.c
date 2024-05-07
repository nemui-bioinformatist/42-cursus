/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnomura <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/07 20:53:07 by rnomura           #+#    #+#             */
/*   Updated: 2024/05/07 23:25:13 by rnomura          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <limits.h>

int isspace(int c)
{
	if ((9 <= c && c <= 12) || c == 32)
		return(1);
	return(0);
}

int ft_atoi(const char *str)
{
	int sign;
	unsigned long long result;

	sign = 1;
	i = 0;
	while(isspace(*str))
		str++;
	if(*str == '-' || *str == '+')
	{
		if (*str == '-')
			sign *= -1;
		str++;
	}
	while(*str)
	{
		result = result + (*str - '0') * 10;
		if ((sign < 0) && (LONG_MIN < result))
			return(LONG_MIN);
		else if ((sign > 0) && (LONG_MAX < result))
			return(LONG_MAX);
		str++;
	}
	return (sign * (int)result);
}
