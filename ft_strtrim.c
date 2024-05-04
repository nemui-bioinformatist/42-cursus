/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnomura <rnomura@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 17:14:53 by rnomura           #+#    #+#             */
/*   Updated: 2024/05/04 01:48:37 by rnomura          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	start(char const *s1, char const *s2)
{
	int	i;
	int	j;

	i = 0;
	while (s1[i])
	{
		j = 0;
		while (s2[j])
		{
			if (s1[i] == s2[j])
			{
				i++;
				j = -1;
			}
			j++;
		}
		return (i);
	}
	return (i);
}

int	end(char const *s1, char const *s2)
{
	int	i;
	int	j;

	i = ft_strlen(s1) - 1;
	j = 0;
	while (i >= 0)
	{
		j = 0;
		while (s2[j])
		{
			if (s1[i] == s2[j])
			{
				i--;
				j = -1;
			}
			j++;
		}
		return (i);
	}
	return (i);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		j;
	size_t	k;
	char	*arr;

	i = start(s1, set);
	j = end(s1, set);
	k = 0;
	arr = (char *)malloc((j - i + 1 + 1) * sizeof(char));
	if (arr != NULL)
	{
		while (i <= j)
		{
			arr[k] = s1[i];
			i++;
			k++;
		}
		arr[k] = '\0';
	}
	return (arr);
}
