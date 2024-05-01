/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnomura <rnomura@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/28 22:06:33 by rnomura           #+#    #+#             */
/*   Updated: 2024/04/29 17:00:17 by rnomura          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*arr;
	int		i;

	i = 0;
	if (len == 0 && ft_strlen(s) <= start)
		return (ft_strdup(" "));
	if (ft_strlen(s) < start + len)
		len = ft_strlen(s) - start;
	arr = (char *)malloc((len + 1) * sizeof(char));
	if (arr != '\0')
	{
		while (len--)
		{
			arr[i] = s[start + i];
			i++;
		}
		arr[i] = '\0';
	}
	return (arr);
}
