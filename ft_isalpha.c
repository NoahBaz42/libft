/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbaz-sil <nbaz-sil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/13 11:27:19 by nbaz-sil          #+#    #+#             */
/*   Updated: 2026/04/30 06:48:05 by nbaz-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	if (c >= 'A' && c <= 'Z' | c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
/*
	isalpha() checks for an alphabetic character;
	The values returned are nonzero if the character c
	falls into the tested class, and zero if not.
*/
