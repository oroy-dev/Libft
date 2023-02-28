/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oroy <oroy@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 16:21:42 by oroy              #+#    #+#             */
/*   Updated: 2023/02/16 10:22:23 by oroy             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*ptr;

	ptr = s;
	while (n--)
		*ptr++ = '\0';
}

// int	main(void)
// {
// 	char	s[50];
// 	size_t	n;

// 	n = 1;
// 	strcpy (s, "Hello World");
// 	ft_bzero (s, n);
// 	printf ("%s\n", s);
// 	strcpy (s, "Hello World");
// 	printf ("%s\n", bzero(s, n));
// 	return (0);
// }
