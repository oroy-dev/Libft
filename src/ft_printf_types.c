/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_types.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oroy <oroy@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 13:29:38 by oroy              #+#    #+#             */
/*   Updated: 2023/11/30 13:58:07 by oroy             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libft.h"

int	print_s(char *s, int fd)
{
	if (!s)
		return (write (fd, "(null)", 6));
	return (ft_putstr_fd(s, fd));
}

int	print_int(int i, int fd)
{
	int	count;

	count = 0;
	if (i / 10)
		count = print_int(i / 10, fd);
	else if (i < 0)
		count = ft_putchar_fd('-', fd);
	ft_putchar_fd(ft_abs(i % 10) + 48, fd);
	return (++count);
}

int	print_uint(unsigned int u, int fd)
{
	int	count;

	count = 0;
	if (u / 10)
		count = print_uint(u / 10, fd);
	ft_putchar_fd(u % 10 + 48, fd);
	return (++count);
}

int	print_hex(unsigned long u, char c, int fd)
{
	int	count;
	int	modulo;

	count = 0;
	if (u / 16)
		count = print_hex(u / 16, c, fd);
	modulo = u % 16;
	if (modulo < 10)
		ft_putchar_fd(modulo + 48, fd);
	else
	{
		if (c == 'X')
			ft_putchar_fd(modulo + 55, fd);
		else
			ft_putchar_fd(modulo + 87, fd);
	}
	return (++count);
}

int	print_p(unsigned long p, int fd)
{
	return (print_s("0x", fd) + print_hex(p, 'x', fd));
}
