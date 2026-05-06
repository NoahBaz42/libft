/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbaz-sil <nbaz-sil@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/06 00:28:07 by nbaz-sil          #+#    #+#             */
/*   Updated: 2026/05/06 00:32:14 by nbaz-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z' ) || (c >= 'a' && c <= 'z'))
		return (1);
	else
		return (0);
}
/*
	isalpha() checks for an alphabetic character;
	The values returned are nonzero if the character c
	falls into the tested class, and zero if not.
*/
/* 
int main(void)
{
	int c = 'a';
	int d = '1';

	printf("%d\n",ft_isalpha(c));
	printf("%d\n",ft_isalpha(d));

	return (0);
}
*/