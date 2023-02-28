/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oroy <oroy@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 14:41:48 by oroy              #+#    #+#             */
/*   Updated: 2023/02/27 13:07:28 by oroy             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include "ft_calloc.c"
// #include "ft_lstnew_bonus.c"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!lst)
		return ;
	if (!*lst)
		*lst = new;
	else
	{
		new->next = *lst;
		*lst = new;
	}
}

// int	main(void)
// {
// 	t_list	*lst;
// 	t_list	*new;
// 	t_list	*head;
// 	size_t	i;

// 	i = 0;
// 	head = NULL;
// 	while (i < 2)
// 	{
// 		lst = ft_lstnew("HELLO");
// 		lst->next = head;
// 		head = lst;
// 		i++;
// 	}
// 	new = ft_lstnew("Hello");
// 	ft_lstadd_front(&lst, new);
// 	printf ("%s\n", lst->content);
// 	printf ("%s\n", new->next->next->content);
// 	return (0);
// }
