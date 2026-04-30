/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbaz-sil <nbaz-sil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/13 11:27:43 by nbaz-sil          #+#    #+#             */
/*   Updated: 2026/04/30 03:59:52 by nbaz-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*p;

	p = s;
	while (n > 0)
	{
		*p++ = c;
		n--;
	}
	return (s);
}

/*
	The memset() function fills the first n bytes of the
	memory area pointed to by s with the constant byte c.
	The memset() function returns a pointer to the memory
	area s.
*/

/* 
	int main(void)
	{
		char str[12];
		ft_memset((void*)str, 56, 4);
		printf("%s\n", str);
		return(0);
	} 
*/