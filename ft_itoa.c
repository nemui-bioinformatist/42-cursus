/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnomura <rnomura@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/01 23:24:49 by rnomura           #+#    #+#             */
/*   Updated: 2024/05/04 01:18:16 by rnomura          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	count_digit(long num)
{
	size_t	count;

	count = 0;
	if (num == 0)
		return (1);
	while (num > 0)
	{
		num = (num - num % 10) / 10;
		count++;
	}
	return (count);
}

void	getdigitstoarray(char *arr, size_t count, size_t sign, long num)
{
	arr[count] = '\0';
	while (sign < count)
	{
		arr[--count] = num % 10 + '0';
		num = (num - num % 10) / 10;
	}
	if (sign == 1)
		arr[0] = '-';
}

char	*ft_itoa(int n)
{
	size_t	sign;
	size_t	count;
	long	num;
	char	*arr;

	count = 0;
	sign = 0;
	num = n;
	if (n < 0)
	{
		sign = 1;
		num *= -1;
		count++;
	}
	count += count_digit(num);
	arr = (char *)malloc((count + 1) * sizeof(char));
	if (!arr)
		return (NULL);
	getdigitstoarray(arr, count, sign, num);
	return (arr);
}
/*
#include <stdio.h>

int	main(void)
{
	int num1, num2;
	char *str1, *str2;
	num1 = -1234;
	num2 = 12345;
	str1 = ft_itoa(num1);
	str2 = ft_itoa(num2);
	printf("%s\n", str1);
	printf("%s\n", str2);
	// 使用後にメモリを解放
	//free(str1);
	//free(str2);
	printf("%zu", count_digit(num2));
	return (0);
}*/
