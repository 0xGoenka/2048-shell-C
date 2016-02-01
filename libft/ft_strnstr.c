/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eleclet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/02 17:44:08 by eleclet           #+#    #+#             */
/*   Updated: 2015/12/08 11:25:52 by eleclet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_str2(const char *s1, const char *s2, int i, size_t n)
{
	size_t	k;
	size_t	j;

	k = i;
	j = 0;
	while (s2[j] == s1[k] && s1[k] != '\0' && s2[j] != '\0' && k < n)
	{
		k++;
		j++;
		if (s2[j] == '\0')
			return (1);
	}
	return (0);
}

char		*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (s2[0] == '\0' && s1[0] == '\0')
		return ((char *)s1);
	if (s2[0] == '\0')
		return ((char *)s1);
	while (s1[i] != '\0' && i < n)
	{
		if (s2[0] == s1[i])
		{
			if (ft_str2(s1, s2, i, n) == 1)
				return ((char *)s1 + i);
		}
		i++;
	}
	return (0);
}
