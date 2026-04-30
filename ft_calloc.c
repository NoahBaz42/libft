/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbaz-sil <nbaz-sil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/13 11:27:11 by nbaz-sil          #+#    #+#             */
/*   Updated: 2026/04/30 06:47:52 by nbaz-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t memb, size_t size)
{
}
/* 
	The malloc() function allocates size bytes 
	and returns a pointer to the allocated  memory.
	The memory is not initialized.  If size is 0,
	then malloc() returns either NULL, or a unique
	pointer value that can  later be successfully
	passed to free().

	The calloc() function allocates memory for an
	array of nmemb elements of size bytes each and
	returns a pointer to the allocated memory.
	The memory is set to zero. If nmemb or size is 0,
	then  calloc()  returns either  NULL, or a unique
	pointer value that can later be successfully passed to free().
	If the multiplication of nmemb and size would result
	in integer overflow, then calloc() returns an error.
	By contrast, an integer overflow would not be detected
	in the following  call  to  malloc(), with the result
	that an incorrectly sized block of memory would be allocated:
	malloc(nmemb * size);

	RETURN VALUE
	calloc() returns a pointer to the allocated
	memory,  which  is  suitably  aligned for any built-in type.  On error,
	it returns NULL. NULL may also be returned by a successful
	call  to  calloc() with nmemb or size equal to zero.

	The free() function returns no value.

 	Depending on your current operating system, the ’calloc’ function’s
	behavior may differ from its man page description. You must follow
	this rule: If nmemb or size is 0, then calloc() returns a unique
	pointer value that can be successfully passed to free(void).
*/