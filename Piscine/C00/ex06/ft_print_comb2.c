/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrocha-a <jrocha-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/13 12:27:32 by jrocha-a          #+#    #+#             */
/*   Updated: 2021/09/14 12:42:32 by jrocha-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(int a, int b)
{
	char	c;

	c = a / 10 + '0';
	write(1, &c, 1);
	c = a % 10 + '0';
	write(1, &c, 1);
	write(1, " ", 1);
	c = b / 10 + '0';
	write(1, &c, 1);
	c = b % 10 + '0';
	write(1, &c, 1);
}

void	ft_print_comb2(void)
{
	int		a;
	int		b;

	a = 0;
	while (a < 99)
	{
		b = a + 1;
		while (b <= 99)
		{
			ft_putchar(a, b);
			b++;
			if (a != 98)
			{
				write(1, ", ", 2);
			}
		}
		a++;
	}
}
