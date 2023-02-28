/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oroy <oroy@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 18:08:08 by oroy              #+#    #+#             */
/*   Updated: 2023/02/24 19:54:03 by oroy             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	size_t	i;

	if (!lst)
		return (0);
	i = 1;
	while (lst->next)
	{
		lst = lst->next;
		i++;
	}
	return (i);
}

// int	main(void)
// {
// 	t_list	*head = NULL;

// 	for (int counter = 0; counter < 2; counter++)
//     {
//         t_list *node = malloc(sizeof(t_list));
//         node->next = head;
//         head = node;
//     }
// 	printf ("%d\n", ft_lstsize(head));
// 	return (0);
// }
