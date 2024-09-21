/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmauri <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 15:56:29 by mmauri            #+#    #+#             */
/*   Updated: 2024/09/19 16:23:01 by mmauri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while (*s)
	{
		if (*s == (char)c)
			return ((char *)s);
		s++;
	}
	if ((char)c == '\0')
		return ((char *)s);
	return (NULL);
}
/*
#include <stdio.h>
int	main(void)
{
	char *str;
	str = "\0";
	printf("%s", ft_strchr(str, 52));
	return (0);
}*/
/*
 * DESCRIPTION
       The  strchr() function returns a pointer to the first occurrence 
	   of the character c in the string s.

       The strrchr() function returns a pointer to the last occurrence 
	   of the  character c in the string s.

       The strchrnul() function is like strchr() except that if c is not 
	   found in s,then it returns a pointer to the null byte at the end of 
	   s, rather than NULL.

       Here "character" means "byte"; these functions  do  not  work  with
		wide  or multibyte characters.
*/
