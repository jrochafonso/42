/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrocha-a <jrocha-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/28 16:12:28 by jrocha-a          #+#    #+#             */
/*   Updated: 2021/09/29 00:33:48 by jrocha-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	else if (index <= 1)
		return (index);
	return ((ft_fibonacci(index - 1)) + (ft_fibonacci(index - 2)));
}
/*
#include <stdio.h>
int	main(void)
{
	printf("%d\n", ft_fibonacci(2));
	return (0);
}*/
