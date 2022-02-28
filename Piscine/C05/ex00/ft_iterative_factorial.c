/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrocha-a <jrocha-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/28 01:26:47 by jrocha-a          #+#    #+#             */
/*   Updated: 2021/09/29 00:33:51 by jrocha-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	i;

	i = 1;
	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	while (nb > 1)
	{
		i *= nb;
		nb--;
	}
	return (i);
}
/*
#include <stdio.h>
int	main()
{
	printf("%d", ft_iterative_factorial(5));
	return (0);
}*/
