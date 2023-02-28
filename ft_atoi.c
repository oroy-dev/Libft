/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oroy <oroy@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 13:13:16 by oroy              #+#    #+#             */
/*   Updated: 2023/02/16 10:22:32 by oroy             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	char	*p;
	int		n;
	int		minus;

	n = 0;
	minus = 1;
	p = (char *)str;
	while (*p == 32 || (*p > 8 && *p < 14))
		p++;
	if (*p == '+' || *p == '-')
	{
		if (*p == '-')
			minus *= -1;
		p++;
	}
	while (*p >= '0' && *p <= '9')
	{
		n *= 10;
		n += *p - 48;
		p++;
	}
	return (n * minus);
}

// int	main(void)
// {
// 	const char	str[] = "\e475";

// 	printf ("%d\n", ft_atoi(str));
// 	printf ("%d\n", atoi(str));
// 	return (0);
// }
