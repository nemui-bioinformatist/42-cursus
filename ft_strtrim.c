/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnomura <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 20:12:44 by rnomura           #+#    #+#             */
/*   Updated: 2024/05/06 20:34:47 by rnomura          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strtrim(char const *s1, char const *set)
{
	char *memo;
	int start;
	int end;

	if(!s1 || !set)
		return(NULL);
	if(!ft_strlen(s1))
		return(ft_strdup("");
	while (s1[start] && ft_strchr(set, s1[start]))
		start++;
	while (end > start && ft_strchr(set, s1[end]))
		end--;
	memo = (char *)malloc
	
}
