/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbaz-sil <nbaz-sil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/13 11:27:27 by nbaz-sil          #+#    #+#             */
/*   Updated: 2026/04/14 19:27:45 by nbaz-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_isprint(int c)
{
	if(c >= ' ' && c <= '~')
		return(1);
	else
		return(0);
}
/*   isprint()
              checks for any printable character including space.
RETURN VALUE
       The  values  returned  are  nonzero  if  the character c falls into the
       tested class, and zero if not.
 */

 /* For the character classification functions (isalpha, isdigit,
isalnum, isascii, isprint), the return value must be:
• 1 if the character matches the tested class
• 0 if the character does not match */