/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbaz-sil <nbaz-sil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/13 11:28:33 by nbaz-sil          #+#    #+#             */
/*   Updated: 2026/04/30 06:59:30 by nbaz-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		c -= 32;
		return (c);
	}
	else
		return (c);
}

/*
	If c is an uppercase letter, tolower() returns  its  lowercase  equiva‐
	lent, if a lowercase representation exists in the current locale.  Oth‐
	erwise, it returns c.  The tolower_l() function performs the same task,
	but uses the locale referred to by the locale handle locale.

	If  c  is neither an unsigned char value nor EOF, the behavior of these
	functions is undefined.
	RETURN VALUE
	The value returned is that of the converted letter, or c if the conver‐
	sion was not possible.
*/