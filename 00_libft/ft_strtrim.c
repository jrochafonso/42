/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrocha-a <jrocha-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 20:08:07 by jrocha-a          #+#    #+#             */
/*   Updated: 2021/11/17 19:47:13 by jrocha-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	len;

	if (!s1 || !set)
		return (0);
	if (ft_strlen(s1) <= 0)
		return (ft_strdup(""));
	i = 0;
	len = ft_strlen(s1);
	while (ft_strchr(set, s1[i]) != 0)
	{
		if (i++ > len)
			return (ft_strdup(""));
	}
	j = len - 1;
	while (ft_strrchr(set, s1[j]) != 0)
	{
		if (j < i)
			return (ft_strdup(""));
		j--;
	}
	return (ft_substr(s1, i, j - i + 1));
}
/*
char	*ft_strtrim(char const *s1, char const *set)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	len;

	if (!s1 || !set)
		return (0);
	if (ft_strlen(s1) <= 0)
		return (ft_strdup(""));
	i = 0;
	len = ft_strlen(s1) - 1;
	while (ft_strchr(set, s1[i]) != 0)
	{
		if (i++ > len)
			return (ft_strdup(""));
	}
	while (ft_strchr(set, s1[len]) != 0)
	{
		if (len-- <= i)
			return (ft_strdup(""));
	}
	return (ft_substr(s1, i, (len + 1 - i)));
}

int	main(void)
{
	//s = ft_strtrim("abcdba", "acb");
	printf("%s\n", ft_strtrim("abcdba", "abc"));
}
*/
