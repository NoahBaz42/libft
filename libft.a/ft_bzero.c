/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbaz-sil <nbaz-sil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/13 11:26:28 by nbaz-sil          #+#    #+#             */
/*   Updated: 2026/04/14 19:26:30 by nbaz-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void ft_bzero(void *s, size_t n)
{
	
}
/* DESCRIPTION
       The  bzero()  function  erases  the  data  in the n bytes of the memory
       starting at the location pointed to by s, by writing zeros (bytes  con‐
       taining '\0') to that area.
RETURN VALUE
       None.
 */

 /* Some functions that you must reimplement, such as strlcpy, strlcat,
and bzero, are not included by default in the GNU C Library (glibc).
To test them against the system standard, you may need to include
<bsd/string.h> and compile with the -lbsd flag.
This behaviour is specific to glibc systems. If you are curious,
take the opportunity to explore the differences between glibc and BSD
libc. */