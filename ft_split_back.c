/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_back.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oroy <oroy@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 12:17:14 by oroy              #+#    #+#             */
/*   Updated: 2023/02/21 17:03:07 by oroy             ###   ########.fr       */
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
		else
		{
			table[row][col] = '\0';
			col = 0;
			row++;
		}
		i++;
	}
	if (s[i - 1] != c)
		table[row][col] = '\0';
	return (table);
}

static char	*mallocchars2(char *str, size_t size)
{
	str = malloc(sizeof(char) * (size + 1));
	if (!str)
		return (NULL);
	return (str);
}

static char	**mallocchars(char **table, char const *s, char c)
{
	size_t	i;
	size_t	j;
	size_t	k;

	i = 0;
	j = 0;
	k = 0;
	while (s[i])
	{
		if (s[i] == c)
		{
			table[j] = mallocchars2(table[j], k);
			k = 0;
			j++;
		}
		i++;
		k++;
	}
	if (s[i - 1] != c)
	{
		table[j] = mallocchars2(table[j], k);
		j++;
	}
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
		else if (s[i] == c)
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
		return (NULL);
	return (filltable(mallocchars(table, s, c), s, c));
}

// int	main(void)
// {
// 	const char	s[] = "He__o";
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
