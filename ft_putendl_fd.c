/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbaz-sil <nbaz-sil@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/06 00:29:32 by nbaz-sil          #+#    #+#             */
/*   Updated: 2026/05/06 01:28:37 by nbaz-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	write (fd, s, ft_strlen(s));
	write(fd, "\n", 1);
}
/*
Outputs the string ’s’ to the specified file
descriptor followed by a newline.
*/
/* int	main ()
{
	ft_putendl_fd("sup", 1);
	return (0);
} */