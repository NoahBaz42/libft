/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbaz-sil <nbaz-sil@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/06 00:29:00 by nbaz-sil          #+#    #+#             */
/*   Updated: 2026/05/13 19:29:04 by nbaz-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//CHECK MAIN / IF PROTECTION IS NEEDED

int	ft_lstsize(t_list *lst)
{
	int	len;

	len = 0;
	if (!lst)
		return (1);
	while (lst)
	{
		lst = lst->next;
		len++;
	}
	return (len);
}
/*
	Counts the number of nodes in the list.

	lst: The beginning of the list.
	
	Return Value: The length of the list

	External Function: None
*/

/* int main(void)
{
	t_list	*node;

    node = ft_lstnew("goodbye, world.");
    if (!node)
    {
        printf("Failed! :D\n");
        return (1);
    }
    
    printf("\nNode content: %s\n", (char *)node->content);
    printf("\nNext ptr is null: %d\n\n", node->next == NULL);
    free(node);
    
    return (0);
} */
