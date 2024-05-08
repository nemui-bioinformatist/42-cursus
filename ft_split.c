/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnomura <rnomura@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/28 21:50:55 by rnomura           #+#    #+#             */
/*   Updated: 2024/05/08 15:06:00 by rnomura          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_split(char const *s, char c)
{
	int	index;
	int	count;

	index = 0;
	count = 0;
	while (*s)
	{
		if (*s == c)
			index = 0;
		else if (index == 0)
		{
			count++;
			index = 1;
		}
		s++;
	}
	return (count);
}

static char	*split_dup(char const *s, size_t len)
{
	char	*mini_arr;
	size_t	i;

	i = 0;
	mini_arr = (char *)malloc((len + 1) * sizeof(char));
	if (!mini_arr)
		return (NULL);
	while (i < len)
	{
		mini_arr[i] = s[i];
		i++;
	}
	mini_arr[i] = '\0';
	return (mini_arr);
}

static size_t	count_len(char const *s, char c)
{
	size_t	len;
	size_t	i;

	i = 0;
	len = 0;
	while (s[i] && s[i] != c)
	{
		len++;
		i++;
	}
	return (len);
}

static void	ft_free(char **arr, int index)
{
	while (index >= 0)
		free(arr[--index]);
	free(arr);
}

char	**ft_split(char const *s, char c)
{
	char	**arr;
	size_t	i;
	size_t	count;

	i = 0;
	count = count_split(s, c);
	arr = (char **)malloc((count + 1) * sizeof(char *));
	if (!arr)
		return (NULL);
	while (i < count)
	{
		while (*s && *s == c)
			s++;
		arr[i++] = split_dup(s, count_len(s, c));
		if (!arr[i - 1])
		{
			ft_free(arr, i);
			return (NULL);
		}
		s += count_len(s, c);
	}
	arr[i] = NULL;
	return (arr);
}
/*
int	main(void)
{
	char const	*s1;
	char		c;
	char const	*s2;
	char const	*s3;

	s1 = "aaaBBbbnBc";
	c = 'B';
	printf("%d\n", count_split(s1, c)); //3
	s2 = "aaBBBcBB";
	printf("%d\n", count_split(s2, c)); //2
	s3 = "    BBBaaaaBggB  BBa";
	printf("%d\n", count_split(s3, c)); //2
	for (int i = 0; i < 3; i++)
		printf("%s\n", ft_split(s1, c)[i]); //aaa,bbn,c
}
*/
