/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oroy <oroy@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/24 17:43:11 by oroy              #+#    #+#             */
/*   Updated: 2023/02/27 13:18:47 by oroy             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// void	del(void *content)
// {
// 	free (content);
// }

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (lst && del)
	{
		del(lst->content);
		free (lst);
	}
}

// int	main(void)
// {
// 	t_list	*lst;

// 	lst = ft_calloc(1, sizeof(t_list));
// 	lst->content = ft_strdup("Hello");
// 	lst->next = NULL;
// 	printf ("%s\n", lst->content);
// 	ft_lstdelone(lst, del);
// 	printf ("%s\n", lst->content);
// 	return (0);
// }
