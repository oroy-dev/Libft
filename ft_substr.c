/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oroy <oroy@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 12:25:33 by oroy              #+#    #+#             */
/*   Updated: 2023/02/23 13:06:53 by oroy             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include "ft_strlen.c"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*dst;
	size_t	i;
	size_t	slen;

	if (!s)
		return (NULL);
	slen = ft_strlen(s);
	if (slen <= start)
		slen = 0;
	else
		slen -= start;
	if (slen > len)
		slen = len;
	dst = malloc(sizeof(char) * (slen + 1));
	if (!dst)
		return (NULL);
	i = 0;
	while (i < slen)
	{
		dst[i] = s[start + i];
		i++;
	}
	dst[i] = '\0';
	return (dst);
}

// int	main(void)
// {
// 	char			*s;
// 	unsigned int	start;
// 	size_t			len;

// 	s = "";
// 	start = 1;
// 	len = 1;
// 	printf ("%s\n", ft_substr(s, start, len));
// 	return (0);
// }
