/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eleclet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/26 15:43:53 by eleclet           #+#    #+#             */
/*   Updated: 2015/12/08 11:27:26 by eleclet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *s1, const char *s2)
{
	size_t	index1;
	size_t	index2;

	index1 = 0;
	if (!*s2)
		return ((char*)s1);
	while (s1[index1])
	{
		index2 = 0;
		while (s1[index1 + index2] && s2[index2]
			&& s2[index2] == s1[index1 + index2])
			index2++;
		if (!s2[index2])
			return (char*)(s1 + index1);
		index1++;
	}
	return (NULL);
}
