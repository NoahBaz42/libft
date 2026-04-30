/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbaz-sil <nbaz-sil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/13 11:28:16 by nbaz-sil          #+#    #+#             */
/*   Updated: 2026/04/13 12:56:45 by nbaz-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_strmapi(char const *s, char (*f)(unsigned
int, char))
{
	
}
/* Parameters s: The string to iterate over.
f: The function to apply to each character.
Return Value The string created from the successive applications
of ’f’.
Returns NULL if the allocation fails.
External Function malloc
Description Applies the function f to each character of the
string s, passing its index as the first argument
and the character itself as the second. A new
string is created (using malloc(3)) to store the
results from the successive applications of f. */