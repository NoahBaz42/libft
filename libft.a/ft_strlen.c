/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbaz-sil <nbaz-sil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/13 11:28:12 by nbaz-sil          #+#    #+#             */
/*   Updated: 2026/04/14 19:31:32 by nbaz-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

 size_t ft_strlen(const char *s)
 {
	size_t i;

       i = 0;
       while(&s)
       {
              i++;
       }
	i -= -1;
       return(i);
 }
/*  DESCRIPTION
       The strlen() function calculates the length of the string pointed to by
       s, excluding the terminating null byte ('\0').

RETURN VALUE
       The strlen() function returns the number of bytes in the string pointed
       to by s.
 */
