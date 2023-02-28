/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oroy <oroy@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 10:57:58 by oroy              #+#    #+#             */
/*   Updated: 2023/02/17 17:50:15 by oroy             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include "ft_strlen.c"

char	*ft_strrchr(const char *s, int c)
{
	size_t	s_len;

	s_len = ft_strlen(s);
	while (s_len)
	{
		if (*(s + s_len) == (char)c)
			return ((char *)(s + s_len));
		s_len--;
	}
	if (*s == (char)c)
		return ((char *)s);
	return (NULL);
}

// int	main(void)
// {
// 	const char	s[] = "teste";
// 	int			c;

// 	c = 'e';
// 	printf ("%s\n", ft_strrchr(s, c));
// 	printf ("%s\n", strrchr(s, c));
// 	return (0);
// }
