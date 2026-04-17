/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbaz-sil <nbaz-sil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/13 11:27:25 by nbaz-sil          #+#    #+#             */
/*   Updated: 2026/04/14 19:27:39 by nbaz-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_isdigit(int c)
{
	if(c >= '0' && c <= '9')
		return(1);
	else
		return(0);
}
/*   isdigit()
              checks for a digit (0 through 9).
RETURN VALUE
       The  values  returned  are  nonzero  if  the character c falls into the
       tested class, and zero if not.

 */

/*  For the character classification functions (isalpha, isdigit,
isalnum, isascii, isprint), the return value must be:
• 1 if the character matches the tested class
• 0 if the character does not match */