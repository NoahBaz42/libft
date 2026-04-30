/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbaz-sil <nbaz-sil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/13 11:27:59 by nbaz-sil          #+#    #+#             */
/*   Updated: 2026/04/30 06:51:27 by nbaz-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while (*s)
	{
		if (s == c)
			return ((s)s++);
	}
	return (s);
}
/* 
	The  strchr() function returns a pointer to the first occurrence of the
	character c in the string s.
   The strchr() and strrchr() functions return a pointer  to  the  matched
	character  or NULL if the character is not found.  The terminating null
	byte is considered part of the string, so that if  c  is  specified  as
	'\0', these functions return a pointer to the terminator.
 */