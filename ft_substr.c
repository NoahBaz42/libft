/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbaz-sil <nbaz-sil@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/06 00:30:44 by nbaz-sil          #+#    #+#             */
/*   Updated: 2026/05/06 00:31:03 by nbaz-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	int		i;
	int		k;
	char	*sub;

	i = 0;
	k = 0;
	sub = malloc(len + 1);
	while (i < start)
	{
		i++;
	}
	while (s[i] != '\0')
	{
		sub[k] = s[i];
		i++;
		k++;
	}
	return (sub);
}
/*
Parameters s: The original string from which to create the
substring.
start: The starting index of the substring within
’s’.
len: The maximum length of the substring.
Return Value The substring.
NULL if the allocation fails.
External Function malloc
Description Allocates memory (using malloc(3)) and returns a
substring from the string ’s’.
The substring starts at index ’start’ and has a
maximum length of ’len
*/