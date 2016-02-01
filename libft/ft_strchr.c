/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eleclet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/26 15:38:50 by eleclet           #+#    #+#             */
/*   Updated: 2016/01/25 17:20:14 by eleclet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*dest;

	dest = (char *)s;
	while (*dest != c)
	{
		if (*dest == '\0')
			return (NULL);
		dest++;
	}
	return (dest);
}
