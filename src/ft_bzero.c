/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olivierroy <olivierroy@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 16:21:42 by oroy              #+#    #+#             */
/*   Updated: 2023/11/27 16:28:57 by olivierroy       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*ptr;

	if (!s)
		return ;
	ptr = (unsigned char *)s;
	while (n--)
		*ptr++ = '\0';
}
