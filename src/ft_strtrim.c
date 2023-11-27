/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olivierroy <olivierroy@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 14:38:36 by oroy              #+#    #+#             */
/*   Updated: 2023/11/27 16:28:57 by olivierroy       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	len;

	if (!s1 || !set)
		return ((char *)s1);
	start = 0;
	while (ft_strchr(set, s1[start]) && s1[start])
		start++;
	len = ft_strlen(s1);
	while (ft_strchr(set, s1[len]) && start < len)
		len--;
	return (ft_substr(s1, start, len - start + 1));
}
