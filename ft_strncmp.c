/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oroy <oroy@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 11:31:06 by oroy              #+#    #+#             */
/*   Updated: 2023/02/16 10:21:31 by oroy             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned char	*ps1;
	unsigned char	*ps2;

	ps1 = (unsigned char *)s1;
	ps2 = (unsigned char *)s2;
	while ((*ps1 || *ps2) && n--)
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
// 	const char	s1[] = "\200";
// 	const char	s2[] = "\0";
// 	size_t		n;

// 	n = 3;
// 	printf ("%d\n", ft_strncmp(s1, s2, n));
// 	printf ("%d\n", strncmp(s1, s2, n));
// 	return (0);
// }
