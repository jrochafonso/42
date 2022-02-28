/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrocha-a <jrocha-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 20:38:05 by jrocha-a          #+#    #+#             */
/*   Updated: 2021/11/17 04:32:38 by jrocha-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*sub;

	i = 0;
	if (s == 0)
		return (0);
	if (ft_strlen(s) < len)
		len = ft_strlen(s);
	if (ft_strlen(s) < start)
		return (ft_strdup(""));
	sub = (char *)malloc ((len + 1) * sizeof(char));
	if (sub == 0)
		return (0);
	while (i < len && s[start + i] != 0)
	{
		sub[i] = s[start + i];
		i++;
	}
	sub[i] = '\0';
	return (sub);
}
/*
int	main()
{
	printf("%s\n", ft_substr("i just want this part #############", 5, 10));
	return (0);
}
*/
