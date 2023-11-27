/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olivierroy <olivierroy@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 17:23:59 by oroy              #+#    #+#             */
/*   Updated: 2023/11/27 16:28:57 by olivierroy       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	const char	*s;
	size_t		i;

	if (!src)
		return (0);
	i = 0;
	s = src;
	if (dstsize && dst)
	{
		while (i < dstsize - 1 && *s)
			dst[i++] = *s++;
		dst[i] = '\0';
	}
	while (*s++)
		i++;
	return (i);
}
