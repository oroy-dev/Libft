/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oroy <oroy@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/24 18:48:34 by oroy              #+#    #+#             */
/*   Updated: 2023/02/27 13:37:15 by oroy             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// void	del(void *content)
// {
// 	free (content);
// }

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*position;
	t_list	*head;

	if (!lst || !del)
		return ;
	head = NULL;
	position = *lst;
	while (position)
	{
		head = position->next;
		ft_lstdelone(position, del);
		position = head;
	}
	*lst = NULL;
}

// int	main(void)
// {
// 	t_list	*lst;

// 	lst = ft_calloc(1, sizeof(t_list));
// 	lst->content = ft_strdup("Hello");
// 	lst->next = NULL;
// 	printf ("%s\n", lst->content);
// 	ft_lstclear(&lst, del);
// 	printf ("%s\n", lst->content);
// 	return (0);
// }
