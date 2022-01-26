/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sebiris <sebiris@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/17 14:22:16 by sebiris           #+#    #+#             */
/*   Updated: 2022/01/18 13:26:27 by sebiris          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*lst1;
	t_list	*tmp;

	if (*lst)
	{
		lst1 = *lst;
		while (lst1)
		{
			tmp = lst1;
			(del)(lst1->content);
			lst1 = lst1->next;
			free(tmp);
		}
	}
	*lst = NULL;
}
