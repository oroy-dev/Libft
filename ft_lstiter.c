/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oroy <oroy@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/24 19:33:51 by oroy              #+#    #+#             */
/*   Updated: 2023/02/27 13:44:50 by oroy             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include "ft_lstnew.c"
// #include "ft_calloc.c"

// void	f(void *content)
// {
// 	content = "Hello";
// }

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list	*position;

	if (!lst || !f)
		return ;
	position = lst;
	while (position)
	{
		f(position->content);
		position = position->next;
	}
}

// int	main(void)
// {
// 	t_list			*t;
// 	t_list			*head;
// 	unsigned int	i;

// 	i = 0;
// 	head = NULL;
// 	while (i < 2)
// 	{
// 		t = ft_lstnew(t);
// 		t->next = head;
// 		head = t;
// 		i++;
// 	}
// 	printf ("%p\n", t->content);
// 	ft_lstiter(t, f);
// 	printf ("%p\n", t->content);
// 	return (0);
// }
