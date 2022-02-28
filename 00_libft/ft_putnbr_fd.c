/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrocha-a <jrocha-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 17:25:37 by jrocha-a          #+#    #+#             */
/*   Updated: 2021/11/16 19:18:59 by jrocha-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	if (n < 0)
	{
		if (n == -2147483648)
			write(fd, "-2147483648", 11);
		else
		{
			write(fd, "-", 1);
			n = -n;
		}
	}
	if (n > 9)
	{
		ft_putnbr_fd((n / 10), fd);
		ft_putnbr_fd((n % 10), fd);
	}
	if (n <= 9 && n >= 0)
	{
		n = n + 48;
		write(fd, &n, 1);
	}
}
/*
int	main(void)
{
	ft_putnbr_fd(-2147483648, 1);
	return (0);
}*/
