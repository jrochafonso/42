/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrocha-a <jrocha-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 23:58:32 by jrocha-a          #+#    #+#             */
/*   Updated: 2021/11/26 20:38:15 by jrocha-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del) (void*))
{
	if (!del)
		return ;
	if (!*lst)
		return ;
	ft_lstclear(&((*lst)->next), del);	// #1
	ft_lstdelone(*lst, del);		// #2
	*lst = NULL;				// #3
}

/*
#1 lock on the address of the first base to delete the following and their respective nexts;
#2 delete que first element;
#3 assign null to the first pointer of the list;
*/
