/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnomura <rnomura@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/11 06:19:00 by rnomura           #+#    #+#             */
/*   Updated: 2024/05/11 22:11:50 by rnomura          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list *tmp;
	//t_list *memo;
	t_list *new_node;
	void *content;

	if (!lst || !f || !del)
		return (NULL);
	new_node = NULL;
	while (lst)
	{
		content = f(lst->content);
		tmp = ft_lstnew(content);
		//memo = lst->next;
		//ft_lstdelone(lst,del);
		ft_lstadd_back(&new_node, tmp);
		//lst = memo;
		lst = lst->next;
	}
	return (new_node);
}