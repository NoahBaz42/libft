/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbaz-sil <nbaz-sil@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/06 00:29:45 by nbaz-sil          #+#    #+#             */
/*   Updated: 2026/05/13 02:13:48 by nbaz-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_split(char const *s, char c)
{
	/*
		there is s that is the string you need to sperate and put it in a double pointer and 'c' is the the charcater that sperates the words itself.
		In a word count funtion of your, you need to have a varible that increment(like increase) every time it finds the sperator that is 'c'
		You need to then allocate the memory for the double pointer ** 
		and give the count of words you found (char **)malloc									((word_count + 1)					 * 	sizeof(char *));
												/\														/|										/\
												||														||										||
												||														||										||
												||														||										||
		the allocation type you want store in your variable (** variable hopefully)	the count of words you find		the size you want the each pointer to be inside the ** pointer
		
		--------------------------------------------------------------------------------------------------------------------------------------------------------------------------

		then you need to fill the each pointer inside the double pointer with the word you found
		for that you need to check again until you reah the seperator 'c and you also need keep a length tracker of the string until you reach the sperator
		then you need to fill the pointer inside the double pointer with the string you found until you reached the seprator 'c'
		If one pointer inside the double pointer fails you need to back all the allocation you made and free them.
	*/ 

	
	char	**ar_ar;
	int len = 1;
	ar_ar = malloc(len + 1);






	free(ar_ar);
}
/*
	Allocates memory (using malloc(3)) and returns an
	array of strings obtained by splitting ’s’ using
	the character ’c’ as a delimiter.
	
	Each string in the returned array is allocated
	independently.
	The array of pointers itself is also allocated
	dynamically.
	
	External Function: malloc, free
	
	Return Value: The array of new strings
	resulting from the split.
	NULL if any allocation fails.
	
	The returned structure will be released using:
	1) free() on each string in the array;
	2) free() the array itself.

	The returned array must be NULL terminated.
*/