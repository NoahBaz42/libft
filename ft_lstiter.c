/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbaz-sil <nbaz-sil@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/06 00:28:44 by nbaz-sil          #+#    #+#             */
/*   Updated: 2026/05/12 20:19:14 by nbaz-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list	*tp;
	tp = lst;
	while (tp)
	{
		f(tp->content);
		tp = tp->next;
	}
}
/* 
	Iterates through the list ’lst’ and applies the
	function ’f’ to the content of each node.

	lst: The address of a pointer to a node.
	f: The address of the function to apply to each
	node’s content.
	
	Return Value: None
	External Function: None  
*/