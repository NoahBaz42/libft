/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbaz-sil <nbaz-sil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/13 11:27:35 by nbaz-sil          #+#    #+#             */
/*   Updated: 2026/04/30 06:50:13 by nbaz-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
}

/* 
	The  memcmp()  function compares the first n bytes (each interpreted as
	unsigned char) of the memory areas s1 and s2.

	RETURN VALUE
	The memcmp() function returns  an  integer  less  than,  equal  to,  or
	greater than zero if the first n bytes of s1 is found, respectively, to
	be less than, to match, or be greater than the first n bytes of s2.

	For a nonzero return value, the sign is determined by the sign  of  the
	difference  between  the  first  pair of bytes (interpreted as unsigned
	char) that differ in s1 and s2.

	If n is zero, the return value is zero.
 */