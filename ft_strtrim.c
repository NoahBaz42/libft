/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbaz-sil <nbaz-sil@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/06 00:30:40 by nbaz-sil          #+#    #+#             */
/*   Updated: 2026/05/11 19:42:35 by nbaz-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//to be tested
char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;
	char	*s;
	
	if(!s1)
		return (ft_strdup(""));
	if(!set)
		return (ft_strdup(s1));
	i = 0;
	while(s1[i] && ft_strchr(set, s1[i]))
		i++;
	j = ft_strlen(s1);
	while(j > i && ft_strchr(set, s1[j]))
		j--;
	s = malloc(j - i + 1);
	if(!s)
		return (NULL);
	ft_memcpy(s, s1, j - i);
	s[j - i] = '\0';
	return(s);
}
/*
	Allocates memory (using malloc(3)) and returns a
	copy of ’s1’ with characters from ’set’ removed
	from the beginning and the end.
	Return Value: The trimmed string.
	NULL if the allocation fails.
	External Function: malloc 
*/