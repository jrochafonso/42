/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrocha-a <jrocha-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 00:28:18 by jrocha-a          #+#    #+#             */
/*   Updated: 2021/11/15 15:49:23 by jrocha-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned int	i;
	int				aux;

	i = 0;
	aux = 0;
	while (s1[i] != '\0' && s2[i] != '\0' && !aux && i < n)
	{
		aux = (unsigned char)s1[i] - (unsigned char)s2[i];
		i++;
	}
	if ((s2[i] == '\0' || s1[i] == '\0') && !aux && i < n)
	{
		aux = (unsigned char)s1[i] - (unsigned char)s2[i];
	}
	return (aux);
}
/*
int	main(void)
{
	unsigned int	n;
	char			*s1;
	char			*s2;

	n = 2;
	s2 = "abcde";
	s1 = "abc";
	printf("%d\n", strncmp(s1, s2, n));
	printf("%d\n", ft_strncmp(s1, s2, n));
}*/
