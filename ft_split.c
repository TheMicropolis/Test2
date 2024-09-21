/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmauri <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/20 15:11:25 by mmauri            #+#    #+#             */
/*   Updated: 2024/09/20 19:30:07 by mmauri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
/*
static char **ft_null(const char *s)
{
	char	**str;
	size_t	len;
	
	str = (char **)malloc(2 * sizeof(char *));
       //2 * weil -> 1 für string (= 1 word) und 1 für Terminator
	if (!str)
	 	return (NULL);
	str[0] = malloc(len + 1);
	if (!str[0])
	{
		free(str);
		return (NULL);
	}
	ft_memcpy(str[0], s, len);
	str[0][len] = '\0';
	str[1] = NULL;
	return (NULL);
}
*/
static int	ft_count(char *s, char c)
{
	int	n;

	n = 0;
	while (*s)
	{
		while (*s == c)
			s++;
		if (*s == '\0')
			break ;
		while (*s != c && *s)
			s++;
		n++;
	}
	return (n);
}

static char	*ft_word(const char *s, char c, int *i)
{
	int		start;
	int		l;
	char	*sub;

	start = *i;
	while (s[*i] != c && s[*i])
		(*i)++;
	l = *i - start;
	if (l <= 0)
		return (NULL);
	sub = ft_substr(s, start, l);
	if (!sub)
		return (NULL);
	return (sub);
}

static char	**ft_free(char **str, int j)
{
	while (j--)
		free(str[j]);
	free(str);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	char	**str;
	int		i;
	int		j;

	i = 0;
	j = 0;
	
	str = (char **)s;
	if (!s)
		return (NULL);
	str = (char **)malloc((ft_count((char *)s, c) + 1) * sizeof(char *));
	if (!str)
		return (NULL);
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i] == '\0')
			break ;
		str[j] = ft_word(s, c, &i);
		if (!str[j])
			return (ft_free(str, j));
		j++;
	}
	str[j] = NULL;
	return (str);
}
/*
#include <stdio.h>
int main()
{
    char *str = "\0aa\0bbb";
    char **words = ft_split(str, '\0');
    int i = 0;
    
    while (i < 2)
    {
        puts(words[i]);
        free(words[i]);
        i++;
    }
    return 0;
}*/
/*	ft_strchr   //suchen wann letzes leerzeichen
	ft_strsub // string ausschneieden - start & länge
	ft_strtrim // cuttet leerzeichen vorn und hinten
	ft_strncopy // kopiert - dest , src, n*/

