/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oroy <oroy@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 17:23:59 by oroy              #+#    #+#             */
/*   Updated: 2023/11/30 13:04:04 by oroy             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	char	*s;
	size_t	d_len;
	size_t	i;

	i = 0;
	s = (char *)src;
	d_len = ft_strlen(dst);
	if (src)
	{
		if (d_len < dstsize && dst)
		{
			while (i < dstsize - d_len - 1 && *s)
			{
				dst[d_len + i] = *s++;
				i++;
			}
			dst[d_len + i] = '\0';
		}
		while (*s++)
			i++;
	}
	if (d_len < dstsize)
		return (d_len + i);
	else
		return (dstsize + i);
}
