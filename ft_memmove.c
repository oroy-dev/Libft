/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oroy <oroy@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 12:04:32 by oroy              #+#    #+#             */
/*   Updated: 2023/02/20 12:18:53 by oroy             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*d;
	unsigned char	*s;

	if ((!dst && !src) || !len)
		return (dst);
	d = (unsigned char *)dst;
	s = (unsigned char *)src;
	if (*s < *d)
		while (len--)
			*(d + len) = *(s + len);
	else
		while (len--)
			*d++ = *s++;
	return (dst);
}

// int	main(void)
// {
// 	char	str[50];
// 	size_t	n;

// 	n = 5;
// 	strcpy (str, "Hello World");
// 	printf ("%s\n", str);
// 	strcpy (str, "Hello World");
// 	printf ("%s\n", ft_memmove(str + 2, str, n));
// 	strcpy (str, "Hello World");
// 	printf ("%s\n", memmove(str + 2, str, n));
// 	return (0);
// }
