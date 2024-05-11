/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnomura <rnomura@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 17:31:46 by rnomura           #+#    #+#             */
/*   Updated: 2024/05/11 22:55:49 by rnomura          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;
	size_t	i;

	i = 0;
	if (count && size && count > SIZE_MAX / size)
		return (0);
	ptr = (void *)malloc(count * size);
	if (ptr != NULL)
	{
		while (i < count * size)
			((char *)ptr)[i++] = 0;
	}
	return (ptr);
}
