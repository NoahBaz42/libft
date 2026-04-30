/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbaz-sil <nbaz-sil@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/13 11:27:22 by nbaz-sil          #+#    #+#             */
/*   Updated: 2026/04/30 06:16:05 by nbaz-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	if (c >= '\0' && c <= '~')
		return (1);
	else
		return (0);
}

/*
	isascii() checks whether c is a 7-bit unsigned char value
	that  fits  into the ASCII character set.
	The values returned are nonzero if the character c
	falls into the tested class, and zero if not.
 */