/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnomura <rnomura@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/04 12:58:58 by rnomura           #+#    #+#             */
/*   Updated: 2024/05/05 18:19:18 by rnomura          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	moji;

	moji = (char)c;
	while (*s)
	{
		if (*s == moji)
			return ((char *)s);
		s++;
	}
	if (moji == '\0')
		return ((char *)s);
	return (0);
}
/*
int	main(void)
{
	const char	s[7] = "bonjur";
	int			c;

	c = 98;
	printf("%s\n", ft_strchr(s,c));
}
*/
