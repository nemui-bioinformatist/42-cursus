/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnomura <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/01 23:32:49 by rnomura           #+#    #+#             */
/*   Updated: 2024/05/01 23:33:01 by rnomura          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	const char	*start;

	start = s;
	s += ft_strlen(s);
	while (s >= start)
	{
		if (*s == c)
			return ((char *)s);
		s--;
	}
	return (NULL);
}
