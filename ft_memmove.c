/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnomura <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/01 23:31:35 by rnomura           #+#    #+#             */
/*   Updated: 2024/05/01 23:31:48 by rnomura          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char		*m_dest;
	const char	*m_src;

	m_dest = (char *)dest;
	m_src = (const char *)src;
	if (m_dest < m_src)
	{
		while (n--)
			*m_dest++ = *m_src++;
	}
	else if (m_src < m_dest)
	{
		m_dest += n;
		m_src += n;
		while (n--)
			*--m_dest = *--m_src;
	}
	else
		return (dest);
	return (dest);
}
