/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbaz-sil <nbaz-sil@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/06 00:29:32 by nbaz-sil          #+#    #+#             */
/*   Updated: 2026/05/15 05:08:50 by nbaz-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	if (!s)
		return ;
	write (fd, s, ft_strlen(s));
	write(fd, "\n", 1);
}
/*
	Outputs the string ’s’ to the specified file
	descriptor followed by a newline.
	Return Value: None
	External Function: write 
*/
/* int	main ()
{
	ft_putendl_fd("sup", 1);
	return (0);
} */