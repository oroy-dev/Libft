/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olivierroy <olivierroy@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/17 14:10:17 by oroy              #+#    #+#             */
/*   Updated: 2023/11/27 19:29:15 by olivierroy       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libft.h"

static char	*freeline(char *line)
{
	if (line)
		free (line);
	return (NULL);
}

static char	*checkreaderror(ssize_t readvalue, char *line)
{
	if (readvalue == -1)
		line = freeline(line);
	return (line);
}

static char	*createline(char *line, char *buf, size_t *i, unsigned char *n)
{
	char	*newline;
	size_t	len;

	len = getbuflength(&buf[*i], n);
	newline = ft_calloc(ft_strlen(line) + len + 1, sizeof(char));
	if (newline)
	{
		newline = ft_strjoin_gnl(newline, line, &buf[*i], len);
		*i += len;
		if (!buf[*i])
			*i = 0;
	}
	line = freeline(line);
	if (!newline)
		return (NULL);
	return (newline);
}

char	*get_next_line(int fd)
{
	static t_buf	list[OPEN_MAX];
	ssize_t			readvalue;
	char			*line;
	unsigned char	n;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	line = NULL;
	n = 0;
	while (!n)
	{
		if (list[fd].i == 0)
		{
			readvalue = read(fd, list[fd].buf, BUFFER_SIZE);
			line = checkreaderror(readvalue, line);
			if (readvalue <= 0)
				break ;
			list[fd].buf[readvalue] = '\0';
		}
		line = createline(line, list[fd].buf, &list[fd].i, &n);
		if (!line)
			break ;
	}
	return (line);
}
