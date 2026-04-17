/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbaz-sil <nbaz-sil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/13 11:27:22 by nbaz-sil          #+#    #+#             */
/*   Updated: 2026/04/14 19:27:33 by nbaz-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_isascii(int c)
{
	if(c >= '\0' && c<= '~')
		return(1);
	else
		return(0);
}
/*   isascii()
              checks whether c is a 7-bit unsigned char value that  fits  into
              the ASCII character set.

RETURN VALUE
       The  values  returned  are  nonzero  if  the character c falls into the
       tested class, and zero if not.
 */

 /* For the character classification functions (isalpha, isdigit,
isalnum, isascii, isprint), the return value must be:
• 1 if the character matches the tested class
• 0 if the character does not match */