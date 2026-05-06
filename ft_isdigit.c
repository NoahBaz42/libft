/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbaz-sil <nbaz-sil@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/06 00:28:14 by nbaz-sil          #+#    #+#             */
/*   Updated: 2026/05/06 00:32:10 by nbaz-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
/*
	isdigit() checks for a digit (0 through 9).
	The values returned are nonzero if the character c
	falls into the tested class, and zero if not.
 */

/* int main(void)
{
	int c = '1';
	int d = 'Z';

	printf("%d\n",ft_isdigit(c));
	printf("%d\n",ft_isdigit(d));

	return (0);
} */
