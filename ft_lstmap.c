/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbaz-sil <nbaz-sil@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/06 00:28:51 by nbaz-sil          #+#    #+#             */
/*   Updated: 2026/05/15 11:53:29 by nbaz-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*node;
	t_list	*new_l;
	void	*items;

	if (!lst || !f || !del)
		return (NULL);
	new_l = NULL;
	while (lst)
	{
		items = f(lst->content);
		node = ft_lstnew(items);
		if (!node)
		{
			del(items);
			ft_lstclear(&new_l, del);
			return (NULL);
		}
		ft_lstadd_back(&new_l, node);
		lst = lst->next;
	}
	return (new_l);
}
/* 
	Iterates through the list ’lst’, applies the
	function ’f’ to each node’s content, and creates
	a new list resulting of the successive applications
	of the function ’f’. The ’del’ function is used to
	delete the content of a node if needed. 

	lst: The address of a pointer to a node.
	f: The address of the function applied to each
	node’s content.
	del: The address of the function used to delete a
	node’s content if needed.
	
	Return Value: The new list.
	NULL if the allocation fails.
	
	External Function: malloc, free 
*/