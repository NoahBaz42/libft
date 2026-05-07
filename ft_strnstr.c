/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbaz-sil <nbaz-sil@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/06 00:30:33 by nbaz-sil          #+#    #+#             */
/*   Updated: 2026/05/07 15:50:49 by nbaz-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	k;

	i = 0;
	if (little[i] == '\0')
		return ((char *)big);
	while (big[i] && i < len)
	{
		k = 0;
		while (big[i + k] != '\0' && big[i + k] == little[k] && i + k < len)
		{
			k++;
			if (little[k] == '\0')
			{
				return ((char *)&big[i]);
			}
		}
		i++;
	}
	return (NULL);
}
/* 
	The strnstr() function locates the first occurrence 
	of the null-terminated string little in the string big,
	where not more than len characters are searched.
	Characters that appear after a ‘\0’ character are not searched.

	If little is an empty string, big is returned;
	if little occurs nowhere in big, NULL is returned;
	otherwise a pointer to the first character of
	the first occurrence of little is returned.

	The following sets the pointer ptr to NULL,
	because only the first 4 characters of largestring
	are searched:

	const char *largestring = "Foo Bar Baz";
	const char *smallstring = "Bar";
	char *ptr;

	ptr = strnstr(largestring, smallstring, 4);
*/
//to be tested
#include <string.h>

int main(void)
{
	const char *heystack = "Foo Bar Baz";
	const char *needle = "Bar";

	printf("%s\n", ft_strnstr(heystack, needle, 4));
	printf("%s\n", strnstr(heystack, needle, 4));
	return (0);
}