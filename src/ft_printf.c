/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oroy <oroy@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 12:28:49 by oroy              #+#    #+#             */
/*   Updated: 2023/11/30 14:03:39 by oroy             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libft.h"

static int	check_type(char c, va_list ap, int fd)
{
	if (c == 'c')
		return (ft_putchar_fd(va_arg(ap, int), fd));
	else if (c == 's')
		return (print_s(va_arg(ap, char *), fd));
	else if (c == 'p')
		return (print_p(va_arg(ap, unsigned long), fd));
	else if (c == 'd' || c == 'i')
		return (print_int(va_arg(ap, int), fd));
	else if (c == 'u')
		return (print_uint(va_arg(ap, unsigned int), fd));
	else if (c == 'x')
		return (print_hex(va_arg(ap, unsigned int), 'x', fd));
	else if (c == 'X')
		return (print_hex(va_arg(ap, unsigned int), 'X', fd));
	else if (c == '%')
		return (ft_putchar_fd('%', fd));
	return (0);
}

int	ft_printf(const char *s, ...)
{
	int		count;
	int		fd;
	int		i;
	va_list	ap;

	i = 0;
	fd = 1;
	count = 0;
	va_start (ap, s);
	while (s[i])
	{
		if (s[i] == '%')
			count += check_type(s[++i], ap, fd);
		else
			count += ft_putchar_fd(s[i], fd);
		i++;
	}
	va_end (ap);
	return (count);
}
