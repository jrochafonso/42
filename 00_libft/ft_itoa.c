/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrocha-a <jrocha-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 19:49:37 by jrocha-a          #+#    #+#             */
/*   Updated: 2021/11/29 20:42:42 by jrocha-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	lenght(int n)
{
	int	len;

	len = 0;
	if (n == 0)
		return (1);
	if (n < 0)
	{
		len++;
		n = -n;
	}
	while (n > 0)
	{
		len++;
		n /= 10;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char	*s;
	size_t	len;

	len = lenght(n);
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	s = malloc(sizeof(char) * len + 1);
	if (!s)
		return (0);
	s[len] = 0;
	len--;
	if (n == 0)
		s[0] = 48;
	else if (n < 0)
	{
		s[0] = '-';
		n = -n;
	}
	while (n > 0)
	{
		s[len] = (n % 10) + 48;
		n = n / 10;
		len--;
	}
	return (s);
}
/*
int main()
{
	printf("%s", ft_itoa(234));
}
*/
