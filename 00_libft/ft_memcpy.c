/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrocha-a <jrocha-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 23:32:18 by jrocha-a          #+#    #+#             */
/*   Updated: 2021/11/11 22:01:19 by jrocha-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char	*strsrc;
	char	*strdst;
	size_t	i;

	if (!src && !dst)
		return (NULL);
	strsrc = (char *)src;
	strdst = (char *)dst;
	i = 0;
	while (i < n)
	{
		strdst[i] = strsrc[i];
		i++;
	}
	return (dst);
}
/*
int main(void)
{
	char	*strsrc;
	char	*strdst;
	strsrc = "joao";
	ft_memcpy(strdst, "joao", 2);
	printf("%s", strdst);
}
*/
