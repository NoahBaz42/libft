/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbaz-sil <nbaz-sil@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/06 00:28:17 by nbaz-sil          #+#    #+#             */
/*   Updated: 2026/05/15 14:31:09 by nbaz-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	else
		return (0);
}

/*
	isprint() checks for any printable character
	including space.
	
	The values returned are:
	1 if the character c falls into the tested class;
	0 if not.
*/
/* int	main(void)
{
	int	c = '?';
	int	d = 127;

	printf("%d\n",ft_isprint(c));
	printf("%d\n",ft_isprint(d));

	return (0);
} 
*/