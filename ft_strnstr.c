/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbaz-sil <nbaz-sil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/13 11:28:22 by nbaz-sil          #+#    #+#             */
/*   Updated: 2026/04/30 06:58:48 by nbaz-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
}
/* 
	The strnstr() function locates the first occurrence of the null-termi‐
	nated string little in the string big,
	where not more than len characters
	are searched.  Characters that appear after a ‘\0’ character are not
	searched.  Since the strnstr() function is a FreeBSD specific API, it
	should only be used when portability is not a concern.

	If little is an empty string, big is returned; if little occurs nowhere
	in big, NULL is returned; otherwise a pointer to the first character of
	the first occurrence of little is returned.

	The following sets the pointer ptr to NULL, because only the first 4
	characters of largestring are searched:

	const char *largestring = "Foo Bar Baz";
	const char *smallstring = "Bar";
	char *ptr;

	ptr = strnstr(largestring, smallstring, 4);
*/