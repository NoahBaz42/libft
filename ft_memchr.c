/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: noah-baz <noah-baz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/06 00:29:04 by nbaz-sil          #+#    #+#             */
/*   Updated: 2026/05/16 19:16:53 by noah-baz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*str;

	i = 0;
	str = (unsigned char *) s;
	while (i < n)
	{
		if (str[i] == (unsigned char) c)
			return ((void *)&str[i]);
		i++;
	}
	return (NULL);
}
/*
	The memchr()  function  scans  the initial n bytes of 
	the memory area pointed to by s for the first instance
	of c. Both c and the bytes  of the memory area pointed 
	to by s are interpreted as unsigned char.

	RETURN VALUE
	The  memchr() returns a pointer to the matching byte or
	NULL if the character does not occur in the given memory area.
*/
/* int	main(void)
{
	const void *str = "where is my mind";
	int	c = 'm';

	printf ("%s \n", (char *)ft_memchr (str, c, 12));
	printf ("%s \n", (char *) memchr (str, c, 12));

} */