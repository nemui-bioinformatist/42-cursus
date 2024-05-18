/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnomura <rnomura@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/11 02:37:18 by rnomura           #+#    #+#             */
/*   Updated: 2024/05/18 09:42:42 by rnomura          ###   ########.fr       */
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
	int		sign;
	long	result;

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
		str++;
		if (ft_isdigit(*str) && ((LONG_MIN + (*str - '0')) / 10 > -result)
			&& (sign < 0))
			return ((int)LONG_MIN);
		else if (ft_isdigit(*str) && ((LONG_MAX - (*str - '0')) / 10 < result)
			&& (sign > 0))
			return ((int)LONG_MAX);
	}
	return (sign * (int)result);
}

//int main()
//{
//	printf("ans = %d\n", atoi("-12345678901234567890123456789123456789123456789"));
//	printf("res = %d\n", ft_atoi("-12345678901234567890123456789123456789123456789"));
//}
