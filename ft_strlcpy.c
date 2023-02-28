/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oroy <oroy@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 17:23:59 by oroy              #+#    #+#             */
/*   Updated: 2023/02/16 10:21:38 by oroy             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	const char	*s;
	size_t		i;

	i = 0;
	s = src;
	if (dstsize)
	{
		while (i < dstsize - 1 && *s)
			dst[i++] = *s++;
		dst[i] = '\0';
	}
	while (*s++)
		i++;
	return (i);
}

// int	main(void)
// {
// 	char		dst[12];
// 	const char	src[6] = "Wouah!";
// 	size_t		n;

// 	n = 6;
// 	strcpy (dst, "Hello World");
// 	printf ("%lu\n", ft_strlcpy(dst, src, n));
// 	printf ("%s\n", dst);
// 	strcpy (dst, "Hello World");
// 	printf ("%lu\n", strlcpy(dst, src, n));
// 	printf ("%s\n", dst);
// 	return (0);
// }
