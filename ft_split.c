/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oroy <oroy@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 12:17:14 by oroy              #+#    #+#             */
/*   Updated: 2023/02/22 19:17:48 by oroy             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	**filltable(char **table, char const *s, char c)
{
	size_t	i;
	size_t	row;
	size_t	col;

	i = 0;
	row = 0;
	col = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			table[row][col] = s[i];
			col++;
		}
		else if (s[i] == c && col)
		{
			table[row][col] = '\0';
			col = 0;
			row++;
		}
		i++;
	}
	if (col)
		table[row][col] = '\0';
	return (table);
}

static char	*mallocchars2(char *str, size_t len)
{
	str = malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	return (str);
}

static char	**mallocchars(char **table, char const *s, char c)
{
	size_t	len;
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	len = 0;
	while (s[i])
	{
		if (s[i] == c && len && s[i + 1])
		{
			table[j] = mallocchars2(table[j], len);
			len = 0;
			j++;
		}
		else if (s[i] != c)
			len++;
		i++;
	}
	table[j] = mallocchars2(table[j], len);
	j++;
	table[j] = NULL;
	return (table);
}

static size_t	countrows(char const *s, char c)
{
	size_t	i;
	size_t	j;
	int		isword;

	i = 0;
	j = 0;
	isword = 0;
	while (s[i])
	{
		if (s[i] != c && isword == 0)
		{
			isword = 1;
			j++;
		}
		else if (s[i] == c && isword)
			isword = 0;
		i++;
	}
	return (j);
}

char	**ft_split(char const *s, char c)
{
	char	**table;

	if (!s)
		return (NULL);
	table = malloc(sizeof(char *) * (countrows(s, c) + 1));
	if (!table)
	{
		free (table);
		return (NULL);
	}
	return (filltable(mallocchars(table, s, c), s, c));
}

// int	main(void)
// {
// 	const char	s[] = "_Hello_World_";
// 	char		c;
// 	int			i;
// 	char		**strsplit;

// 	c = '_';
// 	i = 0;
// 	strsplit = ft_split(s, c);
// 	while (*strsplit)
// 	{
// 		printf ("%s\n", *strsplit);
// 		strsplit++;
// 	}
// 	return (0);
// }
