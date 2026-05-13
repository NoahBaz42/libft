/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbaz-sil <nbaz-sil@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/06 00:27:42 by nbaz-sil          #+#    #+#             */
/*   Updated: 2026/05/13 19:24:49 by nbaz-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
}

/*
	The  bzero()  function  erases  the  data  in the n bytes of the
	memory starting at the location pointed to by s, by writing zeros
	(bytes  containing '\0') to that area.
	There is no return value.
	... you may need to include <bsd/string.h> and compile with
	the -lbsd flag.
*/
/* int	main(void)
{
	char	s[] = "tudo em 0";
	char	p[] = "tudo em 0";

	bzero(s, 8);
	ft_bzero(p, 8);

	printf("bzero:%s\n", s);
	printf("ft_bzero:%s\n", p);
	return (0);
} */
