/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbaz-sil <nbaz-sil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/13 11:26:28 by nbaz-sil          #+#    #+#             */
/*   Updated: 2026/04/27 19:49:51 by nbaz-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

void ft_bzero(void *s, size_t n)
{
	unsigned char* p;
       
       p = s;
       while(n > 0)
       {
              *p++ = 0;
              n--;
       }
}

// Em vez de 21, usar ft_strlen();
int main(void)
{
       //unsigned int a = 0;
       char str[]= "ola isto e uma string";
       ft_bzero(str, 21);
       printf("%s\n", str);
       return(0);
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