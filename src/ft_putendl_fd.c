/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oroy <oroy@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 14:43:02 by oroy              #+#    #+#             */
/*   Updated: 2023/11/30 13:09:50 by oroy             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libft.h"

int	ft_putendl_fd(char *s, int fd)
{
	int	count;

	count = 0;
	if (s)
		count = ft_putstr_fd(s, fd);
	ft_putchar_fd('\n', fd);
	return (++count);
}
