/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: noah-baz <noah-baz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/06 00:27:48 by nbaz-sil          #+#    #+#             */
/*   Updated: 2026/05/16 19:20:42 by noah-baz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t memb, size_t size)
{
	void	*ptr;
	size_t	ms;

	if (size && memb > SIZE_MAX / size)
		return (NULL);
	if (memb == 0 || size == 0)
		return (malloc(0));
	ms = memb * size;
	ptr = malloc(ms);
	if (!ptr)
		return (NULL);
	ft_bzero (ptr, ms);
	return (ptr);
}

/* 
	The calloc() function allocates memory for an
	array of nmemb elements of size bytes each and
	returns a pointer to the allocated memory.
	The memory is set to zero.
	If nmemb or size is 0, then calloc() returns either
	NULL, or a unique pointer value that can later
	be successfully passed to free().
	
	If the multiplication of nmemb and size would result
	in integer overflow, then calloc() returns an error.
	By contrast, an integer overflow would not be detected
	in the following call to malloc(), with the result that
	an incorrectly sized block of memory would be allocated:
	malloc(nmemb * size);

	RETURN VALUE
	calloc() returns a pointer to the allocated memory, which is
	suitably aligned for any built-in type.
	On error, it returns NULL.
	NULL may also be returned by a successful call to calloc()
	with nmemb or size equal to zero.
*/
/* int main()
{
	int n = 10;
	int i = 0;
	int *ptr = (int*)calloc(n, sizeof(int));
	while (i < n)
	{
    	printf("%d ", ptr[i]);
		i++;
	} 
	printf("\n");
	free(ptr);
} */