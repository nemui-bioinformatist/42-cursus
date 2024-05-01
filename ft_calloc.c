/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnomura <rnomura@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 17:31:46 by rnomura           #+#    #+#             */
/*   Updated: 2024/04/29 18:31:24 by rnomura          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*calloc(size_t nmemb, size_t size)
{
	void	*ptr;
	size_t	i;

	i = 0;
	ptr = (void *)malloc(nmemb * size);
	if (ptr != NULL)
	{
		while (i < nmemb * size)
			((char *)ptr)[i++] = 0;
	}
	return (ptr);
}
