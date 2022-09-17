/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utilities.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrocha-a <jrocha-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 19:34:00 by jrocha-a          #+#    #+#             */
/*   Updated: 2022/06/01 19:26:26 by jrocha-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_putchar(char c)
{
	return (write(1, &c, 1));
}

int ft_putstr(char *s)
{
	int i;

	i = 0;
	if (!s)
		return (ft_putstr("(null)"));
	while (s[i])
	{
		write(1, &s[i], 1);
		i++;
	}
	return (i);
}

int ft_strlen(const char *s)
{
	int i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

int ft_mbase(unsigned long long n, char *base)
{
	int count;
	unsigned long size;

	count = 0;
	size = ft_strlen(base);
	if (n >= size)
	{
		count += ft_mbase(n / size, base);
		count += ft_putchar(base[n % size]);
	}
	else
		count += ft_putchar(base[n]);
	return (count);
}

int ft_ibase(int n, char *base)
{
	int minus;

	minus = 0;
	if (n == -2147483648)
		return (ft_putstr("-2147483648"));
	if (n < 0)
	{
		minus += ft_putchar('-');
		n *= -1;
	}
	return (minus + ft_mbase((unsigned int)n, base));
}