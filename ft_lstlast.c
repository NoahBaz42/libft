/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbaz-sil <nbaz-sil@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/06 00:28:48 by nbaz-sil          #+#    #+#             */
/*   Updated: 2026/05/12 19:53:31 by nbaz-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//CHECK THE MAINS

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*tp;

	if(!lst)
		return (NULL);
	tp = lst;
	while(tp->next)
		tp = tp->next;
	return (tp);
}
/* 
	Returns the last node of the list.
		
	lst: The beginning of the list.

	External Function: None
*/
int	main(void)
{
	t_list	*list;
	t_list	*last;
	t_list	*tmp;

    list = NULL;
    last = NULL;
    last = ft_lstlast(list);
    printf("Last of empty list: %s\n", last ? "NOT NULL (WRONG)" : "NULL (OK)");
    list = ft_lstnew("First");
    last = ft_lstlast(list);
    printf("Last of single-node list: %s\n", (char *)last->content);
    list->next = ft_lstnew("Second");
    list->next->next = ft_lstnew("Third");
    last = ft_lstlast(list);
    printf("Last of three-node list: %s\n", (char *)last->content);
    while (list)
    {
        tmp = list->next;
        free(list);
        list = tmp;
    }
    return (0);
}