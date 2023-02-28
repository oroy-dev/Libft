/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oroy <oroy@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 14:38:36 by oroy              #+#    #+#             */
/*   Updated: 2023/02/17 17:44:50 by oroy             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include "ft_strlen.c"
// #include "ft_strchr.c"
// #include "ft_substr.c"

char	*ft_strtrim(char const *s1, char const *set)
{
	unsigned int	start;
	size_t			len;

	start = 0;
	while (ft_strchr(set, s1[start]) && s1[start])
		start++;
	len = ft_strlen(s1);
	while (ft_strchr(set, s1[len]) && start < len)
		len--;
	return (ft_substr(s1, start, len - start + 1));
}

// int	main(void)
// {
// 	const char	s1[] = "  .Hello mollo let's go Hello_ ";
// 	const char	set[] = "Hello _.";

// 	printf ("%s\n", ft_strtrim(s1, set));
// 	return (0);
// }
