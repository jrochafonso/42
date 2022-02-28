/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrocha-a <jrocha-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/28 22:56:52 by jrocha-a          #+#    #+#             */
/*   Updated: 2021/09/29 01:43:32 by jrocha-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	while (*str)
	{
		write(1, str++, 1);
	}
}

void	change_base(long nbr, char *base, int base_size)
{
	if (nbr < 0)
	{
		ft_putchar('-');
		nbr *= -1;
	}
	if (nbr >= base_size)
	{
		change_base(nbr / base_size, base, base_size);
	}
	ft_putchar(base[nbr % base_size]);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	base_size;
	int	i;

	base_size = 0;
	while (base[base_size] != '\0')
	{
		if (base[base_size] == '-' || base[base_size] == '+')
			return ;
		i = base_size + 1;
		while (base[i] != '\0')
		{
			if (base[base_size] == base[i])
				return ;
			i ++;
		}
		base_size++;
	}
	if (base_size > 1)
	{
		change_base((long) nbr, base, base_size);
	}
}
/*
#include<stdio.h>

void ft_putnbr_base(int nbr, char *base);
int base_is_valid( char *base );
int	n1_transform( int nbr, int radix);

int main ( void )
{
	ft_putnbr_base(45738, "0123456789abcdef");
}
*/
