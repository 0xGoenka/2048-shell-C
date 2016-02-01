/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rot.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eleclet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/12 13:21:00 by eleclet           #+#    #+#             */
/*   Updated: 2015/12/13 14:32:08 by eleclet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_rot(size_t n, char *s)
{
	char	*ret;
	size_t	i;

	i = 0;
	ret = (char *)malloc(sizeof(*s) * ft_strlen(s) + 1);
	while (n > ft_strlen(s))
		n = n - ft_strlen(s);
	while (i < ft_strlen(s))
	{
		if (i + n < ft_strlen(s))
			ret[i] = s[i + n];
		else
			ret[i] = s[i + n - ft_strlen(s)];
		i++;
	}
	ret[i] = '\0';
	return (ret);
}
