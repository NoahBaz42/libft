/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbaz-sil <nbaz-sil@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/06 00:30:24 by nbaz-sil          #+#    #+#             */
/*   Updated: 2026/05/12 16:25:46 by nbaz-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*str;
	size_t	i;

	i = 0;
	if (!s || !f)
		return (NULL);
	str = malloc(ft_strlen(s) + 1);
	if (!str)
		return (NULL);
	while (s[i])
	{
		str[i] = f(i, s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}
/*
	Applies the function f to each character of the
	string s, passing its index as the first argument
	and the character itself as the second.
	A new string is created (using malloc(3)) to store the
	results from the successive applications of f.

	Return Value: The string created from the successive
	applications of ’f’.
	Returns NULL if the allocation fails.

	External Function: malloc
*/
/* char	just_the_fkin_tolower(unsigned int i, char c)
{
	(void)i;
	return (ft_tolower(c));
}
int main()
{
	char	*str = "WHAT'S UUUP";
	printf("\nbefore function: %s\n\n", str);
	str = ft_strmapi(str, just_the_fkin_tolower);
	printf("after  function: %s\n\n", str);
	free(str);
	str = NULL;
	return(0);
} */