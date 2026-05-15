/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbaz-sil <nbaz-sil@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/06 00:30:05 by nbaz-sil          #+#    #+#             */
/*   Updated: 2026/05/15 00:34:09 by nbaz-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		size1;
	int		size2;
	char	*new;

	if (!s1 && !s2)
		return (NULL);
	if (!s1)
		return ((char *)s2);
	if (!s2)
		return ((char *)s1);
	size1 = ft_strlen(s1);
	size2 = ft_strlen(s2);
	new = malloc(size1 + size2 + 1);
	if (!new)
		return (NULL);
	ft_strlcpy(&new[0], s1, size1 + 1);
	ft_strlcpy(&new[size1], s2, size2 + 1);
	new[size1 + size2] = '\0';
	return (new);
}

/*
	strjoin() Allocates memory (using malloc(3)) and 
	returns a new string, which is the result of 
	concatenating ’s1’ and ’s2’.

	The return value is the new string.
	NULL if the allocation fails. 
*/

/* int	main(void)
{
	char	*str1;
	char	*str2;
	char	*str3;

	str1 = ft_strdup("hello ");
	str2 = ft_strdup("world");
	str3 = ft_strjoin(str1, str2);
	
	printf("%s\n", str3);
	free(str1);
	free(str2);
	free(str3);
} */
