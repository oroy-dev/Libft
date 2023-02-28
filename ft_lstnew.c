/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oroy <oroy@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 13:14:05 by oroy              #+#    #+#             */
/*   Updated: 2023/02/24 18:56:13 by oroy             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include "ft_calloc.c"

t_list	*ft_lstnew(void *content)
{
	t_list	*t;

	t = ft_calloc(1, sizeof(t_list));
	if (!t)
		return (NULL);
	t->content = content;
	t->next = NULL;
	return (t);
}

// int	main(void)
// {
// 	t_list	*t;
// 	int		arr[3] = {1, 50, 38};
// 	int		i;

// 	i = 0;
// 	t = ft_lstnew(arr);
// 	while (i < 3)
// 	{
// 		printf ("%d\n", *((int *)t->content + i));
// 		i++;
// 	}
// 	return (0);
// }
