/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrvrs.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eleclet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/12 13:04:39 by eleclet           #+#    #+#             */
/*   Updated: 2015/12/13 14:16:52 by eleclet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrvrs(char *s)
{
	char	*ret;
	size_t	i;

	i = 0;
	ret = (char *)malloc(sizeof(*s) * ft_strlen(s) + 1);
	while (i < ft_strlen(s))
	{
		ret[i] = s[ft_strlen(s) - i - 1];
		i++;
	}
	ret[i] = '\0';
	return (ret);
}
