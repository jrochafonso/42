/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrocha-a <jrocha-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/27 19:45:10 by jrocha-a          #+#    #+#             */
/*   Updated: 2022/06/01 20:31:11 by jrocha-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
#define FT_PRINTF_H

#include <unistd.h>
#include <stdarg.h>
#include "ft_printf.h"

int ft_putchar(char c);
int ft_putstr(char *s);
int ft_strlen(const char *s);
int ft_mbase(unsigned long long n, char *base);
int ft_ibase(int n, char *base);
int ft_printf(const char *format, ...);

#endif
