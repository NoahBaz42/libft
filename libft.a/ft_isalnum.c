/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbaz-sil <nbaz-sil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/13 11:27:16 by nbaz-sil          #+#    #+#             */
/*   Updated: 2026/04/14 19:27:24 by nbaz-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_isalnum(int c)
{
	if(c >= 'A' && c <= 'Z' | c >= 'a' && c <= 'z' | c >= '0' && c <= '9')
		return(1);
	else
		return(0);
}

/* isalnum()
              checks for an alphanumeric character; it is equivalent to (isal‐
              pha(c) || isdigit(c)).

       isalpha()
              checks  for an alphabetic character; in the standard "C" locale,
              it is equivalent to (isupper(c) ||  islower(c)).   In  some  lo‐
              cales, there may be additional characters for which isalpha() is
              true—letters which are neither uppercase nor lowercase.

RETURN VALUE
       The  values  returned  are  nonzero  if  the character c falls into the
       tested class, and zero if not.
 */

 /* For the character classification functions (isalpha, isdigit,
isalnum, isascii, isprint), the return value must be:
• 1 if the character matches the tested class
• 0 if the character does not match */