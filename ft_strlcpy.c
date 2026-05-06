/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbaz-sil <nbaz-sil@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/06 00:30:13 by nbaz-sil          #+#    #+#             */
/*   Updated: 2026/05/06 00:31:26 by nbaz-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{

}

/* 
	The strlcpy() and strlcat() functions copy and concatenate strings re‐
	spectively.  They are designed to be safer, more consistent,
	and less er‐
	ror prone replacements for strncpy(3) and strncat(3).  Unlike those func‐
	tions,strlcpy() and strlcat() take the full size of the buffer (not just
	the length) and guarantee to NUL-terminate the result (as long as size is
	larger than 0 or, in the case of strlcat(),as long as there is at least
	one byte free in dst).  Note that a byte for the NUL should be included
	in size.  Also note that strlcpy() and strlcat() only operate on true “C”
	strings.  This means that for strlcpy() src must be NUL-terminated and
	for strlcat() both src and dst must be NUL-terminated.

	The strlcpy() function copies up to size
	- 1 characters from the NUL-ter‐
	minated string src to dst, NUL-terminating the result.
	
	RETURN VALUES
	The strlcpy() and strlcat() functions return the total length of the
	string they tried to create.  For strlcpy() that means the length of src.
	For strlcat() that means the initial length of dst plus the length of
	src.  While this may seem somewhat confusing,
	it was done to make truncation detection simple.
*/

/*
	The following code fragment illustrates the simple case:

	char *s, *p, buf[BUFSIZ];

	(void)strlcpy(buf, s, sizeof(buf));
	(void)strlcat(buf, p, sizeof(buf));

	To detect truncation, perhaps while building a pathname,
	something like the following might be used:

	char *dir, *file, pname[MAXPATHLEN];

	...		return(1);
	else
		return(0);
	if (strlcpy(pname, dir, sizeof(pname)) >= sizeof(pname))
	goto toolong;
	if (strlcat(pname, file, sizeof(pname)) >= sizeof(pname))
	goto toolong;
	Since it is known how many characters were copied the first time,
	things can be sped up a bit by using a copy instead of an append:

	char *dir, *file, pname[MAXPATHLEN];
	size_t n;

	n = strlcpy(pname, dir, sizeof(pname));
	if (n >= sizeof(pname))
		goto toolong;
	if (strlcpy(pname + n, file, sizeof(pname) - n) >= sizeof(pname)
	- n)
	goto toolong;

	However, one may question the validity of such optimizations, as they de‐
	feat the whole purpose of strlcpy() and strlcat().  As a matter of fact,
	the first version of this manual page got it wrong.
*/

/* Some functions that you must reimplement, such as strlcpy, strlcat,
	and bzero, are not included by default in the GNU C Library (glibc).
	To test them against the system standard, you may need to include
	<bsd/string.h> and compile with the -lbsd flag.
	This behaviour is specific to glibc systems. If you are curious,
	take the opportunity to explore the differences between glibc and BSD libc.
*/