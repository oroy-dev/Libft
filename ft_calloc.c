/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oroy <oroy@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 10:44:37 by oroy              #+#    #+#             */
/*   Updated: 2023/02/20 17:59:34 by oroy             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	unsigned char	*mem;
	size_t			i;
	size_t			total;

	total = count * size;
	mem = malloc(total * (sizeof(unsigned char)));
	if (!mem)
		return (NULL);
	i = 0;
	while (i < total)
		mem[i++] = 0;
	return ((void *)mem);
}

// int	main(void)
// {
// 	size_t	count;
// 	size_t	size;

// 	count = 3;
// 	size = 4;
// 	printf ("%s\n", ft_calloc(count, size));
// 	printf ("%s\n", calloc(count, size));
// 	return (0);
// }
