/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oroy <oroy@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 12:04:32 by oroy              #+#    #+#             */
/*   Updated: 2023/02/20 13:56:16 by oroy             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;

	if ((!dst && !src) || !n)
		return (dst);
	i = 0;
	while (n--)
	{
		*((unsigned char *)dst + i) = *((unsigned char *)src + i);
		i++;
	}
	return (dst);
}

// int	main(void)
// {
// 	char		dst[50];
// 	const char	src[50] = "Hello World";
// 	size_t		n;

// 	n = 5;
// 	strcpy (dst, "Wouah !");
// 	printf ("%s\n", ft_memcpy(dst, src, n));
// 	strcpy (dst, "Wouah !");
// 	printf ("%s\n", memcpy(dst, src, n));
// 	return (0);
// }
