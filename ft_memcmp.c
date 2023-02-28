/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oroy <oroy@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 11:31:06 by oroy              #+#    #+#             */
/*   Updated: 2023/02/20 17:24:11 by oroy             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*ps1;
	unsigned char	*ps2;

	ps1 = (unsigned char *)s1;
	ps2 = (unsigned char *)s2;
	while (n--)
	{
		if (*ps1 != *ps2)
			return (*ps1 - *ps2);
		ps1++;
		ps2++;
	}
	return (0);
}

// int	main(void)
// {
// 	const char	s1[] = "Hello";
// 	const char	s2[] = "Hello";
// 	size_t		n;

// 	n = 5;
// 	printf ("%d\n", ft_memcmp(s1, s2, n));
// 	printf ("%d\n", memcmp(s1, s2, n));
// 	return (0);
// }
