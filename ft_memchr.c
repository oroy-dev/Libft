/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oroy <oroy@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 10:57:58 by oroy              #+#    #+#             */
/*   Updated: 2023/02/20 17:35:24 by oroy             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (*((unsigned char *)s + i) == (unsigned char)c)
			return ((void *)s + i);
		i++;
	}
	return (NULL);
}

// int	main(void)
// {
// 	const char	s[] = "";
// 	int			c;
// 	size_t		n;

// 	c = '\0';
// 	n = 100;
// 	printf ("%s\n", ft_memchr(s, c, n));
// 	printf ("%s\n", memchr(s, c, n));
// 	return (0);
// }
