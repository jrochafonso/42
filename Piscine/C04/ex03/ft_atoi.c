/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrocha-a <jrocha-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/27 19:07:33 by jrocha-a          #+#    #+#             */
/*   Updated: 2021/09/29 01:00:11 by jrocha-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	space(char n)
{
	if (n == 32 || (n >= 9 && n <= 13))
		return (1);
	return (0);
}

int	signal(char n)
{
	if (n == '-' || n == '+')
		return (1);
	return (0);
}

int	number(char n)
{
	if (n >= '0' && n <= '9')
		return (1);
	return (0);
}

int	ft_atoi(char *str)
{
	int	i;
	int	minus;
	int	result;

	i = 0;
	minus = 1;
	result = 0;
	while (space(str[i]))
		i++;
	while (signal(str[i]))
	{
		if (str[i] == '-')
			minus *= -1;
		i++;
	}
	while (number(str[i]))
	{
		result *= 10;
		result += str[i] - 48;
		i++;
	}
	return (result * minus);
}
/*
int	ft_atoi(char *str);
int	space(char n);
int	signal(char n);
int	number(char n);

#include <stdio.h>
int	main(void)
{
	char	*str;

	str = " ---+--+1234ab567";
	printf("%d", (ft_atoi(str)));
}
*/
