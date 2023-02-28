/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oroy <oroy@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 21:29:24 by oroy              #+#    #+#             */
/*   Updated: 2023/02/27 16:51:27 by oroy             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include "ft_calloc.c"

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next)
		lst = lst->next;
	return (lst);
}

// int	main(void)
// {
// 	t_list			*node;
// 	t_list			*head;
// 	unsigned int	i;

// 	i = 0;
// 	head = NULL;
// 	while (i < 5)
// 	{
// 		node = ft_calloc(1, sizeof(t_list));
// 		node->next = head;
// 		head = node;
// 		i++;
// 	}
// 	printf ("%p\n", ft_lstlast(head));
// 	printf ("%p\n", head->next->next->next->next);
// 	return (0);
// }
