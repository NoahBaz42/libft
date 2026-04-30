/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbaz-sil <nbaz-sil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/13 11:28:53 by nbaz-sil          #+#    #+#             */
/*   Updated: 2026/04/30 06:49:20 by nbaz-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
}
/* 
Parameters
lst: The address of a pointer to a node.
f: The address of the function to apply to each
node’s content.
Return Value None
External Function None
Description Iterates through the list ’lst’ and applies the
function ’f’ to the content of each node. 
*/