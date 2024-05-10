/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnomura <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/11 06:19:00 by rnomura           #+#    #+#             */
/*   Updated: 2024/05/11 06:38:47 by rnomura          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list *tmp;
	void	*content;
	t_list new_node;

	if (!lst && !(*f) && !del)
		return ;
	while(lst)
	{
		content = (*************f)(content);
		new_node = ft_lstnew(content);
		if (!new_node)
		{
			//free
		}	
		tmp = (t_list *)malloc(sizeof(t_list));
		if (!tmp)
			return(NULL);
		*f(lst->content);

	}
}
