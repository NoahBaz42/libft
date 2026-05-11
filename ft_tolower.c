/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbaz-sil <nbaz-sil@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/06 00:30:47 by nbaz-sil          #+#    #+#             */
/*   Updated: 2026/05/09 13:52:53 by nbaz-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 65 && c <= 90)
		return (c + 32);
	else
		return (c);
}

/*
	If c is an uppercase letter, tolower() returns  its  lowercase
	equivalent, if a lowercase representation exists in the current
	locale.  Otherwise, it returns c.

	If the argument is an upper-case letter, the tolower() function
	returns the corresponding lower-case letter if there is one;
	otherwise, the argument is returned unchanged.
*/

/* int main(void)
{
	int c = 'N';
	printf("%c\n",(char)ft_tolower(c));
	return (0);
} */