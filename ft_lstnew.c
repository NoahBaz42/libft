/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbaz-sil <nbaz-sil@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/06 00:28:56 by nbaz-sil          #+#    #+#             */
/*   Updated: 2026/05/12 19:34:10 by nbaz-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*nod;

	nod = malloc(sizeof(t_list));
	if (!nod)
		return (NULL);
	nod->content = content;
	nod->next = NULL;
	return (nod);
}
/*
	Allocates memory (using malloc(3)) and returns
	a new node. The ’content’ member variable is
	initialized with the given parameter ’content’.
	The variable ’next’ is initialized to NULL.

	content: The content to store in the new node.
	
	Return Value: A pointer to the new node
	External Function: malloc 
*/

/* int main(void)
{
	t_list	*node;

    node = ft_lstnew("goodbye world.");
    if (!node)
    {
        printf("Failed :D\n");
        return (1);
    }
    
    printf("Node content: %s\n", (char *)node->content);
    printf("Next ptr is null: %d\n", node->next == NULL);
    free(node);
    
    return (0);
} */
