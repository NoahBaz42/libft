/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbaz-sil <nbaz-sil@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/06 00:28:29 by nbaz-sil          #+#    #+#             */
/*   Updated: 2026/05/13 19:27:01 by nbaz-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!new || !lst)
		return ;
	new->next = *lst;
	*lst = new;
}
/*
	Adds the node ’new’ at the beginning of the list.

	Return Value: None
	External Function: None
	
	lst: The address of a pointer to the first node of
	a list.
	new: The address of a pointer to the node to be
	added.
*/
// line 45: if(lst...blabla..next) -?- do this, else -:- , do that
/* int	main(void)
{
    t_list *lst = NULL;
    
    ft_lstadd_front(&lst, ft_lstnew("world."));
    printf("\n1st node: %s\n", (char*)lst->content);
    
    ft_lstadd_front(&lst, ft_lstnew("goodbye "));
    printf("\n1st node after add: %s\n", (char*)lst->content);
    printf("\n2nd node: %s\n", (char*)lst->next->content);
    
    printf("\nNext of last node: %s\n\n", lst->next->next ? "NOT NULL" : "NULL");
    
    return (0);
} */
