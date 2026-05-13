/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbaz-sil <nbaz-sil@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/06 00:29:56 by nbaz-sil          #+#    #+#             */
/*   Updated: 2026/05/13 19:34:04 by nbaz-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	size_t	i;

	i = 0;
	if (!s || !f)
		return ;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}
/*
	Applies the function ’f’ to each character of the
	string passed as argument, passing its index as
	the first argument. Each character is passed by
	address to ’f’ so it can be modified if necessary.

	Return Value: None
	External Function: None 
*/

/* void	just_the_fkin_tolower(unsigned int i, char *c)
{
	(void)i;
	 *c = ft_tolower(*c);
}
int main()
{
	char	*str = strdup("WHAT'S UUUP");
	printf("\nbefore function: %s\n\n", str);
	ft_striteri(str, just_the_fkin_tolower);
	printf("after  function: %s\n\n", str);
	return(0);
} */