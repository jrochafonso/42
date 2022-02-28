/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrocha-a <jrocha-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/23 03:35:21 by jrocha-a          #+#    #+#             */
/*   Updated: 2021/11/17 00:38:12 by jrocha-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	j;

	i = ft_strlen(dest);
	j = 0;
	if (size <= i)
	{
		return (ft_strlen(src) + size);
	}
	while ((i + j + 1 < size) && src[j] != '\0')
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
	return (i + ft_strlen(src));
}
/*
size_t	ft_strlcat(char *dest, char *src, size_t size);

int	main(void)
{
	char src [] = "Blow up the outside world.\n";
	char dest [23] = "Blow up the outside. \n";
	size_t size;
	size = ft_strlen(dest);
	printf("%u", ft_strlcat(dest, src, size));

	char src [] = "Blow up the outside world.\n";
	char dest [23] = "Blow up the outside. \n";
	int size;
	size = ft_strlen(dest);

	ft_strlcat(dest, src, 52);
	printf("%d", ft_strlcat(dest, src, size));

	char src [] = "Blow up the outside world.\n";
	char dest [23] = "Blow up the outside. \n";
	printf("%lu", strlcat(dest, src, 22));
	return (0);
}
*/
