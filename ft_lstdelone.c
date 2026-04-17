/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbaz-sil <nbaz-sil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/13 11:28:50 by nbaz-sil          #+#    #+#             */
/*   Updated: 2026/04/13 13:06:47 by nbaz-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void ft_lstdelone(t_list *lst, void (*del)(void
*))
{
	
}
/* Parameters
 lst: The node to free.
del: The address of the function used to delete
the content.
Return Value None
External Function free
Description Takes a node as parameter and frees its content
using the function ’del’. Free the node itself but
does NOT free the next node. */