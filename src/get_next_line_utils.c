/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olivierroy <olivierroy@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 14:44:11 by oroy              #+#    #+#             */
/*   Updated: 2023/11/27 19:29:26 by olivierroy       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libft.h"

char	*ft_strjoin_gnl(char *newline, char *line, char *buf, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (line && line[i])
	{
		newline[i] = line[i];
		i++;
	}
	while (j < len)
	{
		newline[i + j] = buf[j];
		j++;
	}
	newline[i + j] = '\0';
	return (newline);
}

size_t	getbuflength(char *buf, unsigned char *n)
{
	size_t	i;

	i = 0;
	while (buf[i])
	{
		if (buf[i] == '\n')
		{
			*n = 1;
			i++;
			return (i);
		}
		i++;
	}
	return (i);
}
