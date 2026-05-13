/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbaz-sil <nbaz-sil@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/06 00:28:32 by nbaz-sil          #+#    #+#             */
/*   Updated: 2026/05/12 20:19:45 by nbaz-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//check main and protections

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*tp;

	while(lst)
	{
		tp =(*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = tp;
	}
	free(*lst);
	*lst = NULL;
}
/*
	Deletes and frees the given node and all its
	successors, using the function ’del’ and free(3).
	Finally, set the pointer to the list to NULL.

	lst: The address of a pointer to a node.
	del: The address of the function used to delete
	the content of the node.
	
	Return Value: None
	External Function: free 
*/