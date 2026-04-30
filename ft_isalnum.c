/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbaz-sil <nbaz-sil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/13 11:27:16 by nbaz-sil          #+#    #+#             */
/*   Updated: 2026/04/30 03:42:07 by nbaz-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalnum(int c)
{
	if (c >= 'A' && c <= 'Z' | c >= 'a' && c <= 'z' | c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}

/* 
	isalnum() checks for an alphanumeric character.
	The values returned are nonzero if the character c 
	falls into the tested class, and zero if not.
 */