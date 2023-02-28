/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oroy <oroy@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 14:27:06 by oroy              #+#    #+#             */
/*   Updated: 2023/02/16 10:21:48 by oroy             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*ptr;

	ptr = b;
	while (len--)
		*ptr++ = c;
	return (b);
}

// int	main(void)
// {
// 	char	str[50];

// 	strcpy (str, "Hello World");
// 	printf ("%s\n", ft_memset (str, '^', 6));
// 	printf ("%s\n", memset (str, '^', 6));
// 	return (0);
// }
