/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbaz-sil <nbaz-sil@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/06 00:28:20 by nbaz-sil          #+#    #+#             */
/*   Updated: 2026/05/13 14:29:51 by nbaz-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	len(long int n)
{
	int	len;

	len = 0;
	if (n <= 0)
		len = 1;
	while (n)
	{
		n /= 10;
		len++;
	}
	return (len);
}

static void	ft_sortof_memset(int *i, char **s, char c)
{
	if (*s)
		(*(s))[*i] = (unsigned char)c;
	(*i)++;
}

static void	ft_sortof_putnbr(char *str, int nb, int *i)
{
	long int	n;

	n = nb;
	if (n == 0)
	{
		ft_sortof_memset(i, &str, '0');
		return ;
	}
	if (n < 0)
	{
		ft_sortof_memset(i, &str, '-');
		n *= -1;
	}
	if (n >= 10)
		ft_sortof_putnbr(str, n / 10, i);
	ft_sortof_memset(i, &str, (n % 10) + '0');
}

char	*ft_itoa(int n)
{
	char	*str;
	int		i;
	int		size;

	size = len(n);
	str = malloc(size + 1);
	if (!str)
		return (NULL);
	str[size] = '\0';
	i = 0;
	ft_sortof_putnbr(str, (long int)n, &i);
	return (str);
}

/* 
	Allocates memory (using malloc(3)) and returns
	a string representing the integer received as an
	argument.
	Negative numbers must be handled
	
	Return Value: The string representing the integer.
	NULL if the allocation fails.
	External Function: malloc
*/

/* int	main(void)
{
	printf("INT MAX -> %s\n", ft_itoa(2147483647));
	printf("ZERO -> %s\n", ft_itoa(0));
	printf("INT MIN -> %s\n", ft_itoa(-2147483648));
} */