/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrocha-a <jrocha-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/19 01:09:21 by jrocha-a          #+#    #+#             */
/*   Updated: 2021/11/23 19:16:26 by jrocha-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	t_list	*firstnode;

	if (!new)
		return ;
	if (!*lst)
	{
		*lst = new;
		return ;
	}
	firstnode = *lst;
	*lst = new;
	new->next = firstnode;
}
