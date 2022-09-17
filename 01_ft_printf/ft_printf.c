/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrocha-a <jrocha-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/27 14:36:08 by jrocha-a          #+#    #+#             */
/*   Updated: 2022/06/01 20:33:00 by jrocha-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int flags(va_list arg, const char *format)
{
	if (*format == '%')
		return (write(1, &"%", 1));
	if (*format == 'c')
		return (ft_putchar(va_arg(arg, int)));
	if (*format == 's')
		return (ft_putstr(va_arg(arg, char *)));
	if (*format == 'p')
		return (write(1, "0x", 2) ft_mbase(va_arg(arg, unsigned long long), "0123456789abcdef"));
	if (*format == 'd' || *format == 'i')
		return (ft_ibase(va_arg(arg, int), "0123456789"));
	if (*format == 'u')
		return (ft_mbase(va_arg(arg, unsigned int), "0123456789"));
	if (*format == 'x')
		return (ft_mbase(va_arg(arg, unsigned int), "0123456789abcdef"));
	if (*format == 'X')
		return (ft_mbase(va_arg(arg, unsigned int), "0123456789ABCDEF"));
	return (0);
}

int ft_printf(const char *format, ...)
{
	va_list arg;
	int i;
	int counter;

	i = 0;
	counter = 0;
	va_start(arg, format);
	while (format[i])
	{
		if (format[i] == '%')
			counter += flags(arg, &format[++i]);
		else
			counter += write(1, &format[i], 1);
		i++;
	}
	va_end(arg);
	return (counter);
}
