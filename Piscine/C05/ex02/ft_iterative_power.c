/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrocha-a <jrocha-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/28 15:02:10 by jrocha-a          #+#    #+#             */
/*   Updated: 2021/09/29 00:33:50 by jrocha-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	r;

	r = nb;
	if (power < 0)
		return (0);
	else if (power == 0)
		return (1);
	while (power > 1)
	{
		--power;
		r *= nb;
	}
	return (r);
}
/*
#include <stdio.h>
int	main(void)
{
	printf("%d", ft_iterative_power(5, 5));
	return (0);
}*/
