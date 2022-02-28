/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrocha-a <jrocha-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/26 18:19:49 by jrocha-a          #+#    #+#             */
/*   Updated: 2021/11/29 20:37:21 by jrocha-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*newl;
	t_list	*back;

	back = NULL;
	while (lst)
	{
		newl = ft_lstnew(f(lst->content));	// #1
		if (!newl)
		{
			ft_lstclear(&back, del);	// #2
			return (0);
		}
		ft_lstadd_back(&back, newl);
		lst = lst->next;
	}
	return (back);
}

/*
#1 copies lst to newl, allocating the necessary memory and protecting the malloc;
#2 if nothing exists inside the copy: lstclear to clear the list;
*/
