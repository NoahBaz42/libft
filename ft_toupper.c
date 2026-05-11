/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbaz-sil <nbaz-sil@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/06 00:30:51 by nbaz-sil          #+#    #+#             */
/*   Updated: 2026/05/09 13:58:06 by nbaz-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 97 && c <= 122)
		return (c - 32);
	else
		return (c);
}
/*
	If c is a lowercase letter, toupper() returns its uppercase
	equivalent, if an uppercase representation exists in the
	current  locale. Otherwise, it returns c.
	
	If the argument is a lower-case letter, the toupper() function
	returns the corresponding upper-casse letter if there is one;
	otherwise, the argument is returned unchanged.
*/
/* int main(void)
{
	int c = 'n';
	printf("%c\n",(char)ft_toupper(c));
	return (0);
} */