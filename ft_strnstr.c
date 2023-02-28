/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oroy <oroy@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 12:36:18 by oroy              #+#    #+#             */
/*   Updated: 2023/02/20 19:09:18 by oroy             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (!*needle)
		return ((char *)haystack);
	while (haystack[i] && i < len)
	{
		if (haystack[i] == needle[j])
		{
			while (haystack[i + j] == needle[j] && haystack[i + j]
				&& i + j < len)
				j++;
			if (!needle[j])
				return ((char *)haystack + i);
			j = 0;
		}
		i++;
	}
	return (NULL);
}

// int	main(void)
// {
// 	const char	h[] = "Hello World";
// 	const char	n[] = "War";
// 	size_t		l;

// 	l = 15;
// 	printf ("%s\n", ft_strnstr(h, n, l));
// 	printf ("%s\n", strnstr(h, n, l));
// 	return (0);
// }
