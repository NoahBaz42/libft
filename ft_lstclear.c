/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbaz-sil <nbaz-sil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/13 11:28:46 by nbaz-sil          #+#    #+#             */
/*   Updated: 2026/04/13 13:06:44 by nbaz-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void ft_lstclear(t_list **lst, void (*del)(void
*))
{
	
}
/* Parameters 
lst: The address of a pointer to a node.
del: The address of the function used to delete
the content of the node.
Return Value None
External Function free
Description Deletes and frees the given node and all its
successors, using the function ’del’ and free(3).
Finally, set the pointer to the list to NULL. */