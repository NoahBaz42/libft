/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbaz-sil <nbaz-sil@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/06 00:28:24 by nbaz-sil          #+#    #+#             */
/*   Updated: 2026/05/12 20:05:05 by nbaz-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//CHECK MAINS AND PROTECTION

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*end;

	end = ft_lstlast(*lst);
	if (!*lst)
		*lst = new;
	end->next = new;
}

/* 
	Adds the node ’new’ at the end of the list.

	lst: The address of a pointer to the first node of
	a list.
	new: The address of a pointer to the node to be
	added.

	Return Value: None
	External Function: None  
*/

int	main(void) {
    t_list *lst = NULL;
    
    ft_lstadd_back(&lst, ft_lstnew("Hello"));
    printf("1st node: %s\n", (char*)lst->content);
    
    ft_lstadd_back(&lst, ft_lstnew("World"));
    printf("2nd node: %s\n", (char*)lst->next->content);
    
    ft_lstadd_back(&lst, ft_lstnew("!"));
    printf("3rd node: %s\n", (char*)lst->next->next->content);
    
    printf("Next of last node: %s\n",
		lst->next->next->next ? "NOT NULL" : "NULL");
    
    return (0);
}
