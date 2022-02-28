/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrocha-a <jrocha-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/28 16:25:17 by jrocha-a          #+#    #+#             */
/*   Updated: 2021/09/29 18:01:35 by jrocha-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	n;

	n = 1;
	if (nb > 0)
	{
		while (n <= nb)
		{
			if (n * n == nb)
				return (n);
			if (n == 46341)
				return (0);
			n++;
		}
	}
	return (0);
}
/*
#include <stdio.h>
int	main(void)
{
	printf("%d", ft_sqrt(1));
	return (0);
}*/
