/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oroy <oroy@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/24 19:56:33 by oroy              #+#    #+#             */
/*   Updated: 2023/11/30 13:04:04 by oroy             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*node;
	t_list	*new;
	t_list	*pos;
	void	*content;

	if (!lst)
		return (NULL);
	node = NULL;
	new = NULL;
	pos = lst;
	while (pos)
	{
		content = f(pos->content);
		node = ft_lstnew(content);
		if (!node)
		{
			ft_lstclear(&new, del);
			free (content);
			return (NULL);
		}
		ft_lstadd_back(&new, node);
		pos = pos->next;
	}
	return (new);
}
