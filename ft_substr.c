/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnomura <rnomura@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/04 15:31:15 by rnomura           #+#    #+#             */
/*   Updated: 2024/05/05 17:21:40 by rnomura          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*arr;
	unsigned int	i;
	unsigned int	index;

	i = 0;
	if (len == 0 || ft_strlen(s) <= start)
		return (ft_strdup(""));
	if (ft_strlen(s) <= start + len - 1)
		index = ft_strlen(s) - 1;
	else
		index = start + len - 1;
	arr = (char *)malloc((index - start + 1 + 1) * sizeof(char));
	if (arr != NULL)
	{
		while (i + start <= index)
		{
			arr[i] = s[start + i];
			i++;
		}
		arr[i] = '\0';
	}
	return (arr);
}
