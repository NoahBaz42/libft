/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbaz-sil <nbaz-sil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/13 11:29:00 by nbaz-sil          #+#    #+#             */
/*   Updated: 2026/04/13 13:06:53 by nbaz-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

t_list *ft_lstmap(t_list *lst, void *(*f)(void *),
void (*del)(void *))
{
	
}
/* Parameters
 lst: The address of a pointer to a node.
f: The address of the function applied to each
node’s content.
del: The address of the function used to delete a
node’s content if needed.
Return Value The new list.
NULL if the allocation fails.
External Function malloc, free
Description Iterates through the list ’lst’, applies the
function ’f’ to each node’s content, and creates
a new list resulting of the successive applications
of the function ’f’. The ’del’ function is used to
delete the content of a node if needed. */