/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oroy <oroy@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 17:38:14 by oroy              #+#    #+#             */
/*   Updated: 2023/11/30 13:04:04 by oroy             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libft.h"

static char	*intostr(char *str, long n, unsigned char num, int mul)
{
	size_t	i;

	i = 0;
	if (n == 0)
	{
		str[i++] = '0';
		num--;
	}
	if (n < 0)
	{
		str[i++] = '-';
		n = -n;
		num--;
	}
	while (num--)
	{
		str[i++] = (n / mul) + 48;
		n %= mul;
		mul /= 10;
	}
	str[i] = '\0';
	return (str);
}

char	*ft_itoa(int n)
{
	char			*str;
	long			mul;
	unsigned char	num;

	num = 0;
	mul = 1;
	if (n < 0)
		num++;
	if (n == 0)
		num++;
	while ((n / mul) != 0)
	{
		mul *= 10;
		num++;
	}
	str = malloc(sizeof(char) * (num + 1));
	if (!str)
		return (NULL);
	return (intostr(str, n, num, mul / 10));
}
