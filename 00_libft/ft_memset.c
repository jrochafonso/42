/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrocha-a <jrocha-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/21 20:45:15 by jrocha-a          #+#    #+#             */
/*   Updated: 2021/11/09 00:22:26 by jrocha-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*p;

	p = (unsigned char *)b;
	while (len > 0)
	{
		p[len - 1] = c;
		len--;
	}
	return (b);
}
/*
int main(void)
{
    char str[50] = "testing the c ft_memset";
    printf("\nBefore memset(): %s\n", str);

    ft_memset(str + 13, '.', 4*sizeof(char));

    printf("After memset():  %s", str);
}
*/
