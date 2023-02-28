/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oroy <oroy@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 17:23:59 by oroy              #+#    #+#             */
/*   Updated: 2023/02/20 13:36:43 by oroy             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include "ft_strlen.c"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	char	*s;
	size_t	d_len;
	size_t	i;

	i = 0;
	s = (char *)src;
	d_len = ft_strlen(dst);
	if (d_len < dstsize)
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
	if (d_len < dstsize)
		return (d_len + i);
	else
		return (dstsize + i);
}

// int	main(void)
// {
// 	char		dst[6];
// 	const char	src[13] = "Super Batman";
// 	size_t		n;

// 	n = 2;
// 	strcpy (dst, "Hello");
// 	printf ("%lu\n", ft_strlcat(dst, src, n));
// 	printf ("%s\n", dst);
// 	strcpy (dst, "Hello");
// 	printf ("%lu\n", strlcat(dst, src, n));
// 	printf ("%s\n", dst);
// 	return (0);
// }
