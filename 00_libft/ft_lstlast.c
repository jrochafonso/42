/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrocha-a <jrocha-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 17:22:44 by jrocha-a          #+#    #+#             */
/*   Updated: 2021/11/29 21:34:27 by jrocha-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*temp;

	temp = lst;
	if (!temp)
		return (0);
	while (temp->next)
		temp = temp->next;
	return (temp);
}
/*
t_list	*ft_lstlast(t_list *lst)
{
	t_list	*last;

	last = lst;
	if (last == 0)
		return (0);
	while (last)
	{
		if (last->next == 0)
			return (last);
		last = last->next;
	}
}
*/
