/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbaz-sil <nbaz-sil@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/06 00:29:52 by nbaz-sil          #+#    #+#             */
/*   Updated: 2026/05/06 13:55:05 by nbaz-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	size_t	i;
	char	*str;

	i = 0;
	str = (char *) malloc(ft_strlen(s) + 1);
	if (!str)
		return (NULL);
	while (s[i])
	{
		str[i] = s[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

/*  
	The  strdup() function returns a pointer to a new string which is a du‐
	plicate of the string s.  Memory for the new string  is  obtained  with
	malloc(3), and can be freed with free(3).


	RETURN VALUE
	On  success,  the strdup() function returns a pointer to the duplicated
	string.  It returns NULL if insufficient memory was available,
	with er‐rno set to indicate the cause of the error.
*/

/* int	main(void)
{
	const char	*str = "okay lets see how this goes";
	char * str1;
	char * str2;
	str1 = ft_strdup(str);
	str2 = strdup(str);
	printf("%s\n", str1);
	printf("%s\n", str2);

	free(str1);
	free(str2);
	return (0);
} */