/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbaz-sil <nbaz-sil@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/06 00:28:37 by nbaz-sil          #+#    #+#             */
/*   Updated: 2026/05/12 20:09:49 by nbaz-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (!lst || !del)
		return ;
	del(lst->content);
	free(lst);
}
/* 
	Takes a node as parameter and frees its content
	using the function ’del’.
	Free the node itself but does NOT free the next node. 

	lst: The node to free.
	del: The address of the function used to delete
	the content.
	
	Return Value: None
	External Function: free
*/