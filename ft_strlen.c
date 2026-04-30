/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbaz-sil <nbaz-sil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/13 11:28:12 by nbaz-sil          #+#    #+#             */
/*   Updated: 2026/04/30 06:33:49 by nbaz-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
	{
		i++;
	}
	return (i);
}

/*
	strlen() calculates the length of the string pointed to
	by s, excluding the terminating null byte ('\0').
	It returns the number of bytes in the string pointed to by s.
*/

/*
#include <stdio.h>

int	main(void)
{
	const char* str = NULL;
	printf("%zu\n",ft_strlen(str));
	return(0);
}
*/