/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnomura <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/01 23:34:43 by rnomura           #+#    #+#             */
/*   Updated: 2024/05/01 23:34:53 by rnomura          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;

	i = 0;
	if (dstsize == 0)
		return (ft_strlen(src));
	else if (ft_strlen(dst) < dstsize)
	{
		while (src[i] != '\0' && i <= dstsize - ft_strlen(dst) - 1)
		{
			dst[ft_strlen(dst) + i] = src[i];
			i++;
		}
		dst[ft_strlen(dst) + i] = '\0';
		return (ft_strlen(dst) + ft_strlen(src) - i);
	}
	else
		return (ft_strlen(dst) + dstsize);
}
