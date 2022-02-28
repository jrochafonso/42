/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrocha-a <jrocha-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 23:32:46 by jrocha-a          #+#    #+#             */
/*   Updated: 2021/11/11 22:17:19 by jrocha-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char		*temp;
	const char	*s;

	s = src;
	temp = dst;
	if (src == 0 && dst == 0)
		return (NULL);
	if (dst < src)
		while (len--)
			*temp++ = *s++;
	else
	{
		temp += len;
		s += len;
		while (len--)
			*--temp = *--s;
	}
	return (dst);
}
