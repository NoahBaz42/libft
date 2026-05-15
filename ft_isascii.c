/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbaz-sil <nbaz-sil@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/06 00:28:11 by nbaz-sil          #+#    #+#             */
/*   Updated: 2026/05/15 14:29:19 by nbaz-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	else
		return (0);
}

/*
	isascii() checks whether c is a 7-bit unsigned char
	value that  fits  into the ASCII character set.
	
	The values returned are:
	1 if the character c falls into the tested class;
	0 if not.
 */
/* int main(void)
{
    int a = 'a'; 
    int b = 200;

    printf("%d\n", ft_isascii(a));
    printf("%d\n", ft_isascii(b));

    return 0;
} */