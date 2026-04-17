/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbaz-sil <nbaz-sil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/13 11:27:32 by nbaz-sil          #+#    #+#             */
/*   Updated: 2026/04/14 19:27:53 by nbaz-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void *ft_memchr(const void *s, int c, size_t n)
{
	
}
/*   The  memchr()  function  scans  the initial n bytes of the memory area
       pointed to by s for the first instance of c.  Both c and the bytes  of
       the memory area pointed to by s are interpreted as unsigned char.

	        The  memrchr()  function is like the memchr() function, except that it
       searches backward from the end of the n bytes pointed to by s  instead
       of forward from the beginning.

	   RETURN VALUE
       The  memchr() and memrchr() functions return a pointer to the matching
       byte or NULL if the character does not occur in the given memory area.

       The rawmemchr() function returns a pointer to the  matching  byte,  if
       one  is  found.   If no matching byte is found, the result is unspeci‐
       fied.
 */