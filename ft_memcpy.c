/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnomura <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/01 23:30:31 by rnomura           #+#    #+#             */
/*   Updated: 2024/05/01 23:30:45 by rnomura          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char		*memo_dst;
	const char	*memo_src;
	size_t		i;

	memo_dst = (char *)dst;
	memo_src = (const char *)src;
	i = 0;
	while (n--)
	{
		memo_dst[i] = memo_src[i];
		i++;
	}
	return ((void *)memo_dst);
}
