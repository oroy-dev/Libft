/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oroy <oroy@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 16:25:57 by oroy              #+#    #+#             */
/*   Updated: 2023/11/30 13:04:04 by oroy             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libft.h"

static char	**ft_free(char **tab)
{
	size_t	i;

	i = 0;
	while (tab[i])
	{
		free (tab[i]);
		i++;
	}
	free (tab);
	return (NULL);
}

static size_t	countchars(char const *s, char c)
{
	size_t	i;

	i = 0;
	while (s[i] && s[i] != c)
		i++;
	return (i);
}

static char	**filltable(char **tab, char const *s, char c)
{
	size_t	count;
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	count = 0;
	while (*s)
	{
		if (*s != c)
		{
			count = countchars(s, c);
			tab[i] = ft_calloc(count + 1, sizeof(char));
			if (!tab[i])
				return (ft_free(tab));
			while (count--)
				tab[i][j++] = *(char *)s++;
			tab[i++][j] = '\0';
			j = 0;
		}
		else
			s++;
	}
	tab[i] = NULL;
	return (tab);
}

static size_t	countwords(char const *s, char c)
{
	size_t			i;
	size_t			nbr;
	unsigned char	isword;

	i = 0;
	nbr = 0;
	isword = 0;
	while (s[i])
	{
		if (s[i] != c && isword == 0)
		{
			isword = 1;
			nbr++;
		}
		else if (s[i] == c && isword == 1)
			isword = 0;
		i++;
	}
	return (nbr);
}

char	**ft_split(char const *s, char c)
{
	char	**tab;

	if (!s)
		return (NULL);
	tab = ft_calloc(countwords(s, c) + 1, sizeof(char *));
	if (!tab)
		return (NULL);
	tab = filltable(tab, s, c);
	return (tab);
}
