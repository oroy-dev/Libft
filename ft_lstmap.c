/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oroy <oroy@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/24 19:56:33 by oroy              #+#    #+#             */
/*   Updated: 2023/02/27 20:22:57 by oroy             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include "ft_lstdelone.c"
// #include "ft_lstnew.c"
// #include "ft_calloc.c"
// #include "ft_lstadd_back.c"
// #include "ft_lstlast.c"
// #include "ft_lstclear.c"

// void	del(void *content)
// {
// 	free(content);
// }

// void	*f(void *content)
// {
// 	*(int *)content += 1;
// 	return ((int *)content);
// }

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*node;
	t_list	*new;
	t_list	*pos;

	if (!lst)
		return (NULL);
	node = NULL;
	new = NULL;
	pos = lst;
	while (pos)
	{
		node = ft_lstnew(f(pos->content));
		if (!node)
		{
			ft_lstclear(&new, del);
			free (f);
			return (NULL);
		}
		ft_lstadd_back(&new, node);
		pos = pos->next;
	}
	return (new);
}

// int	main(void)
// {
// 	t_list	*lst;
// 	t_list	*lst2;
// 	t_list	*lst3;

// 	lst = ft_lstnew(malloc(sizeof(char)));
// 	lst2 = ft_lstnew(malloc(sizeof(char)));
// 	lst3 = ft_lstnew(malloc(sizeof(char)));
// 	*(int *)lst->content = 10;
// 	*(int *)lst2->content = 20;
// 	*(int *)lst3->content = 30;
// 	lst->next = lst2;
// 	lst2->next = lst3;
// 	lst3->next = NULL;
// 	ft_lstmap(lst, f, del);
// 	while (lst)
// 	{
// 		printf ("%d\n", *(int *)lst->content);
// 		lst = lst->next;
// 	}
// 	return (0);
// }
