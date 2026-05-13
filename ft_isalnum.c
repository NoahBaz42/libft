/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbaz-sil <nbaz-sil@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/06 00:28:03 by nbaz-sil          #+#    #+#             */
/*   Updated: 2026/05/13 19:25:17 by nbaz-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1);
	else if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}

/*
	isalnum() checks for an alphanumeric character.
	The values returned are nonzero if the character c
	falls into the tested class, and zero if not.
 */

/*  int main(void)
{
	int c = 'a';
	int d = '1';
	int e = ';';


	printf("%d\n",ft_isalnum(c));
	printf("%d\n",ft_isalnum(d));
	printf("%d\n",ft_isalnum(e));

	return (0);
} */
