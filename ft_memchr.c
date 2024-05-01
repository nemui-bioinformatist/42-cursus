/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnomura <rnomura@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 17:42:10 by rnomura           #+#    #+#             */
/*   Updated: 2024/04/29 18:32:48 by rnomura          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned const char	*arr;
	unsigned char		ch;

	arr = (unsigned const char *)s;
	ch = (unsigned char)c;
	while (n--)
	{
		if (*arr == ch)
			return ((void *)arr);
		arr++;
	}
	return (NULL);
}
