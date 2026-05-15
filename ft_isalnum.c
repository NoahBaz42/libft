/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbaz-sil <nbaz-sil@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/06 00:28:03 by nbaz-sil          #+#    #+#             */
/*   Updated: 2026/05/15 14:27:50 by nbaz-sil         ###   ########.fr       */
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
	
	The values returned are: 
	1 if the character c falls into the tested class;
	0 if not.
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
