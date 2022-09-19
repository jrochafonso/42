/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrocha-a <jrocha-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/28 19:46:54 by jrocha-a          #+#    #+#             */
/*   Updated: 2021/09/29 18:01:21 by jrocha-a         ###   ########.fr       */
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

int	ft_find_next_prime(int nb)
{
	if (nb < 3)
		return (2);
	while (ft_is_prime(nb) != 1)
		nb++;
	return (nb);
}
/*
#include <stdio.h>
int	main(void)
{
	printf("should be 2 : %d\n", ft_find_next_prime(-2147483641));
	printf("should be 2147483647 : %d\n", ft_find_next_prime(2147483647));
	printf("should be 2 : %d\n", ft_find_next_prime(0));
	printf("should be 2 : %d\n", ft_find_next_prime(-1077));
	printf("should be 2 : %d\n", ft_find_next_prime(2));
	printf("should be 3 : %d\n", ft_find_next_prime(3));
	printf("should be 13 : %d\n", ft_find_next_prime(13));
	printf("should be 73 : %d\n", ft_find_next_prime(73));
	printf("should be 17 : %d\n", ft_find_next_prime(14));
	printf("should be 79 : %d\n", ft_find_next_prime(74));
}*/
