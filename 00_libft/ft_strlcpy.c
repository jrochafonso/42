/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrocha-a <jrocha-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 00:27:00 by jrocha-a          #+#    #+#             */
/*   Updated: 2021/11/23 17:58:59 by jrocha-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	unsigned int	i;
	size_t			src_len;

	i = 0;
	src_len = 0;
	while (src[src_len] != 0)
		src_len++;
	if (dstsize)
	{
		while (src[i] != 0 && i < dstsize - 1)
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = 0;
	}
	return (src_len);
}
/*
int	main(void)
{
	char	dest[50];
	char	*src;
	int	dstsize;

	src = "My name is Luka";
	dstsize = 10;
	printf("%zu\n", ft_strlcpy(dest, src, dstsize));
	printf("%s\n\n", dest);
	printf("%zu\n", strlcpy(dest, src, dstsize));
	printf("%s\n\n", dest);
}*/
