/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbaz-sil <nbaz-sil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/13 11:28:36 by nbaz-sil          #+#    #+#             */
/*   Updated: 2026/04/14 19:33:35 by nbaz-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_toupper(int c)
{
	if(c >= 'a' && c <= 'z')
	{
		c += 32;
		return(c);
	}
	else
		return(c);
}
/*        If c is a lowercase letter, toupper() returns its uppercase equivalent,
	 if an uppercase representation exists in the  current  locale.   Other‐
	 wise,  it  returns c.  The toupper_l() function performs the same task,
	 but uses the locale referred to by the locale handle locale.
	 If  c  is neither an unsigned char value nor EOF, the behavior of these
	 functions is undefined.

	 The behavior of toupper_l() and tolower_l() is undefined if  locale  is
	 the special locale object LC_GLOBAL_LOCALE (see duplocale(3)) or is not
	 a valid locale object handle.

RETURN VALUE
	 The value returned is that of the converted letter, or c if the conver‐
	 sion was not possible.
 */