/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbaz-sil <nbaz-sil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/13 11:26:28 by nbaz-sil          #+#    #+#             */
/*   Updated: 2026/04/30 06:40:19 by nbaz-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*p;

	p = s;
	while (n > 0)
	{
		*p++ = 0;
		n--;
	}
}

/*
	The  bzero()  function  erases  the  data  in the n bytes of the
	memory starting at the location pointed to by s, by writing zeros
	(bytes  containing '\0') to that area.
	There is no return value.
	... you may need to include <bsd/string.h> and compile with
	the -lbsd flag.
*/

// NOTA: Em vez de 21, usar ft_strlen();
/* int	main(void)
{
	char	str[] = "ola isto e uma string";

	// unsigned int a = 0;
	ft_bzero(str, 21);
	printf("%s\n", str);
	return (0);
} */