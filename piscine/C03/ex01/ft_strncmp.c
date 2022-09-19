/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrocha-a <jrocha-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/21 15:22:11 by jrocha-a          #+#    #+#             */
/*   Updated: 2021/09/27 17:41:47 by jrocha-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <unistd.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;
	int				aux;

	i = 0;
	aux = 0;
	while (s1[i] != '\0' && s2[i] != '\0' && !aux && i < n)
	{
		aux = s1[i] - s2[i];
		i++;
	}
	if ((s2[i] == '\0' || s1[i] == '\0') && !aux && i < n)
	{
		aux = s1[i] - s2[i];
	}
	return (aux);
}
/*
int	main(void)
{
	unsigned int	n;
	char			*s1;
	char			*s2;

	n = 7;
	s2 = "abcdef";
	s1 = "abcdfdfdefg";
	printf("%d\n", strncmp(s1, s2, n));
	printf("%d\n", ft_strncmp(s1, s2, n));
}
*/
