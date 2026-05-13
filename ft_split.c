/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbaz-sil <nbaz-sil@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/06 00:29:45 by nbaz-sil          #+#    #+#             */
/*   Updated: 2026/05/13 19:33:28 by nbaz-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	the_words(const char *s, char c)
{
	size_t	words;
	size_t	i;

	i = 0;
	words = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i] && s[i] != c)
			words++;
		while (s[i] && s[i] != c)
			i++;
	}
	return (words);
}

static void	free_them(char **ar_ar, int j)
{
	while (j > 0)
	{
		j--;
		free(ar_ar[j]);
	}
	if (j == 0)
		free(ar_ar);
}

static char	**the_lett_aloc(const char *s, char c, char **ar_ar, int j)
{
	size_t	start;
	size_t	len;
	size_t	i;

	i = 0;
	while (s[i])
	{
		len = 0;
		while (s[i] == c)
			i++;
		if (s[i] && s[i] != c)
		{
			start = i;
			while (s[i] != c)
			{
				len++;
				i++;
			}
			ar_ar[j] = ft_substr(s, start, len);
			if (!ar_ar[j])
				free_them(ar_ar, j);
			j++;
		}
	}
	return (ar_ar);
}

char	**ft_split(char const *s, char c)
{
	char	**ar_ar;
	size_t	words;

	if (!s)
		return (NULL);
	words = the_words(s, c);
	ar_ar = malloc(sizeof(char *) * (words + 1));
	if (!ar_ar)
		return (NULL);
	if (words == 0)
	{
		ar_ar[0] = NULL;
		return (ar_ar);
	}
	the_lett_aloc(s, c, ar_ar, 0);
	ar_ar[words] = NULL;
	return (ar_ar);
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

/* int main(int ac, char **av)
{
    char **array;
    int i;

    i = 0;
    if (ac != 3)
        return (1);
    array = ft_split(av[1], av[2][0]);
    if (!array)
        return (printf("%s\n", "Array nulo"));
    while (array[i])
    {
        printf("%s\n", array[i]);
        i++;
    }
    for (int i = 0; array[i]; i++)
        free(array[i]);
    free(array);
    return (0);
} */
