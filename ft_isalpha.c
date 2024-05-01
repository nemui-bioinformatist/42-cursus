/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnomura <rnomura@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 17:55:14 by rnomura           #+#    #+#             */
/*   Updated: 2024/04/28 19:16:15 by rnomura          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	if ((65 <= c && c <= 90) || (97 <= c && c <= 122))
		return (1);
	return (0);
}

/*
#include <stdio.h>

int	main(void)
{
    printf("%d\n", ft_isalpha(57));//9,answer->0
    printf("%d\n", ft_isalpha(68));//D,answer->1
}
*/
