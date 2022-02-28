/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrocha-a <jrocha-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/28 18:08:02 by jrocha-a          #+#    #+#             */
/*   Updated: 2021/09/29 18:01:14 by jrocha-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	unsigned int	f;
	unsigned int	n;

	n = 1;
	f = nb;
	if (nb > 0)
	{
		while (n <= f)
		{
			if (n * n >= f)
				return (n);
			if (n == 46341)
				return (0);
			n++;
		}
	}
	return (0);
}

int	ft_is_prime(int nb)
{
	int	p;
	int	n_sqrt;

	if (nb == 2 || nb == 2147483647)
		return (1);
	if (nb <= 1 || nb % 2 == 0)
		return (0);
	n_sqrt = ft_sqrt(nb);
	p = 3;
	while (p <= n_sqrt)
	{
		if (nb % p == 0)
			return (0);
		p = p + 2;
	}
	return (1);
}
/*
#include <stdio.h>
int	main(void)
{
	printf("should be 0 : %d\n", ft_is_prime(0));
	printf("should be 0 : %d\n", ft_is_prime(1));
	printf("should be 1 : %d\n", ft_is_prime(2));
	printf("should be 1 : %d\n", ft_is_prime(7));
	printf("should be 0 : %d\n", ft_is_prime(4));
	printf("should be 0 : %d\n", ft_is_prime(-1840));
	printf("should be 0 : %d\n", ft_is_prime(-12));
	printf("should be 0 : %d\n", ft_is_prime(2147483646));
	printf("should be 1 : %d\n", ft_is_prime(2147483647));
}*/
