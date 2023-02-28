/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oroy <oroy@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/24 10:57:40 by oroy              #+#    #+#             */
/*   Updated: 2023/02/24 19:28:22 by oroy             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include "ft_calloc.c"
// #include "ft_lstlast.c"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*position;

	position = NULL;
	if (!lst)
		return ;
	if (!*lst)
		*lst = new;
	else
	{
		position = ft_lstlast(*lst);
		position->next = new;
	}
}

// int	main(void)
// {
// 	t_list			*lst;
// 	t_list			*new;
// 	t_list			*head;
// 	unsigned int	i;

// 	i = 0;
// 	head = NULL;
// 	while (i < 1)
// 	{
// 		lst = ft_calloc(1, sizeof(t_list));
// 		lst->next = head;
// 		head = lst;
// 		i++;
// 	}
// 	new = ft_calloc(1, sizeof(t_list));
// 	new->content = "Hello";
// 	new->next = NULL;
// 	ft_lstadd_back(&lst, new);
// 	printf ("%p\n", new);
// 	printf ("%p\n", lst->next);
// 	return (0);
// }
