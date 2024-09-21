/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmauri <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/04 15:16:58 by mmauri            #+#    #+#             */
/*   Updated: 2024/09/11 17:10:01 by mmauri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*ptr;

	ptr = (unsigned char *)s;
	while (n > 0)
	{
		if (*ptr == (unsigned char)c)
			return ((void *)ptr);
		ptr++;
		n--;
	}
	return (NULL);
}
/*
#include <string.h>
#include <stdlib.h>

int	main(int ac, char** av)
{
	(void) ac;
	size_t	n = atoi(av[3]);
	int	c = atoi(av[2]);
	char *a = ft_memchr(av[1], c, n);
	printf("%s my function:", a);
	char *b = memchr(av[1], c, n);
	printf("\n%s library function"; b);
	return (0);
}

//buchstabenfolge: zb abcde
//dann chracter in ascii
//dann zahl der bytes in ziffer
*/
