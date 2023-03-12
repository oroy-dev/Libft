/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oroy <oroy@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 10:44:37 by oroy              #+#    #+#             */
/*   Updated: 2023/03/11 20:09:22 by oroy             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*mem;
	size_t	total;

	if (count >= SIZE_MAX || size >= SIZE_MAX)
		return (NULL);
	total = count * size;
	mem = malloc(total * (sizeof(unsigned char)));
	if (!mem)
		return (NULL);
	ft_bzero(mem, total);
	return (mem);
}
